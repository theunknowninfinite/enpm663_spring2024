// ROS 2 C++ library for using ROS 2 functionalities.
#include <rclcpp/rclcpp.hpp>
#include"first_package/advanced_node.hpp"

int main(int argc, char * argv[]){
//1. Initialize the ROS 2 communication system.
rclcpp::init(argc, argv);
//2. Create a shared pointer to a new node named "minimal_node_cpp".
// auto node = rclcpp::Node::make_shared("minimal_node_cpp");
auto node = std::make_shared<AdvancedNode>("echo_node_cpp");
// Log a "Hello, world!" message.
//3. Shutdown the ROS 2 communication system before exiting the program.
// This is a clean-up step to ensure all resources are properly released.
rclcpp::spin(node);
rclcpp::shutdown();
}