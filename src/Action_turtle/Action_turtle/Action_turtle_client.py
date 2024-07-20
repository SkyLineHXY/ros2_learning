import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from srv_msg_creating.action import MoveCircle
import pdb

class ActionClientTurtle(Node):
    def __init__(self):
        super().__init__('turtle_action_client')
        self.action_client = ActionClient(self,
                                          MoveCircle,
                                          'move_circle')# 创建动作客户端（接口类型、动作名）
    def send_goal(self,enable):      # 创建一个发送动作目标的函数
        # pdb.set_trace()
        goal_msg = MoveCircle.Goal() # 创建一个动作目标的消息
        goal_msg.enable=enable
        self.action_client.wait_for_server()
        self.send_goal_future =self.action_client.send_goal_async( #异步方式发送动作的目标
            goal=goal_msg,
            feedback_callback=self.goal_response_callback)
        self.send_goal_future.add_done_callback(self.goal_response_callback)# 设置一个服务器收到目标之后反馈时的回调函数
        # self.action_client.send_goal(goal_msg)
    def goal_response_callback(self,future):
        # print(future)
        goal_handle = future.result() 
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected')
            return
        self.get_logger().info('Goal accepted')
        self._get_result_future = goal_handle.get_result_async()              # 异步获取动作最终执行的结果反馈
        self._get_result_future.add_done_callback(self.get_result_callback)   # 设置一个收到最终结果的回调函数 
    
    def get_result_callback(self, future):                                    # 创建一个收到最终结果的回调函数
        result = future.result()                                       # 读取动作执行的结果
        # self.get_logger().info('Result: {%d}' % result.finish)                # 日志输出执行结果

    def feedback_callback(self, feedback_msg):                                # 创建处理周期反馈消息的回调函数
        feedback = feedback_msg.feedback                                      # 读取反馈的数据
        self.get_logger().info('Received feedback: {%d}' % feedback.state) 
        
def main(args=None):                                       # ROS2节点主入口main函数
    rclpy.init(args=args)                                  # ROS2 Python接口初始化
    node = ActionClientTurtle()    # 创建ROS2节点对象并进行初始化
    node.send_goal(True)                                   # 发送动作目标
    rclpy.spin(node)                                       # 循环等待ROS2退出
    node.destroy_node()                                    # 销毁节点对象
    rclpy.shutdown()                                       # 关闭ROS2 Python接口
