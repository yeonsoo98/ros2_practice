// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tutorial_interfaces:srv/RobotInfo.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__ROBOT_INFO__TRAITS_HPP_
#define TUTORIAL_INTERFACES__SRV__DETAIL__ROBOT_INFO__TRAITS_HPP_

#include "tutorial_interfaces/srv/detail/robot_info__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tutorial_interfaces::srv::RobotInfo_Request>()
{
  return "tutorial_interfaces::srv::RobotInfo_Request";
}

template<>
inline const char * name<tutorial_interfaces::srv::RobotInfo_Request>()
{
  return "tutorial_interfaces/srv/RobotInfo_Request";
}

template<>
struct has_fixed_size<tutorial_interfaces::srv::RobotInfo_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tutorial_interfaces::srv::RobotInfo_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tutorial_interfaces::srv::RobotInfo_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tutorial_interfaces::srv::RobotInfo_Response>()
{
  return "tutorial_interfaces::srv::RobotInfo_Response";
}

template<>
inline const char * name<tutorial_interfaces::srv::RobotInfo_Response>()
{
  return "tutorial_interfaces/srv/RobotInfo_Response";
}

template<>
struct has_fixed_size<tutorial_interfaces::srv::RobotInfo_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tutorial_interfaces::srv::RobotInfo_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tutorial_interfaces::srv::RobotInfo_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tutorial_interfaces::srv::RobotInfo>()
{
  return "tutorial_interfaces::srv::RobotInfo";
}

template<>
inline const char * name<tutorial_interfaces::srv::RobotInfo>()
{
  return "tutorial_interfaces/srv/RobotInfo";
}

template<>
struct has_fixed_size<tutorial_interfaces::srv::RobotInfo>
  : std::integral_constant<
    bool,
    has_fixed_size<tutorial_interfaces::srv::RobotInfo_Request>::value &&
    has_fixed_size<tutorial_interfaces::srv::RobotInfo_Response>::value
  >
{
};

template<>
struct has_bounded_size<tutorial_interfaces::srv::RobotInfo>
  : std::integral_constant<
    bool,
    has_bounded_size<tutorial_interfaces::srv::RobotInfo_Request>::value &&
    has_bounded_size<tutorial_interfaces::srv::RobotInfo_Response>::value
  >
{
};

template<>
struct is_service<tutorial_interfaces::srv::RobotInfo>
  : std::true_type
{
};

template<>
struct is_service_request<tutorial_interfaces::srv::RobotInfo_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tutorial_interfaces::srv::RobotInfo_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__ROBOT_INFO__TRAITS_HPP_
