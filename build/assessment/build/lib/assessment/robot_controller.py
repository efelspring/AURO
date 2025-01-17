import random
import math
from geometry_msgs.msg import Twist
from item_sensor import ItemSensor
from lidar_sensor import LidarSensor
from priority_manager import PriorityManager
from robot_sensor import RobotSensor
from rclpy.node import Node

class RobotController(Node):
    def __init__(self):
        super().__init__('robot_controller')
        self.publisher = self.create_publisher(Twist, '/cmd_vel', 10)
        self.timer = self.create_timer(0.1, self.control_loop)

        self.item_sensor = ItemSensor()
        self.lidar_sensor = LidarSensor()
        self.priority_manager = PriorityManager()
        self.robot_sensor = RobotSensor()

        self.priority_manager.set_priority('seeking item')

    def control_loop(self):
        current_priority = self.priority_manager.get_priority()

        if current_priority == 'seeking item':
            self.random_movement()
            detected_item = self.item_sensor.detect_item()

            if detected_item:
                item_distance = self.lidar_sensor.get_distance_to_item(detected_item)
                if item_distance and item_distance < 1.5:  # Example threshold
                    self.priority_manager.set_priority('found item')
                    self.item = detected_item
                    self.item_distance = item_distance
        
        elif current_priority == 'found item':
            self.align_with_item()
            self.priority_manager.set_priority('has item')

        elif current_priority == 'has item':
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

if __name__ == '__main__':
    import rclpy
    rclpy.init()
    node = RobotController()
    rclpy.spin(node)
    rclpy.shutdown()
