cmake_minimum_required(VERSION 3.28)
project(teb_planner)

# 关键：设置编译类型为Debug，生成调试符号
set(CMAKE_BUILD_TYPE Debug)  # 优先级最高，强制开启Debug模式
set(CMAKE_CXX_FLAGS_DEBUG "-g -O0")  # -g生成调试符号，-O0关闭优化
set(CMAKE_CXX_FLAGS_RELEASE "-g -O0")  # 防止误切换到Release模式，仍保留调试符号

# 查找依赖
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(Boost REQUIRED COMPONENTS thread system chrono)
find_package(Eigen3 REQUIRED)
include_directories(${EIGEN3_INCLUDE_DIR})
include_directories(include)

include_directories(${Boost_INCLUDE_DIRS})

include_directories(./Teb/include)

include_directories(./Teb/include)
include_directories(./Teb/include/g2o)
include_directories(./Teb/include/g2o_types)
include_directories(./Teb/include/suitesparse)
include_directories(/usr/local/include/suitesparse)

add_subdirectory(Teb)

# 编译节点
add_executable(teb_plan src/trajectory_publisher.cpp)
ament_target_dependencies(
  teb_plan
  rclcpp
  nav_msgs
  geometry_msgs
  tf2
  tf2_ros
  sensor_msgs
)

target_link_libraries(
  teb_plan
  teb
  ${Boost_LIBRARIES} 
  ${CMAKE_HOME_DIRECTORY}/x86_64/libg2o_core.so
  ${CMAKE_HOME_DIRECTORY}/x86_64/libg2o_csparse_extension.so
  ${CMAKE_HOME_DIRECTORY}/x86_64/libg2o_ext_csparse.so
  ${CMAKE_HOME_DIRECTORY}/x86_64/libg2o_solver_csparse.so
  ${CMAKE_HOME_DIRECTORY}/x86_64/libg2o_stuff.so
  ${Boost_LIBRARIES}  # Boost库链接

)

# 安装节点
install(TARGETS
  teb_plan
  DESTINATION lib/${PROJECT_NAME})

ament_package()