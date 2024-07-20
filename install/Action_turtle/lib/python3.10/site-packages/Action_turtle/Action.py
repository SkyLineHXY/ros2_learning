import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from turtlesim.action import RotateAbsolute
from srv_msg_creating.action import MoveCircle
from geometry_msgs.msg import Twist
class TurtleActionServer(Node):
    def __init__(self):
        super().__init__('turtle_action_server')
        self.action_server = ActionServer(
            self, RotateAbsolute, 'move_circle', self.execute_callback)
        self.cmd_vel_publisher = self.create_publisher(Twist, 'turtle1/cmd_vel', 10)
    
    def execute_callback(self, goal_handle):
        goal = goal_handle.request.goal
        self.get_logger().info(f'Received goal: theta={goal.theta}')       
        # r = self.get_rate()
        feedback_msg = RotateAbsolute.Feedback()
        result_msg = RotateAbsolute.Result()
        while not goal_handle.is_canceled and not goal_handle.is_done():
            if goal_handle.request.goal_theta == goal.theta:
                result_msg.position = goal_handle.request.goal_theta
                goal_handle.succeed()
                self.get_logger().info('Goal succeeded')
                break
            feedback_msg.position = goal.theta
            goal_handle.publish_feedback(feedback=feedback_msg)
                        # 发布速度命令
            cmd_vel_msg = Twist()
            cmd_vel_msg.angular.z = 1.0  # 假设顺时针旋转
            self.cmd_vel_pub.publish(cmd_vel_msg)
            rclpy.spin_once(self, timeout_sec=0.1)
            
        return result_msg
        # while r.sleep():
        #     if goal.radius > 0:
        #         self.cmd_vel_publisher.publish(Twist(linear=1))
        #     else:
        #         self.cmd_vel_publisher.publish(Twist(angular=1))
def main(args=None):
    rclpy.init(args=args)
    node = TurtleActionServer()
    rclpy.spin(node)
    node.destroy_node()
    
    rclpy.shutdown()

if __name__ == '__main__':
    main()