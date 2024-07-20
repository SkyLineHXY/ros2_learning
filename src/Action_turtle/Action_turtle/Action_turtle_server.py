import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from srv_msg_creating.action import MoveCircle
from geometry_msgs.msg import Twist
import time
class TurtleActionServer(Node):
    def __init__(self):
        super().__init__('turtle_action_server')
        self.action_server = ActionServer(
            self, 
            action_type=MoveCircle,
            action_name='move_circle', 
            execute_callback=self.execute_callback)
        self.cmd_vel_publisher = self.create_publisher(Twist, 'turtle1/cmd_vel', 10)

    
    def execute_callback(self, goal_handle):
        # goal = goal_handle.request.goal
        # self.get_logger().info(f'Received goal: theta={goal.theta}')       
        # r = self.get_rate()
        feedback_msg = MoveCircle.Feedback()
        cmd_vel_msg = Twist()
        cmd_vel_msg.angular.z = 1.0 # 假设顺时针旋转
        # result_msg = RotateAbsolute.Result()
        for i in range(0, 360, 30):                     # 从0到360度，执行圆周运动，并周期反馈信息
            feedback_msg.state = i                     # 创建反馈信息，表示当前执行到的角度
            self.get_logger().info('Publishing feedback: %d' % feedback_msg.state)
            goal_handle.publish_feedback(feedback_msg)  # 发布反馈信息
            # cmd_vel_msg.linear.x = float(i)                   # 发布速度命令
            time.sleep(0.5)
            # self.cmd_vel_publisher.publish(cmd_vel_msg) # 发布速度命令
            # rclpy.spin_once(self, timeout_sec=0.1)
        goal_handle.succeed()                           # 动作执行成功
        result = MoveCircle.Result()                    # 创建结果消息
        result.finish = True                            
        return result  
        # while not goal_handle.is_canceled and not goal_handle.is_done():
        #     if goal_handle.request.goal_theta == goal.theta:
        #         result_msg.position = goal_handle.request.goal_theta
        #         goal_handle.succeed()
        #         self.get_logger().info('Goal succeeded')
        #         break
        #     feedback_msg.position = goal.theta
        #     goal_handle.publish_feedback(feedback=feedback_msg)
        #                 # 发布速度命令
        #     cmd_vel_msg = Twist()
        #     cmd_vel_msg.angular.z = 1.0  # 假设顺时针旋转
        #     self.cmd_vel_pub.publish(cmd_vel_msg)
        #     rclpy.spin_once(self, timeout_sec=0.1)
            
        # return result_msg
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