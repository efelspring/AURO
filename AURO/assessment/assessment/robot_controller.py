import random
import math
from geometry_msgs.msg import Twist
from std_msgs.msg import String
from assessment.item_sensor import ItemSensor
from assessment.lidar_sensor import LidarNode
from assessment.priority_manager import PriorityManagerNode
from assessment.robot_sensor import RobotSensor
from rclpy.node import Node

class RobotController(Node):
    def __init__(self):
        super().__init__('robot_controller')
        self.publisher = self.create_publisher(Twist, '/cmd_vel', 10)
        self.timer = self.create_timer(0.1, self.control_loop)

        self.item_sensor = ItemSensor()
        self.lidar_sensor = LidarNode()
        self.priority_manager = PriorityManagerNode()
        self.robot_sensor = RobotSensor()

        self.priority_manager.set_priority('seeking item')
        
        self.target_item = None  # The currently targeted item
        self.item_list = []  # Stores the list of detected items

        # Subscribe to the ItemSensor's published list of detected items
        self.subscription = self.create_subscription(String, '/detected_items', self.item_callback, 10)
        
    def item_callback(self, msg):
        """Callback to handle the list of detected items."""
        self.item_list = msg.data.split(',')  # Assuming items are comma-separated strings
        if self.item_list:
            self.target_item = self.item_list[0]  # Select the first item as the target


    def control_loop(self):
        current_priority = self.priority_manager.get_priority()

        if current_priority == 'seeking item':
            self.random_movement()
            
            if self.target_item:  # Check if an item is detected
                item_distance = self.lidar_sensor.get_distance_to_item(self.target_item)
                if item_distance and item_distance < 1.5:  # Example threshold
                    self.priority_manager.set_priority('found item')
        
        elif current_priority == 'found item':
            if self.target_item:
                self.align_with_item()
                self.priority_manager.set_priority('has item')

        elif current_priority == 'has item':
            if self.target_item:
                self.move_to_item()

    def random_movement(self):
        twist = Twist()
        twist.linear.x = random.uniform(0.0, 0.5)
        twist.angular.z = random.uniform(-0.5, 0.5)
        self.publisher.publish(twist)

    def align_with_item(self):
        twist = Twist()
        item_angle = self.item_sensor.get_item_angle(self.item)
        if math.fabs(item_angle) > 0.1:  # Example threshold for alignment
            twist.angular.z = 0.3 if item_angle > 0 else -0.3
        else:
            twist.angular.z = 0
        self.publisher.publish(twist)

    def move_to_item(self):
        twist = Twist()
        distance = self.lidar_sensor.get_distance_to_item(self.item)

        if distance and distance > 0.3:  # Example stopping threshold
            twist.linear.x = 0.5
        else:
            twist.linear.x = 0
            self.priority_manager.set_priority('seeking item')
        self.publisher.publish(twist)
        
def main():
    import rclpy
    rclpy.init()
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
