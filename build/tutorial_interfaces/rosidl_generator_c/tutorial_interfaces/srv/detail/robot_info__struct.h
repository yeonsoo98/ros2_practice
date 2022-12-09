// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tutorial_interfaces:srv/RobotInfo.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__ROBOT_INFO__STRUCT_H_
#define TUTORIAL_INTERFACES__SRV__DETAIL__ROBOT_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PLUS'.
enum
{
  tutorial_interfaces__srv__RobotInfo_Request__PLUS = 1
};

/// Constant 'MINUS'.
enum
{
  tutorial_interfaces__srv__RobotInfo_Request__MINUS = 2
};

/// Constant 'MULTIPLY'.
enum
{
  tutorial_interfaces__srv__RobotInfo_Request__MULTIPLY = 3
};

/// Constant 'DIVISION'.
enum
{
  tutorial_interfaces__srv__RobotInfo_Request__DIVISION = 4
};

// Struct defined in srv/RobotInfo in the package tutorial_interfaces.
typedef struct tutorial_interfaces__srv__RobotInfo_Request
{
  int8_t arithmetic_operator;
} tutorial_interfaces__srv__RobotInfo_Request;

// Struct for a sequence of tutorial_interfaces__srv__RobotInfo_Request.
typedef struct tutorial_interfaces__srv__RobotInfo_Request__Sequence
{
  tutorial_interfaces__srv__RobotInfo_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__srv__RobotInfo_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/RobotInfo in the package tutorial_interfaces.
typedef struct tutorial_interfaces__srv__RobotInfo_Response
{
  float arithmetic_result;
} tutorial_interfaces__srv__RobotInfo_Response;

// Struct for a sequence of tutorial_interfaces__srv__RobotInfo_Response.
typedef struct tutorial_interfaces__srv__RobotInfo_Response__Sequence
{
  tutorial_interfaces__srv__RobotInfo_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__srv__RobotInfo_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__ROBOT_INFO__STRUCT_H_
