// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tutorial_interfaces:srv/RobotInfo.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__ROBOT_INFO__STRUCT_HPP_
#define TUTORIAL_INTERFACES__SRV__DETAIL__ROBOT_INFO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__tutorial_interfaces__srv__RobotInfo_Request __attribute__((deprecated))
#else
# define DEPRECATED__tutorial_interfaces__srv__RobotInfo_Request __declspec(deprecated)
#endif

namespace tutorial_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RobotInfo_Request_
{
  using Type = RobotInfo_Request_<ContainerAllocator>;

  explicit RobotInfo_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->arithmetic_operator = 0;
    }
  }

  explicit RobotInfo_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->arithmetic_operator = 0;
    }
  }

  // field types and members
  using _arithmetic_operator_type =
    int8_t;
  _arithmetic_operator_type arithmetic_operator;

  // setters for named parameter idiom
  Type & set__arithmetic_operator(
    const int8_t & _arg)
  {
    this->arithmetic_operator = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t PLUS =
    1;
  static constexpr int8_t MINUS =
    2;
  static constexpr int8_t MULTIPLY =
    3;
  static constexpr int8_t DIVISION =
    4;

  // pointer types
  using RawPtr =
    tutorial_interfaces::srv::RobotInfo_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tutorial_interfaces::srv::RobotInfo_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tutorial_interfaces::srv::RobotInfo_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tutorial_interfaces::srv::RobotInfo_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::srv::RobotInfo_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::srv::RobotInfo_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::srv::RobotInfo_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::srv::RobotInfo_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tutorial_interfaces::srv::RobotInfo_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tutorial_interfaces::srv::RobotInfo_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tutorial_interfaces__srv__RobotInfo_Request
    std::shared_ptr<tutorial_interfaces::srv::RobotInfo_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tutorial_interfaces__srv__RobotInfo_Request
    std::shared_ptr<tutorial_interfaces::srv::RobotInfo_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotInfo_Request_ & other) const
  {
    if (this->arithmetic_operator != other.arithmetic_operator) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotInfo_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotInfo_Request_

// alias to use template instance with default allocator
using RobotInfo_Request =
  tutorial_interfaces::srv::RobotInfo_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int8_t RobotInfo_Request_<ContainerAllocator>::PLUS;
template<typename ContainerAllocator>
constexpr int8_t RobotInfo_Request_<ContainerAllocator>::MINUS;
template<typename ContainerAllocator>
constexpr int8_t RobotInfo_Request_<ContainerAllocator>::MULTIPLY;
template<typename ContainerAllocator>
constexpr int8_t RobotInfo_Request_<ContainerAllocator>::DIVISION;

}  // namespace srv

}  // namespace tutorial_interfaces


#ifndef _WIN32
# define DEPRECATED__tutorial_interfaces__srv__RobotInfo_Response __attribute__((deprecated))
#else
# define DEPRECATED__tutorial_interfaces__srv__RobotInfo_Response __declspec(deprecated)
#endif

namespace tutorial_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RobotInfo_Response_
{
  using Type = RobotInfo_Response_<ContainerAllocator>;

  explicit RobotInfo_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->arithmetic_result = 0.0f;
    }
  }

  explicit RobotInfo_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->arithmetic_result = 0.0f;
    }
  }

  // field types and members
  using _arithmetic_result_type =
    float;
  _arithmetic_result_type arithmetic_result;

  // setters for named parameter idiom
  Type & set__arithmetic_result(
    const float & _arg)
  {
    this->arithmetic_result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tutorial_interfaces::srv::RobotInfo_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tutorial_interfaces::srv::RobotInfo_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tutorial_interfaces::srv::RobotInfo_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tutorial_interfaces::srv::RobotInfo_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::srv::RobotInfo_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::srv::RobotInfo_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::srv::RobotInfo_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::srv::RobotInfo_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tutorial_interfaces::srv::RobotInfo_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tutorial_interfaces::srv::RobotInfo_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tutorial_interfaces__srv__RobotInfo_Response
    std::shared_ptr<tutorial_interfaces::srv::RobotInfo_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tutorial_interfaces__srv__RobotInfo_Response
    std::shared_ptr<tutorial_interfaces::srv::RobotInfo_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotInfo_Response_ & other) const
  {
    if (this->arithmetic_result != other.arithmetic_result) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotInfo_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotInfo_Response_

// alias to use template instance with default allocator
using RobotInfo_Response =
  tutorial_interfaces::srv::RobotInfo_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tutorial_interfaces

namespace tutorial_interfaces
{

namespace srv
{

struct RobotInfo
{
  using Request = tutorial_interfaces::srv::RobotInfo_Request;
  using Response = tutorial_interfaces::srv::RobotInfo_Response;
};

}  // namespace srv

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__ROBOT_INFO__STRUCT_HPP_
