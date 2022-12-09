// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tutorial_interfaces:msg/RobotInfo.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__MSG__DETAIL__ROBOT_INFO__STRUCT_H_
#define TUTORIAL_INTERFACES__MSG__DETAIL__ROBOT_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'speed'
#include "geometry_msgs/msg/detail/twist__struct.h"
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.h"

// Struct defined in msg/RobotInfo in the package tutorial_interfaces.
typedef struct tutorial_interfaces__msg__RobotInfo
{
  geometry_msgs__msg__Twist speed;
  geometry_msgs__msg__Point position;
  geometry_msgs__msg__Quaternion orientation;
  float front_range;
} tutorial_interfaces__msg__RobotInfo;

// Struct for a sequence of tutorial_interfaces__msg__RobotInfo.
typedef struct tutorial_interfaces__msg__RobotInfo__Sequence
{
  tutorial_interfaces__msg__RobotInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__msg__RobotInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TUTORIAL_INTERFACES__MSG__DETAIL__ROBOT_INFO__STRUCT_H_
