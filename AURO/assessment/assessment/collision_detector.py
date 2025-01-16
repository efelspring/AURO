import rclpy
from rclpy.node import Node
from sensor_msgs.msg import LaserScan, Image
from std_msgs.msg import Bool
from cv_bridge import CvBridge
import cv2
import numpy as np


class collision_detector(Node):
    def __init__(self):
        super().__init__('collision_detection_node')

        # Parameters
        self.declare_parameter('lidar_topic', '/scan')
        self.declare_parameter('camera_topic', '/camera/image_raw')
        self.declare_parameter('alert_topic', '/collision_alert')
        self.declare_parameter('safe_distance', 0.5)  # Meters
        self.declare_parameter('frequency', 10.0)  # Hz

        # Get parameter values
        lidar_topic = self.get_parameter('lidar_topic').get_parameter_value().string_value
        camera_topic = self.get_parameter('camera_topic').get_parameter_value().string_value
        self.alert_topic = self.get_parameter('alert_topic').get_parameter_value().string_value
        self.safe_distance = self.get_parameter('safe_distance').get_parameter_value().double_value
        self.frequency = self.get_parameter('frequency').get_parameter_value().double_value

        # Subscribers
        self.lidar_subscription = self.create_subscription(
            LaserScan,
            lidar_topic,
            self.lidar_callback,
            10
        )
        self.camera_subscription = self.create_subscription(
            Image,
            camera_topic,
            self.camera_callback,
            10
        )

        # Publisher
        self.alert_publisher = self.create_publisher(Bool, self.alert_topic, 10)

        # Timer
        timer_period = 1.0 / self.frequency
        self.timer = self.create_timer(timer_period, self.check_collision)

        # LiDAR data storage
        self.closest_obstacle_distance = float('inf')

        # Camera processing setup
        self.bridge = CvBridge()
        self.obstacle_detected_in_camera = False

        self.get_logger().info("CollisionDetectionNode started")

    def lidar_callback(self, msg: LaserScan):
        """Process LiDAR data and find the closest obstacle."""
        self.closest_obstacle_distance = min(msg.ranges)

    def camera_callback(self, msg: Image):
        """Process camera image to detect obstacles."""
        try:
            # Convert ROS Image message to OpenCV image
            frame = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')

            # Simple obstacle detection using color (e.g., red objects)
            hsv_frame = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)
            lower_red = np.array([0, 120, 70])  # Adjust based on your needs
            upper_red = np.array([10, 255, 255])
            mask = cv2.inRange(hsv_frame, lower_red, upper_red)

            # Check if significant area is detected
            obstacle_area = cv2.countNonZero(mask)
            self.obstacle_detected_in_camera = obstacle_area > 1000  # Adjust threshold

        except Exception as e:
            self.get_logger().error(f"Camera processing error: {e}")

    def check_collision(self):
        """Check for potential collisions and publish alerts."""
        collision_detected = False

        # Collision logic
        if self.closest_obstacle_distance < self.safe_distance:
            collision_detected = True
        if self.obstacle_detected_in_camera:
            collision_detected = True

        # Publish alert
        alert_msg = Bool()
        alert_msg.data = collision_detected
        self.alert_publisher.publish(alert_msg)

        # Logging for debugging
        self.get_logger().info(f"Collision Detected: {collision_detected}, "
                               f"LiDAR: {self.closest_obstacle_distance:.2f}m, "
                               f"Camera: {self.obstacle_detected_in_camera}")

def main(args=None):
    rclpy.init(args=args)

    collision_node = CollisionDetectionNode()

    try:
        rclpy.spin(collision_node)
    except KeyboardInterrupt:
        collision_node.get_logger().info("Shutting down CollisionDetectionNode")
    finally:
        collision_node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
