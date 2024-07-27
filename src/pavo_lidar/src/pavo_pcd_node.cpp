#include "rclcpp/rclcpp.hpp"
#include <string>
#include <chrono>
#include <functional>
#include <memory>
#include "pavo_driver.h"
#include "utils.h"
#include "sensor_msgs/msg/point_cloud.hpp"
#define MAX_RESPONSES (4096)
using namespace pavo;
pavo::pavo_driver *drv =NULL;


class PC_Pub_node : public rclcpp::Node
{
    public:
    PC_Pub_node() : Node("pavo_pcd_node")
    {
        this->declare_parameter("frame_id", "pcd_frame");
        this->declare_parameter("cloud_topic", "cloud");
        this->declare_parameter("angle_max", 135.0);
        this->declare_parameter("angle_min", -135.0);
        this->declare_parameter("motor_speed", 15);
        this->declare_parameter("merge_coef", 2);
        this->declare_parameter("enable_motor", true);
        this->declare_parameter("lidar_ip", "10.10.10.101");
        this->declare_parameter("lidar_port", 65535);
        this->declare_parameter("host_ip", "10.10.10.102");
        this->declare_parameter("host_port", 2368);
        this->declare_parameter("inverted", false);
        this->declare_parameter("method", 0);
        this->declare_parameter("switch_active_mode",true);
        
        this->get_param("frame_id",this->frame_id);
        this->get_param("cloud_topic",this->cloud_topic);
        this->get_param("angle_max",this->angle_max);
        this->get_param("angle_min",this->angle_min);
        this->get_param("motor_speed",this->motor_speed);
        this->get_param("merge_coef",this->merge_coef);
        this->get_param("enable_motor",this->enable_motor);
        this->get_param("lidar_ip",this->lidar_ip);
        this->get_param("lidar_port",this->lidar_port);
        this->get_param("host_ip",this->host_ip);
        this->get_param("host_port",this->host_port);
        this->get_param("inverted",this->inverted);
        this->get_param("method",this->method);
        this->get_param("switch_active_mode",this->switch_active_mode);

        pub_Pc = this->create_publisher<sensor_msgs::msg::PointCloud>("pcd", 50);
        timer_ =this->create_wall_timer(std::chrono::milliseconds(1000 / motor_speed),
                std::bind(&PC_Pub_node::timer_callback, this));
        if(!this->switch_active_mode)
        {
            drv = new pavo::pavo_driver();
            
        }
        else
        {
            std::cout<<this->host_ip<<std::endl;
            drv = new pavo::pavo_driver(this->host_ip,this->host_port);
        }
        drv->pavo_open(this->lidar_ip,this->lidar_port);
        drv->enable_motor(this->enable_motor);
        if(!this->enable_motor)
        {
            pid_t kill_num;
            kill_num = getppid();
            kill(kill_num,4);
            return ;
        }
        if(this->method == 0 || this->method == 1 || this->method == 2 || this->method == 3)
        {
            drv->enable_tail_filter(this->method);
            if(method>0)
            {
                RCLCPP_INFO(this->get_logger(),"success to eliminate the tail by using method: %d",(int)method);                
            }
            // else{
            //     RCLCPP_ERROR(this->get_logger(),"false to set tail filter_1!");
            // }
        }
        else{
            RCLCPP_ERROR(this->get_logger(),"false to set tail filter!");
            return ;
        }
        if(drv->set_motor_speed(motor_speed))
        {
            RCLCPP_INFO(this->get_logger(),"success to set motor speed: %d",motor_speed);
        }
        else{
            RCLCPP_ERROR(this->get_logger(),"false to set motor speed!");
        //    return ;
        }
        if(drv->set_merge_coef(merge_coef))//设置1点合并,分辨率是0.12°
        {
            RCLCPP_INFO(this->get_logger(),"success to set merge coef: %d",merge_coef);
        } 
        else{
            RCLCPP_ERROR(this->get_logger(),"false to set merge coef!");
            // return;
        }
    };
    ~PC_Pub_node()
    {
        delete drv;
    };
    private:
        rclcpp::Publisher<sensor_msgs::msg::PointCloud>::SharedPtr pub_Pc;
        rclcpp::TimerBase::SharedPtr timer_;
        std::string frame_id, lidar_ip, host_ip, cloud_topic;
        int lidar_port, host_port;
        int motor_speed,method;
        int merge_coef;
        double angle_min,angle_max;
        bool inverted,enable_motor,switch_active_mode;
        void get_param(const std::string &param_name, auto &param_var)
        {
            if (this->has_parameter(param_name))
            {
                this->get_parameter(param_name, param_var);
            }
        };
        void timer_callback()
        {
            std::vector<pavo_response_pcd_t> pcd_vec;
            int num_points;
            rclcpp::Clock sys_time(RCL_SYSTEM_TIME);
            sensor_msgs::msg::PointCloud cloud;
            drv->get_scanned_data(pcd_vec);
            num_points = pcd_vec.size();
            cloud.header.stamp = sys_time.now();
            cloud.header.frame_id = frame_id;
            cloud.points.resize(num_points);

            cloud.channels.resize(1);
            cloud.channels[0].name = "intensities";
            cloud.channels[0].values.resize(num_points);
             if(!this->inverted)
             {
                for( int i = 0; i < num_points; i++){
                    cloud.points[i].x = -pcd_vec[i].x * 0.002f;
                    cloud.points[i].y = -pcd_vec[i].y * 0.002f;
                    cloud.points[i].z = pcd_vec[i].z;
                    cloud.channels[0].values[i] = pcd_vec[i].intensity;
                } 
             }
             else
             {
                for( int i = 0; i < num_points; i++)
                {   
                    cloud.points[num_points-1-i].x = -pcd_vec[i].x * 0.002f ;
                    cloud.points[num_points-1-i].y = pcd_vec[i].y * 0.002f ;
                    cloud.points[num_points-1-i].z = pcd_vec[i].z;
                    cloud.channels[0].values[num_points-1-i] = pcd_vec[i].intensity;                 
                }
             }
             
            this->pub_Pc->publish(cloud);

            // RCLCPP_INFO_THROTTLE(this->get_logger(), sys_time, 2000, "Publishing twist: %f", msg_v.linear.x);

        }


};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<PC_Pub_node>());
    rclcpp::shutdown();
    return 0;
}
