import rclpy                            # ROS2 Python接口库
from rclpy.node import Node             # ROS2 节点类
from sensor_msgs.msg import Image       # 图像消息类型
from cv_bridge import CvBridge          # ROS与OpenCV图像转换类
import cv2                              # Opencv图像处理库
import numpy as np                      # Python数值计算库


class Image_PublishNode(Node):
    def __init__(self):
        super().__init__('cv_bridge')
        # 创建图像话题发布者
        self.publisher = self.create_publisher(Image, 'image', 10)
        # 创建定时器，每秒发布一次图像
        timer_period = 1/60   # 60HZ
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.cap=cv2.VideoCapture(0)
        # 创建ROS与OpenCV图像转换类
        self.cv2_bridge = CvBridge()
    #定时发布摄像头的图像
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
    
    