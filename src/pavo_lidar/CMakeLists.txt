cmake_minimum_required(VERSION 3.8)
project(pavo_lidar)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(Boost 1.71.0 REQUIRED COMPONENTS thread atomic system regex filesystem)

include_directories(${Boost_INCLUDE_DIRS})


# find_package( COMPONENTS    program_options_thread )
# find_package(Boost REQUIRED COMPONENTS thread)
set(PAVO_SDK_PATH "/home/zzq/Desktop/ros2_ws/src/pavo_lidar/sdk")


if(Boost_FOUND)
## 在win10平台 ros2 版本dashing中 message 打印信息编译报错，注意需要注释掉.
 message(Boost_INCLUDE_DIRS " ${Boost_INCLUDE_DIRS}")
 message(Boost_LIBRARY_DIRS " ${Boost_LIBRARY_DIRS}")
  include_directories(${Boost_INCLUDE_DIRS})
endif()
include_directories(
  ${PAVO_SDK_PATH}/include)
# include_directories(
#   ${Boost_INCLUDE_DIRS})
# link_libraries(
#   ${Boost_LIBRARY_DIRS})
  # message(Boost_LIBRARY_DIRS=${Boost_LIBRARY_DIRS})
add_executable(pavo_pcd_pub src/pavo_pcd_node.cpp 
               ${PAVO_SDK_PATH}/src/data_filters.cpp
               ${PAVO_SDK_PATH}/src/pavo_driver.cpp
               ${PAVO_SDK_PATH}/src/utils.cpp)
target_link_libraries(pavo_pcd_pub ${Boost_LIBRARIES})

ament_target_dependencies(pavo_pcd_pub rclcpp std_msgs sensor_msgs )
ament_export_libraries(${PROJECT_NAME} ${Boost_LIBRARIES})
install(TARGETS
  pavo_pcd_pub
  DESTINATION lib/${PROJECT_NAME})
if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
