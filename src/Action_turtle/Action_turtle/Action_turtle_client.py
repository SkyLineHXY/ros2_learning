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
                                          'move_circle')# ���������ͻ��ˣ��ӿ����͡���������
    def send_goal(self,enable):      # ����һ�����Ͷ���Ŀ��ĺ���
        # pdb.set_trace()
        goal_msg = MoveCircle.Goal() # ����һ������Ŀ�����Ϣ
        goal_msg.enable=enable
        self.action_client.wait_for_server()
        self.send_goal_future =self.action_client.send_goal_async( #�첽��ʽ���Ͷ�����Ŀ��
            goal=goal_msg,
            feedback_callback=self.goal_response_callback)
        self.send_goal_future.add_done_callback(self.goal_response_callback)# ����һ���������յ�Ŀ��֮����ʱ�Ļص�����
        # self.action_client.send_goal(goal_msg)
    def goal_response_callback(self,future):
        # print(future)
        goal_handle = future.result() 
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected')
            return
        self.get_logger().info('Goal accepted')
        self._get_result_future = goal_handle.get_result_async()              # �첽��ȡ��������ִ�еĽ������
        self._get_result_future.add_done_callback(self.get_result_callback)   # ����һ���յ����ս���Ļص����� 
    
    def get_result_callback(self, future):                                    # ����һ���յ����ս���Ļص�����
        result = future.result()                                       # ��ȡ����ִ�еĽ��
        # self.get_logger().info('Result: {%d}' % result.finish)                # ��־���ִ�н��

    def feedback_callback(self, feedback_msg):                                # �����������ڷ�����Ϣ�Ļص�����
        feedback = feedback_msg.feedback                                      # ��ȡ����������
        self.get_logger().info('Received feedback: {%d}' % feedback.state) 
        
def main(args=None):                                       # ROS2�ڵ������main����
    rclpy.init(args=args)                                  # ROS2 Python�ӿڳ�ʼ��
    node = ActionClientTurtle()    # ����ROS2�ڵ���󲢽��г�ʼ��
    node.send_goal(True)                                   # ���Ͷ���Ŀ��
    rclpy.spin(node)                                       # ѭ���ȴ�ROS2�˳�
    node.destroy_node()                                    # ���ٽڵ����
    rclpy.shutdown()                                       # �ر�ROS2 Python�ӿ�
