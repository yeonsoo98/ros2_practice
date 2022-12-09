// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tutorial_interfaces:msg/RobotInfo.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__MSG__DETAIL__ROBOT_INFO__BUILDER_HPP_
#define TUTORIAL_INTERFACES__MSG__DETAIL__ROBOT_INFO__BUILDER_HPP_

#include "tutorial_interfaces/msg/detail/robot_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tutorial_interfaces
{

namespace msg
{

namespace builder
{

class Init_RobotInfo_front_range
{
public:
  explicit Init_RobotInfo_front_range(::tutorial_interfaces::msg::RobotInfo & msg)
  : msg_(msg)
  {}
  ::tutorial_interfaces::msg::RobotInfo front_range(::tutorial_interfaces::msg::RobotInfo::_front_range_type arg)
  {
    msg_.front_range = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::msg::RobotInfo msg_;
};

class Init_RobotInfo_orientation
{
public:
  explicit Init_RobotInfo_orientation(::tutorial_interfaces::msg::RobotInfo & msg)
  : msg_(msg)
  {}
  Init_RobotInfo_front_range orientation(::tutorial_interfaces::msg::RobotInfo::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_RobotInfo_front_range(msg_);
  }

private:
  ::tutorial_interfaces::msg::RobotInfo msg_;
};

class Init_RobotInfo_position
{
public:
  explicit Init_RobotInfo_position(::tutorial_interfaces::msg::RobotInfo & msg)
  : msg_(msg)
  {}
  Init_RobotInfo_orientation position(::tutorial_interfaces::msg::RobotInfo::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_RobotInfo_orientation(msg_);
  }

private:
  ::tutorial_interfaces::msg::RobotInfo msg_;
};

class Init_RobotInfo_speed
{
public:
  Init_RobotInfo_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotInfo_position speed(::tutorial_interfaces::msg::RobotInfo::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_RobotInfo_position(msg_);
  }

private:
  ::tutorial_interfaces::msg::RobotInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::msg::RobotInfo>()
{
  return tutorial_interfaces::msg::builder::Init_RobotInfo_speed();
}

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__MSG__DETAIL__ROBOT_INFO__BUILDER_HPP_
