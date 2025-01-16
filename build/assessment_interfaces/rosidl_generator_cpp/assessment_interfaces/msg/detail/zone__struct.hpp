// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from assessment_interfaces:msg/Zone.idl
// generated code does not contain a copyright notice

#ifndef ASSESSMENT_INTERFACES__MSG__DETAIL__ZONE__STRUCT_HPP_
#define ASSESSMENT_INTERFACES__MSG__DETAIL__ZONE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__assessment_interfaces__msg__Zone __attribute__((deprecated))
#else
# define DEPRECATED__assessment_interfaces__msg__Zone __declspec(deprecated)
#endif

namespace assessment_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Zone_
{
  using Type = Zone_<ContainerAllocator>;

  explicit Zone_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->zone = 0;
      this->x = 0;
      this->y = 0;
      this->size = 0.0f;
    }
  }

  explicit Zone_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->zone = 0;
      this->x = 0;
      this->y = 0;
      this->size = 0.0f;
    }
  }

  // field types and members
  using _zone_type =
    uint8_t;
  _zone_type zone;
  using _x_type =
    int16_t;
  _x_type x;
  using _y_type =
    int16_t;
  _y_type y;
  using _size_type =
    float;
  _size_type size;

  // setters for named parameter idiom
  Type & set__zone(
    const uint8_t & _arg)
  {
    this->zone = _arg;
    return *this;
  }
  Type & set__x(
    const int16_t & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const int16_t & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__size(
    const float & _arg)
  {
    this->size = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ZONE_CYAN =
    1u;
  static constexpr uint8_t ZONE_PURPLE =
    2u;
  static constexpr uint8_t ZONE_GREEN =
    3u;
  static constexpr uint8_t ZONE_PINK =
    4u;

  // pointer types
  using RawPtr =
    assessment_interfaces::msg::Zone_<ContainerAllocator> *;
  using ConstRawPtr =
    const assessment_interfaces::msg::Zone_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<assessment_interfaces::msg::Zone_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<assessment_interfaces::msg::Zone_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      assessment_interfaces::msg::Zone_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<assessment_interfaces::msg::Zone_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      assessment_interfaces::msg::Zone_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<assessment_interfaces::msg::Zone_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<assessment_interfaces::msg::Zone_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<assessment_interfaces::msg::Zone_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__assessment_interfaces__msg__Zone
    std::shared_ptr<assessment_interfaces::msg::Zone_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__assessment_interfaces__msg__Zone
    std::shared_ptr<assessment_interfaces::msg::Zone_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Zone_ & other) const
  {
    if (this->zone != other.zone) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->size != other.size) {
      return false;
    }
    return true;
  }
  bool operator!=(const Zone_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Zone_

// alias to use template instance with default allocator
using Zone =
  assessment_interfaces::msg::Zone_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Zone_<ContainerAllocator>::ZONE_CYAN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Zone_<ContainerAllocator>::ZONE_PURPLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Zone_<ContainerAllocator>::ZONE_GREEN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Zone_<ContainerAllocator>::ZONE_PINK;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace assessment_interfaces

#endif  // ASSESSMENT_INTERFACES__MSG__DETAIL__ZONE__STRUCT_HPP_
