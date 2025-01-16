import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped
from std_msgs.msg import Int32, Bool
from nav2_msgs.action import NavigateToPose
from rclpy.action import ActionClient
import math

class PriorityManagerNode(Node):
    def __init__(self):
        super().__init__('priority_manager_node')

        # Parameters
        self.declare_parameter('robot_id', 1)
        self.declare_parameter('priority_topic', '/priority_updates')
        self.declare_parameter('pose_topic', '/robot_pose')
        self.declare_parameter('collision_avoid_topic', '/collision_avoidance')
        self.declare_parameter('safe_distance', 1.0)  # Distance to trigger yielding

        # Get parameters
        self.robot_id = self.get_parameter('robot_id').get_parameter_value().integer_value
        self.priority_topic = self.get_parameter('priority_topic').get_parameter_value().string_value
        self.pose_topic = self.get_parameter('pose_topic').get_parameter_value().string_value
        self.collision_avoid_topic = self.get_parameter('collision_avoid_topic').get_parameter_value().string_value
        self.safe_distance = self.get_parameter('safe_distance').get_parameter_value().double_value

        # Current state
        self.priority_state = 3
        self.pose = None
        self.other_robots = {}

        # Subscribers
        self.priority_subscription = self.create_subscription(Int32, self.priority_topic, self.priority_callback, 10)
        self.pose_subscription = self.create_subscription(PoseStamped, self.pose_topic, self.pose_callback, 10)

        # Publishers
        self.collision_avoid_publisher = self.create_publisher(Bool, self.collision_avoid_topic, 10)
        self.priority_publisher = self.create_publisher(Int32, self.priority_topic, 10)

        # Nav2 Action Client
        self.nav_to_pose_client = ActionClient(self, NavigateToPose, 'navigate_to_pose')

        # Timer to broadcast robot's priority
        self.create_timer(1.0, self.broadcast_priority)

        self.get_logger().info(f"PriorityManagerNode started for robot {self.robot_id}")

    def priority_callback(self, msg: Int32):
        """Receive priority state updates from other robots."""
        other_robot_id = msg.data
        # Store/update the state of other robots
        self.other_robots[other_robot_id] = {'priority': msg.data}

    def pose_callback(self, msg: PoseStamped):
        """Update this robot's pose."""
        self.pose = msg.pose

    def broadcast_priority(self):
        """Broadcast this robot's priority state."""
        msg = Int32()
        msg.data = self.priority_state
        self.priority_publisher.publish(msg)

    def check_for_collision(self):
        """Check for potential collisions and resolve them."""
        if self.pose is None:
            return

        for other_robot_id, data in self.other_robots.items():
            other_priority = data.get('priority', 3)
            other_pose = data.get('pose', None)

            if other_pose:
                distance = self.calculate_distance(self.pose, other_pose)
                if distance < self.safe_distance and other_priority < self.priority_state:
                    self.get_logger().info(f"Yielding to robot {other_robot_id} (priority {other_priority})")
                    self.yield_to_higher_priority_robot()
                    break

    def calculate_distance(self, pose1, pose2):
        """Calculate Euclidean distance between two poses."""
        dx = pose1.position.x - pose2.position.x
        dy = pose1.position.y - pose2.position.y
        return math.sqrt(dx ** 2 + dy ** 2)

    def yield_to_higher_priority_robot(self):
        """Stop or replan when yielding to a higher-priority robot."""
        self.get_logger().info("Cancelling current goal to yield.")
        self.cancel_navigation_goal()

    def navigate_to_pose(self, target_pose: PoseStamped):
        """Send a new navigation goal."""
        if not self.nav_to_pose_client.wait_for_server(timeout_sec=5.0):
            self.get_logger().error("Navigation action server not available!")
            return

        goal_msg = NavigateToPose.Goal()
        goal_msg.pose = target_pose

        self.get_logger().info(f"Navigating to: {target_pose.pose.position.x}, {target_pose.pose.position.y}")
        self.nav_to_pose_client.send_goal_async(goal_msg)

    def cancel_navigation_goal(self):
        """Cancel the current navigation goal."""
        self.nav_to_pose_client.cancel_all_goals()

def main(args=None):
    rclpy.init(args=args)
    priority_manager_node = PriorityManagerNode()

    try:
        rclpy.spin(priority_manager_node)
    except KeyboardInterrupt:
        priority_manager_node.get_logger().info("Shutting down PriorityManagerNode")
    finally:
        priority_manager_node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
