cmake_minimum_required(VERSION 3.8)
project(first_package)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(ament_cmake_python REQUIRED)
find_package(rclpy REQUIRED)
find_package(rclcpp REQUIRED)
# installing py modules

ament_python_install_package(${PROJECT_NAME}
  SCRIPTS_DESTINATION lib/${PROJECT_NAME})
install(PROGRAMS
script/minimal_node.py
DESTINATION lib/${PROJECT_NAME}
)


add_executable(minimal_node_cpp src/minimal_node.cpp)
ament_target_dependencies(minimal_node_cpp rclcpp)
install(TARGETS
minimal_node_cpp
DESTINATION lib/${PROJECT_NAME}
)

ament_package()
