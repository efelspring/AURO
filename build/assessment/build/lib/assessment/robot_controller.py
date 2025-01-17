import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from sensor_msgs.msg import LaserScan

class RobotController(Node):
    def __init__(self):
        super().__init__('robot_controller')

        # Publisher to send velocity commands
        self.publisher_ = self.create_publisher(Twist, '/cmd_vel', 10)

        # Subscription to process LiDAR data
        self.subscription_ = self.create_subscription(
            LaserScan,
            '/scan',
            self.lidar_callback,
            10
        )

        # Timer to periodically send commands
        self.timer_ = self.create_timer(1.0, self.timer_callback)

    def lidar_callback(self, msg):
        self.get_logger().info(f"Received LiDAR data: {msg.ranges[0]}")

    def timer_callback(self):
        twist = Twist()
        twist.linear.x = 0.2  # Move forward
        self.publisher_.publish(twist)
        self.get_logger().info("Published velocity command")

def main(args=None):
    rclpy.init(args=args)
    node = RobotController()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
