// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tutorial_interfaces:msg/RobotInfo.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__MSG__DETAIL__ROBOT_INFO__TRAITS_HPP_
#define TUTORIAL_INTERFACES__MSG__DETAIL__ROBOT_INFO__TRAITS_HPP_

#include "tutorial_interfaces/msg/detail/robot_info__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'speed'
#include "geometry_msgs/msg/detail/twist__traits.hpp"
// Member 'position'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tutorial_interfaces::msg::RobotInfo>()
{
  return "tutorial_interfaces::msg::RobotInfo";
}

template<>
inline const char * name<tutorial_interfaces::msg::RobotInfo>()
{
  return "tutorial_interfaces/msg/RobotInfo";
}

template<>
struct has_fixed_size<tutorial_interfaces::msg::RobotInfo>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value && has_fixed_size<geometry_msgs::msg::Quaternion>::value && has_fixed_size<geometry_msgs::msg::Twist>::value> {};

template<>
struct has_bounded_size<tutorial_interfaces::msg::RobotInfo>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value && has_bounded_size<geometry_msgs::msg::Quaternion>::value && has_bounded_size<geometry_msgs::msg::Twist>::value> {};

template<>
struct is_message<tutorial_interfaces::msg::RobotInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TUTORIAL_INTERFACES__MSG__DETAIL__ROBOT_INFO__TRAITS_HPP_
