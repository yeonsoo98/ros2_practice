// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tutorial_interfaces:srv/RobotInfo.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__ROBOT_INFO__BUILDER_HPP_
#define TUTORIAL_INTERFACES__SRV__DETAIL__ROBOT_INFO__BUILDER_HPP_

#include "tutorial_interfaces/srv/detail/robot_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tutorial_interfaces
{

namespace srv
{

namespace builder
{

class Init_RobotInfo_Request_arithmetic_operator
{
public:
  Init_RobotInfo_Request_arithmetic_operator()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tutorial_interfaces::srv::RobotInfo_Request arithmetic_operator(::tutorial_interfaces::srv::RobotInfo_Request::_arithmetic_operator_type arg)
  {
    msg_.arithmetic_operator = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::srv::RobotInfo_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::RobotInfo_Request>()
{
  return tutorial_interfaces::srv::builder::Init_RobotInfo_Request_arithmetic_operator();
}

}  // namespace tutorial_interfaces


namespace tutorial_interfaces
{

namespace srv
{

namespace builder
{

class Init_RobotInfo_Response_arithmetic_result
{
public:
  Init_RobotInfo_Response_arithmetic_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tutorial_interfaces::srv::RobotInfo_Response arithmetic_result(::tutorial_interfaces::srv::RobotInfo_Response::_arithmetic_result_type arg)
  {
    msg_.arithmetic_result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::srv::RobotInfo_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::RobotInfo_Response>()
{
  return tutorial_interfaces::srv::builder::Init_RobotInfo_Response_arithmetic_result();
}

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__ROBOT_INFO__BUILDER_HPP_
