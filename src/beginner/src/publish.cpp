#include <string>
#include <chrono>
#include <functional>
#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "geometry_msgs/msg/twist.hpp"

using namespace std::chrono_literals;


class TestCppNode : public rclcpp::Node
{
    public:
        TestCppNode(std::string name) : Node(name), cnt_(0)
        {
            rmw_qos_profile_t qos_profile = rmw_qos_profile_sensor_data;
            rclcpp::QoS qos_s = rclcpp::QoS(
                rclcpp::QoSInitialization(
                    qos_profile.history, //RMW_QOS_POLICY_HISTORY_KEEP_LAST
                    qos_profile.depth    //10
                ), 
                qos_profile
            );  //create a QoS profile using sensor_profile(BEST_EFFORT)
            rclcpp::QoS qos_v = rclcpp::QoS(10);  //create a QoS profile using default_profile(RELIABLE)
            pub_s = this->create_publisher<std_msgs::msg::String>("chatter", qos_s);
            pub_v = this->create_publisher<geometry_msgs::msg::Twist>("cmd_vel", qos_v);
            timer_s = this->create_wall_timer(500ms, std::bind(&TestCppNode::timer_s_callback, this));
            timer_v = this->create_wall_timer(100ms, std::bind(&TestCppNode::timer_v_callback, this));
        }
    private:
        rclcpp::TimerBase::SharedPtr timer_s;
        rclcpp::TimerBase::SharedPtr timer_v;
        rclcpp::Publisher<std_msgs::msg::String>::SharedPtr pub_s;
        rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr pub_v;
        size_t cnt_;
        void timer_s_callback()
        {
            rclcpp::Clock sys_time(RCL_SYSTEM_TIME);
            auto msg_s = std_msgs::msg::String();
            msg_s.data = "Testing publisher"+std::to_string(cnt_++);
            pub_s->publish(msg_s);
            RCLCPP_INFO_THROTTLE(this->get_logger(), sys_time, 2000, "Publishing string: %s", msg_s.data.c_str());
        }
        void timer_v_callback()
        {
            rclcpp::Clock sys_time(RCL_SYSTEM_TIME);
            auto msg_v = geometry_msgs::msg::Twist();
            msg_v.linear.x = 100;
            msg_v.angular.z = 1;
            pub_v->publish(msg_v);
            RCLCPP_INFO_THROTTLE(this->get_logger(), sys_time, 2000, "Publishing twist: %f", msg_v.linear.x);
        }   


};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<TestCppNode>("talker"));
    rclcpp::shutdown();
    return 0;
}
