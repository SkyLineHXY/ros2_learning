import serial
import rclpy
import rclpy.logging
from rclpy.node import Node
import math
import serial.tools.list_ports
from sensor_msgs.msg import Imu
from sensor_msgs.msg import MagneticField
import time
import modbus_tk.defines as cst
from modbus_tk import modbus_rtu
import tf_transformations
def find_ttyUSB():
    # print('The default serial port of the imu is /dev/ttyUSB0, if multiple serial port devices are identified, modify the serial port corresponding to the imu in the launch file')
    posts = [port.device for port in serial.tools.list_ports.comports() if 'USB' in port.device]
    print(posts)
    print('There are {} {} serial port devices connected to the current PC: {}'.format(len(posts), 'USB', posts))

# find_ttyUSB() 

angularVelocity = [0, 0, 0]
acceleration = [0, 0, 0]
magnetometer = [0, 0, 0]
angle_degree = [0, 0, 0]
quat = [0, 0,0 ,1]
class IMU_node(Node):
    def __init__(self):
        find_ttyUSB()
        super().__init__('imu')
        self.port = self.declare_parameter('port', '/dev/ttyUSB0').get_parameter_value().string_value
        self.baudrate = self.declare_parameter("baud", 115200).get_parameter_value().integer_value
        
        print("IMU Type: Modbus Port:%s baud:%d" %(self.port,self.baudrate))
        try:
            wt_imu = serial.Serial(port=self.port, baudrate=self.baudrate, timeout=0.5)
            if wt_imu.isOpen():
                self.get_logger().info("\033[32mport open success...\033[0m")
            else:
                wt_imu.open()
                self.get_logger().info("\033[31mport open failed...\033[0m")
        except Exception as e:
            print(e)
            self.get_logger().info("Failed to open serial port")
            exit(0)
        self.master = modbus_rtu.RtuMaster(wt_imu)
        self.master.set_timeout(1)
        self.master.set_verbose(True)
        # mag为三轴磁力计，imu为陀螺仪
        self.imu_pub = self.create_publisher(Imu, 'wit/imu', 10)
        self.mag_pub = self.create_publisher(MagneticField, 'wit/mag', 10)
        self.timer = self.create_timer(timer_period_sec=0.05, 
                                       callback=self.publish_wit)
    def publish_wit(self):
        imu_msg = Imu()
        mag_msg = MagneticField()
        # quaternion = tf2_geometry_msgs.TF2Geometry_msgsQuaternion()
        #slave表示从机设备地址
        # function_code表示功能码
        # starting_address表示起始地址
        # quantity_of_x表示读取的寄存器个数
        try:
            reg = self.master.execute(slave=0x50,
                                      function_code=cst.READ_HOLDING_REGISTERS,
                                      starting_address=0x34,
                                      quantity_of_x=15)
            # print(reg)
        #reg[0:2]:acc
        #reg[3:5]:gyro
        #reg[6:8]:mag
        #reg[9:10]:rollL-rollH
        #reg[11:12]:pitchL-pitchH
        #reg[13:14]:yawL-yawH
        except Exception as e:
            print(e)
            self.get_logger().info("\033[31mread register time out, please check connection or baundrate set!\033[0m")
            time.sleep(0.1)
        else:
            # self.get_logger().info('suceess\n')
            v=[0]*9
            for i in range(0,9):
                if (reg[i]>32767):
                    v[i]=reg[i]-65536
                else:
                    v[i]=reg[i]

            acceleration = [v[i] / 32768.0 * 16 * 9.8 for i in range(0, 3)]
            angularVelocity = [v[i] / 32768.0 * 2000 * math.pi / 180 for i in range(3, 6)]        
            magnetometer = v[6:9]
            imu_msg.header.stamp = self.get_clock().now().to_msg()
            imu_msg.angular_velocity.x = angularVelocity[0]
            imu_msg.angular_velocity.y = angularVelocity[1]
            imu_msg.angular_velocity.z = angularVelocity[2]
            
            imu_msg.linear_acceleration.x = acceleration[0]
            imu_msg.linear_acceleration.y = acceleration[1]
            imu_msg.linear_acceleration.z = acceleration[2]

            mag_msg.magnetic_field.x = float(magnetometer[0])
            mag_msg.magnetic_field.y = float(magnetometer[1])
            mag_msg.magnetic_field.z = float(magnetometer[2])
        #读取四元数
        try :
            reg = self.master.execute(slave=0x50,
                                      function_code=cst.READ_HOLDING_REGISTERS,
                                      starting_address=0x51,
                                      quantity_of_x=4)
        except Exception as e:
            print(e)
            self.get_logger().info("\033[31mread register time out, please check connection or baundrate set!\033[0m")
            time.sleep(0.1)     
        else:
            v=[0]*4
            for i in range(0,4):
                if (reg[i]>32767):
                    v[i]=reg[i]-65536
                else:
                    v[i]=reg[i]
            quat = [v[i]/32768 for i in range(0, 4)]
            imu_msg.orientation.x = quat[0]
            imu_msg.orientation.y = quat[1]
            imu_msg.orientation.z = quat[2]
            imu_msg.orientation.w = quat[3] 
            
            imu_msg.header.frame_id = 'map'
            imu_msg.header.stamp = self.get_clock().now().to_msg()
            
        
            euler=tf_transformations.euler_from_quaternion(quat)
            # rpy
            #保留RPY两位小数

            self.get_logger().info(' roll :'+str(round(euler[2]*180/3.1415926,2))
                  +' pitch:'+str(round(euler[1]*180/3.1415926,2))
                  + ' yaw:' + str(round(euler[0]*180/3.1415926,2)))
            self.imu_pub.publish(imu_msg)
            self.mag_pub.publish(mag_msg)
def main(args=None):
    rclpy.init(args=args)
    imu_node = IMU_node()
    rclpy.spin(imu_node)
    imu_node.destroy_node()
    rclpy.shutdown()
        
        