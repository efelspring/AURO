import rclpy
from rclpy.node import Node
from sensor_msgs.msg import LaserScan

class LidarNode(Node):
    def __init__(self):
        super().__init__('lidar_node')
        
        # Declare parameters for customization
        self.declare_parameter('scan_topic', '/scan')
        self.declare_parameter('frequency', 10.0)  # Hz

        # Get parameter values
        scan_topic = self.get_parameter('scan_topic').get_parameter_value().string_value
        self.frequency = self.get_parameter('frequency').get_parameter_value().double_value

        # Subscriber to LiDAR scan topic
        self.subscription = self.create_subscription(
            LaserScan,
            scan_topic,
            self.lidar_callback,
            10  # QoS depth
        )
        self.subscription  # Prevent unused variable warning

        self.get_logger().info(f"LidarNode subscribed to {scan_topic}")

    def lidar_callback(self, msg: LaserScan):
        """Callback function to process LiDAR scan data."""
        # Log range data (Example: Closest obstacle distance)
        closest_range = min(msg.ranges)
        closest_angle_index = msg.ranges.index(closest_range)
        closest_angle = msg.angle_min + closest_angle_index * msg.angle_increment

        self.get_logger().info(
            f"Closest obstacle at angle {closest_angle:.2f} radians with distance {closest_range:.2f} meters"
        )

        # TODO: Add your custom data processing logic here

    def start(self):
        """Main loop to run at a specified frequency."""
        timer_period = 1.0 / self.frequency
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.get_logger().info(f"LidarNode running at {self.frequency} Hz")

    def timer_callback(self):
        """Periodic actions can be added here."""
        # This can be used for periodic tasks if needed
        pass


def main(args=None):
    rclpy.init(args=args)

    lidar_node = LidarNode()
    lidar_node.start()

    try:
        rclpy.spin(lidar_node)
    except KeyboardInterrupt:
        lidar_node.get_logger().info('Shutting down LidarNode...')
    finally:
        lidar_node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
