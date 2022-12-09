// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tutorial_interfaces:srv/RobotInfo.idl
// generated code does not contain a copyright notice
#include "tutorial_interfaces/srv/detail/robot_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tutorial_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tutorial_interfaces/srv/detail/robot_info__struct.h"
#include "tutorial_interfaces/srv/detail/robot_info__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _RobotInfo_Request__ros_msg_type = tutorial_interfaces__srv__RobotInfo_Request;

static bool _RobotInfo_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RobotInfo_Request__ros_msg_type * ros_message = static_cast<const _RobotInfo_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: arithmetic_operator
  {
    cdr << ros_message->arithmetic_operator;
  }

  return true;
}

static bool _RobotInfo_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RobotInfo_Request__ros_msg_type * ros_message = static_cast<_RobotInfo_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: arithmetic_operator
  {
    cdr >> ros_message->arithmetic_operator;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tutorial_interfaces
size_t get_serialized_size_tutorial_interfaces__srv__RobotInfo_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobotInfo_Request__ros_msg_type * ros_message = static_cast<const _RobotInfo_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name arithmetic_operator
  {
    size_t item_size = sizeof(ros_message->arithmetic_operator);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RobotInfo_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tutorial_interfaces__srv__RobotInfo_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tutorial_interfaces
size_t max_serialized_size_tutorial_interfaces__srv__RobotInfo_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: arithmetic_operator
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _RobotInfo_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tutorial_interfaces__srv__RobotInfo_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RobotInfo_Request = {
  "tutorial_interfaces::srv",
  "RobotInfo_Request",
  _RobotInfo_Request__cdr_serialize,
  _RobotInfo_Request__cdr_deserialize,
  _RobotInfo_Request__get_serialized_size,
  _RobotInfo_Request__max_serialized_size
};

static rosidl_message_type_support_t _RobotInfo_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RobotInfo_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tutorial_interfaces, srv, RobotInfo_Request)() {
  return &_RobotInfo_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "tutorial_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "tutorial_interfaces/srv/detail/robot_info__struct.h"
// already included above
// #include "tutorial_interfaces/srv/detail/robot_info__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _RobotInfo_Response__ros_msg_type = tutorial_interfaces__srv__RobotInfo_Response;

static bool _RobotInfo_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RobotInfo_Response__ros_msg_type * ros_message = static_cast<const _RobotInfo_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: arithmetic_result
  {
    cdr << ros_message->arithmetic_result;
  }

  return true;
}

static bool _RobotInfo_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RobotInfo_Response__ros_msg_type * ros_message = static_cast<_RobotInfo_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: arithmetic_result
  {
    cdr >> ros_message->arithmetic_result;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tutorial_interfaces
size_t get_serialized_size_tutorial_interfaces__srv__RobotInfo_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobotInfo_Response__ros_msg_type * ros_message = static_cast<const _RobotInfo_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name arithmetic_result
  {
    size_t item_size = sizeof(ros_message->arithmetic_result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RobotInfo_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tutorial_interfaces__srv__RobotInfo_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tutorial_interfaces
size_t max_serialized_size_tutorial_interfaces__srv__RobotInfo_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: arithmetic_result
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _RobotInfo_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tutorial_interfaces__srv__RobotInfo_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RobotInfo_Response = {
  "tutorial_interfaces::srv",
  "RobotInfo_Response",
  _RobotInfo_Response__cdr_serialize,
  _RobotInfo_Response__cdr_deserialize,
  _RobotInfo_Response__get_serialized_size,
  _RobotInfo_Response__max_serialized_size
};

static rosidl_message_type_support_t _RobotInfo_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RobotInfo_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tutorial_interfaces, srv, RobotInfo_Response)() {
  return &_RobotInfo_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "tutorial_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tutorial_interfaces/srv/robot_info.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t RobotInfo__callbacks = {
  "tutorial_interfaces::srv",
  "RobotInfo",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tutorial_interfaces, srv, RobotInfo_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tutorial_interfaces, srv, RobotInfo_Response)(),
};

static rosidl_service_type_support_t RobotInfo__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &RobotInfo__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tutorial_interfaces, srv, RobotInfo)() {
  return &RobotInfo__handle;
}

#if defined(__cplusplus)
}
#endif
