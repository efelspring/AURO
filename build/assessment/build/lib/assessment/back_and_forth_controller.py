import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist

class BackAndForthController(Node):
    def __init__(self):
        super().__init__('back_and_forth_controller')

        # Parameters
        self.declare_parameter('namespace', '')
        self.namespace = self.get_parameter('namespace').get_parameter_value().string_value

        # Topics (with namespace support)
        self.cmd_vel_topic = f'{self.namespace}/cmd_vel'

        # Velocity publisher
        self.cmd_vel_publisher = self.create_publisher(Twist, self.cmd_vel_topic, 10)

        # Movement parameters
        self.moving_forward = True
        self.timer_interval = 5.0  # Seconds for each movement direction
        self.timer = self.create_timer(self.timer_interval, self.switch_direction)

        self.get_logger().info(f"Back-and-Forth Controller initialized for namespace: {self.namespace}")

    def switch_direction(self):
        """Switch the robot's movement direction."""
        self.moving_forward = not self.moving_forward
        twist = Twist()

        if self.moving_forward:
            twist.linear.x = 0.2  # Move forward
            twist.angular.z = 0.0
            self.get_logger().info("Moving forward")
        else:
            twist.linear.x = -0.2  # Move backward
            twist.angular.z = 0.0
            self.get_logger().info("Moving backward")

        self.cmd_vel_publisher.publish(twist)

def main(args=None):
    rclpy.init(args=args)
    node = BackAndForthController()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info("Shutting down Back-and-Forth Controller")
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
