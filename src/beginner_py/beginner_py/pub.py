import rclpy                                       # ROS2 Python�ӿڿ�
from rclpy.node   import Node                      # ROS2 �ڵ���
from std_msgs.msg import String                    # �ַ�����Ϣ����
                             

class PublisherNode(Node):
    def __init__(self,name):
        super().__init__(name)
        self.publisher=self.create_publisher(msg_type=String,
                                           topic='chatter',
                                           qos_profile=10)
        self.timer = self.create_timer(timer_period_sec=1.0, 
                                       callback=self.publish)

    def publish(self):
        msg=String()
        msg.data=f'Hello, world!'
        # self.get_logger().info(msg)
        self.publisher.publish(msg)
        self.get_logger().info('Publishing: "%s"' % msg.data)
        

def main(args=None):
    rclpy.init()                                   # ��ʼ��ROS2����
    node = PublisherNode('talker_py')                 # �����ڵ����
    
    rclpy.spin(node)                           # ������Ϣѭ����ֱ���˳�
    
    node.destroy_node()                      # ���ٽڵ����
    rclpy.shutdown()                         # �ر�ROS2����
        
if __name__ == '__main__':
    main()  