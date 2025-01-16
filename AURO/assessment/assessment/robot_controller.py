import rclpy
from rclpy.node import Node
from sensor_msgs.msg import LaserScan
from geometry_msgs.msg import Twist
from nav_msgs.msg import Odometry
import math

class robot_controller(Node):
    def __init__(self):
        super().__init__('robot_controller')

        # Parameters
        self.declare_parameter('namespace', '')
        self.namespace = self.get_parameter('namespace').get_parameter_value().string_value

        # Topics (with namespace support)
        self.lidar_topic = f'{self.namespace}/scan'
        self.cmd_vel_topic = f'{self.namespace}/cmd_vel'
        self.odom_topic = f'{self.namespace}/odom'

        # Lidar data
        self.lidar_data = None

        # Robot velocity publisher
        self.cmd_vel_publisher = self.create_publisher(Twist, self.cmd_vel_topic, 10)

        # Subscriptions
        self.create_subscription(LaserScan, self.lidar_topic, self.lidar_callback, 10)
        self.create_subscription(Odometry, self.odom_topic, self.odom_callback, 10)

        # Timer to control the robot
        self.timer = self.create_timer(0.1, self.control_loop)

        self.get_logger().info(f"robot Controller Node initialized for namespace: {self.namespace}")

    def lidar_callback(self, msg):
        """Process Lidar data."""
        self.lidar_data = msg.ranges

    def odom_callback(self, msg):
        """Process Odometry data (can be used for navigation tasks)."""
        # Example: Read the current position and orientation
        position = msg.pose.pose.position
        orientation = msg.pose.pose.orientation
        self.get_logger().info(f"Position: {position}, Orientation: {orientation}")

    def control_loop(self):
        """Main control loop to operate the robot."""
        if self.lidar_data is None:
            self.get_logger().info("Waiting for LiDAR data...")
            return

        # Example: Basic obstacle avoidance
        min_distance = min(self.lidar_data)
        min_angle = self.lidar_data.index(min_distance)

        # Threshold for stopping
        stop_distance = 0.5  # meters

        # Twist message to control the robot
        twist = Twist()

        if min_distance < stop_distance:
            self.get_logger().info(f"Obstacle detected at {min_distance} meters, angle {min_angle}")
            twist.linear.x = 0.0
            twist.angular.z = 0.5  # Turn to avoid obstacle
        else:
            twist.linear.x = 0.2  # Move forward
            twist.angular.z = 0.0

        # Publish the velocity command
        self.cmd_vel_publisher.publish(twist)

def main(args=None):
    rclpy.init(args=args)
    node = robot_controller()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info("Shutting down robot Controller Node")
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
