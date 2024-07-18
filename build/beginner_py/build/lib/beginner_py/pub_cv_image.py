import rclpy                            # ROS2 Python�ӿڿ�
from rclpy.node import Node             # ROS2 �ڵ���
from sensor_msgs.msg import Image       # ͼ����Ϣ����
from cv_bridge import CvBridge          # ROS��OpenCVͼ��ת����
import cv2                              # Opencvͼ������
import numpy as np                      # Python��ֵ�����


class Image_PublishNode(Node):
    def __init__(self):
        super().__init__('cv_bridge')
        # ����ͼ���ⷢ����
        self.publisher = self.create_publisher(Image, 'image', 10)
        # ������ʱ����ÿ�뷢��һ��ͼ��
        timer_period = 1/60   # 60HZ
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.cap=cv2.VideoCapture(0)
        # ����ROS��OpenCVͼ��ת����
        self.cv2_bridge = CvBridge()
    #��ʱ��������ͷ��ͼ��
    def timer_callback(self):
        image,frame= self.cap.read()
        ros_image =self.cv2_bridge.cv2_to_imgmsg(image, "bgr8")
        self.publisher.publish(ros_image)
        
        
def main(args=None):
    rclpy.init(args=args)
    node = Image_PublishNode()
    rclpy.spin(node=node)
    node.destroy_node()
    rclpy.shutdown()
    
    