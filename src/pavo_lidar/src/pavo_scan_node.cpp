#include "pavo_driver.h"
#include "std_srvs/srv/empty.h"

// #include <dynamic_reconfigure/server.h>
#include <fstream>
// #include <pavo_ros/pavo_ros_cfgConfig.h>
#include "utils.h"
#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/laser_scan.h"

#define COMP_NODES (36000)
#define CIRCLE_ANGLE (27000.0)
#define START_ANGLE (4500)

#define DEG2RAD(x) ((x)*M_PI / 180.)

using namespace pavo;
pavo::pavo_driver *drv = NULL;
