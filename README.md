
# ROS2ѧϰ��¼
>[ROS2���������ֲ�](https://docs.ros.org/en/rolling/index.html)
## 0.Linux����ָ��
�����в�ѯ·��:`pwd`
�����д������ļ�:`touch �ļ���`
�����д������ļ���:`mkdir �ļ�����`
������ɾ���ļ�:`rm �ļ���`
������ɾ���ļ���:`rm -r �ļ�����`
ɾ������������`unset http_proxy`
### 0.1 Clash����ָ��
>[clash for linux����blog](https://zhuanlan.zhihu.com/p/693754050)

�ն����нű�������
`$HOME/.clash/start_clash.sh`
### 0.2 Github
ubuntu���ص�access token:

## 1.ROS2����CLIָ��
**����ROS**����ָ�
```bash
wget http://fishros.com/install -O fishros && . fishros
```
### 1.1 ���û���
#### 1.1.1 ����ROS2�����ռ�
��linux�������ն˿�ݼ�: `Ctrl+Alt+T`

����ROS�Ĺ����ռ�(workspace)��
```bash
mkdir -p ~/ros2_ws/src
cd ~/ros2_ws/src
```
��ʼ�������ռ䣺
```bash
source /ros2_ws/install/setup.bash
colcon build
```
���Ҫÿ�δ��ն�ʱ�Զ�����ROS2��������������Ҫ��`.bashrc`�ļ�������������ݣ�
```bash
source /ros2_ws/install/setup.bash
```
���������������
```bash
echo "source /ros2_ws/install/setup.bash" >> ~/.bashrc
```
#### 1.1.2 ����ROS2��
* ����C++���ܰ�(package)��
```bash
cd ~/ros2_ws/src
ros2 pkg create --build-type ament_cmake my_package
```
����`ament_cmake`��ROS2��CMake����ϵͳ��
* ����Python���ܰ�(package)��
```bash
ros2 pkg create --build-type ament_python my_package
```
#### 1.1.3 ����ROS2��
�������
```bash
cd ~/ros2_ws
colcon build --symlink-install
```
* ����`--symlink-install`ѡ��������Ǹ��� `colcon` �ڰ�װ������ʹ�÷������ӣ�symlinks�������Ǹ����ļ���
* **����·��**��`ros2_ws`�£�����`ros2_ws/src`
### 1.2 �ڵ�node���ָ��
#### 1.2.1 ����ROS2�ڵ�node
���нڵ㣺
```bash
ros2 run my_package my_node
```
����`my_package`�ǰ�����`my_node`�ǽڵ�����
#### 1.2.2 �鿴ROS2�ڵ�node
�鿴�ڵ㣺
```bash
ros2 node list
```
�鿴�ڵ���Ϣ��
```bash
ros2 node info /node_name
```
�鿴�ڵ㻰�⣺
```bash
ros2 topic list
```
�鿴�ڵ㻰����Ϣ��
```bash
ros2 topic info /topic_name
```
�ڵ���ӳ�䣺����ڵ�ʹ�ò�ͬ�����Ʒ������Ļ��⡣
```bash
ros2 run my_package my_node --ros-args -r /topic1:=/topic2
```
### 1.3 ����topic���ָ��
#### 1.3.1 ��������ָ��
����ros2��������ָ��ṹ���£�
```bash
ros2 topic pub <topic_name> <msg_type> '<args>'
```
����`<args>`Ϊ��Ϣ���ݣ���Ҫ�� YAML �﷨���롣������Ϣ����Ϊ`geometry_msgs/msg/Twist`:
```bash
linear:
  x: 0.5
  y: 0.0
  z: 0.0
angular:
  x: 0.0
  y: 0.0
  z: 0.2
```
����С�����ٶȻ���ָ��:
```bash
ros2 topic pub /turtle1/cmd_vel geometry_msgs/msg/Twist "{linear: {x: 0.5, y: 0.0, z: 0.0}, angular: {x: 0.0, y: 0.0, z: 0.2}}" 
```
### 1.4 ����Serviceָ��
#### 1.4.1 ��������ָ��
����ros2���������ctlָ��ṹ��
```bash
ros2 service call <service_name> <service_type> <args>
```

��������ָ�
```bash
ros2 service call /service_name std_srvs/srv/Empty "{}"
```
���У����������º���ָ�
```bash
ros2 service call /spawn turtlesim/srv/Spawn "{x: 0.5, y: 0.5, theta: 0.0}"
```
### 1.5 inteface���ָ��
```bash
ros2 interface *
```

## 2.����ROS2����ṹ
### 2.1 ROS2���ṹ
��򵥵İ�package����������ʾ���ļ��ṹ��
**python**
 ```bash
my_package/
      package.xml
      resource/my_package
      setup.cfg
      setup.py
      my_package/my_code
```
**CMake**
```bash
my_package/
     CMakeLists.txt
     include/my_package/
     package.xml
     src/
```
### 2.2 pub��sub
#### 2.2.1pub��sub�ļ򵥽ű�(python)
**publisher**
```python
import rclpy
from rclpy.node import Node
from std_msgs.msg import String
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
```
**subscriber**
```python
import rclpy                                       # ROS2 Python�ӿڿ�
from rclpy.node   import Node                      # ROS2 �ڵ���
from std_msgs.msg import String 
# """
# ����һ�������߽ڵ�
# """
class SubscriberNode(Node):
        def __init__(self,name):
        super().__init__(name)
        # ����������
        self.subscription = self.create_subscription(String, 'chatter', self.callback,10)
    # """
    # �ص������������յ���Ϣʱ������
    # msg:���յ�����Ϣ
    # """
    def callback(self, msg):
        ("Received: %s" % msg.data)
```
#### 2.2.2 ��дsetup.py�ļ�
���ֵ�`entry_points`�ڵ�`console_scripts`����ӱ���������ļ����ֵ�:
```python
   entry_points={
        'console_scripts': [
            'talker = beginner_py.pub:main',
            'listener = beginner_py.sub:main'
        ],
    }
```

* ����talker��listenerΪ�ڵ����ơ�
#### 2.2.3 ����ROS2 topic��������ͷ����
##### һ.cv_bridge
�����cv_bridge�������ڽ�ROS2��OpenCV�������ݴ��䡣
```python
import rclpy                            # ROS2 Python�ӿڿ�
from rclpy.node import Node             # ROS2 �ڵ���
from sensor_msgs.msg import Image       # ͼ����Ϣ����
from cv_bridge import CvBridge          # ROS��OpenCVͼ��ת����
import cv2                              # Opencvͼ�����
import numpy as np                      # Python��ֵ�����
```
### 2.3 service��client
![service_client_plot](images/wechat_2024-07-16_154548_000.png)
#### 2.3.1 service�ű�(python)
```python
from example_interfaces.srv import AddTwoInts
import rclpy
from rclpy.node import Node
class add_Service(Node):
    def __init__(self):
        super().__init__('add_service')
        self.service=self.create_service(AddTwoInts, 'add', self.add_callback)
    def add_callback(self,request, response):
        response.sum = request.a + request.b
        return response
def main(args=None):
    rclpy.init(args=args)
    node = add_Service()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
if __name__ == '__main__':
    main()
```
* ����`example_interfaces.srv`Ϊ�Զ�����Ϣ���ͣ�`AddTwoInts`Ϊ�������ơ�
  
#### 2.3.2 client�ű�(python)
```python
from example_interfaces.srv import AddTwoInts
import rclpy
import sys
from rclpy.node import Node
class Client(Node):
    def __init__(self):
        super().__init__('add_client_py')
        self.cli=self.create_client(AddTwoInts, 'add')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req=AddTwoInts.Request()
    def send_request(self,a,b):
        self.req.a=a
        self.req.b=b
        return self.cli.call_async(self.req)
def main(args=None):
    rclpy.init(args=args)
    node = Client()
    print(sys.argv)
    future = node.send_request(int(sys.argv[1]),
                               int(sys.argv[2]))
    rclpy.spin_until_future_complete(node,
                                     future=future)
    response= future.result()
    node.get_logger().info(
        'Result of add_two_ints: for %d + %d = %d' %
        (int(sys.argv[1]), int(sys.argv[2]), response.sum))
    node.destroy_node()
    rclpy.shutdown()
```
### 2.3 �Զ���msg��srv
�����Լ���msg��srv�������£�
1. ��package���½�`msg`��`srv`�ļ��У��������ļ������½�`.msg`��`.srv`�ļ���
2. ��`CmakeLists.txt`�����������srv��msg�ļ�Ŀ¼��
3. ��`package.xml`�����`xxx.srv`��`xxx.msg`���������
4. colcon����package��
#### 2.3.1 CmakeLists.txt��package.xml�����������
* CmakeLists.txt
```sh
find_package(rosidl_default_generators REQUIRED)
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/Num.msg"
  "srv/AddThreeInts.srv"
)
```
���У�Num.msg��AddThreeInts.srvΪ�Զ�����Ϣ�ͷ�������Ҫ��**����ĸ��д**��
