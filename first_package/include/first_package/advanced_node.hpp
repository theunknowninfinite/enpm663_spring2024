#pragma once

#include <rclcpp/rclcpp.hpp>


// timer
class AdvancedNode : public rclcpp::Node {
 public:
  AdvancedNode(std::string node_name) : Node(node_name) {
    // initialize the message
    RCLCPP_INFO(this->get_logger(), "Hello from %s", this->get_name());

  }

 private:
  // attributes

};