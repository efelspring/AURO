// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from auro_interfaces:msg/Direction.idl
// generated code does not contain a copyright notice

#ifndef AURO_INTERFACES__MSG__DETAIL__DIRECTION__STRUCT_HPP_
#define AURO_INTERFACES__MSG__DETAIL__DIRECTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__auro_interfaces__msg__Direction __attribute__((deprecated))
#else
# define DEPRECATED__auro_interfaces__msg__Direction __declspec(deprecated)
#endif

namespace auro_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Direction_
{
  using Type = Direction_<ContainerAllocator>;

  explicit Direction_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->direction = 0;
    }
  }

  explicit Direction_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->direction = 0;
    }
  }

  // field types and members
  using _direction_type =
    uint8_t;
  _direction_type direction;

  // setters for named parameter idiom
  Type & set__direction(
    const uint8_t & _arg)
  {
    this->direction = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t LEFT =
    0u;
  static constexpr uint8_t RIGHT =
    1u;
  static constexpr uint8_t FRONT =
    2u;
  static constexpr uint8_t BACK =
    3u;

  // pointer types
  using RawPtr =
    auro_interfaces::msg::Direction_<ContainerAllocator> *;
  using ConstRawPtr =
    const auro_interfaces::msg::Direction_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<auro_interfaces::msg::Direction_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<auro_interfaces::msg::Direction_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      auro_interfaces::msg::Direction_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<auro_interfaces::msg::Direction_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      auro_interfaces::msg::Direction_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<auro_interfaces::msg::Direction_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<auro_interfaces::msg::Direction_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<auro_interfaces::msg::Direction_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__auro_interfaces__msg__Direction
    std::shared_ptr<auro_interfaces::msg::Direction_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__auro_interfaces__msg__Direction
    std::shared_ptr<auro_interfaces::msg::Direction_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Direction_ & other) const
  {
    if (this->direction != other.direction) {
      return false;
    }
    return true;
  }
  bool operator!=(const Direction_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Direction_

// alias to use template instance with default allocator
using Direction =
  auro_interfaces::msg::Direction_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Direction_<ContainerAllocator>::LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Direction_<ContainerAllocator>::RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Direction_<ContainerAllocator>::FRONT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Direction_<ContainerAllocator>::BACK;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace auro_interfaces

#endif  // AURO_INTERFACES__MSG__DETAIL__DIRECTION__STRUCT_HPP_
