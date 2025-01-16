// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from assessment_interfaces:msg/ItemLog.idl
// generated code does not contain a copyright notice

#ifndef ASSESSMENT_INTERFACES__MSG__DETAIL__ITEM_LOG__STRUCT_HPP_
#define ASSESSMENT_INTERFACES__MSG__DETAIL__ITEM_LOG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__assessment_interfaces__msg__ItemLog __attribute__((deprecated))
#else
# define DEPRECATED__assessment_interfaces__msg__ItemLog __declspec(deprecated)
#endif

namespace assessment_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ItemLog_
{
  using Type = ItemLog_<ContainerAllocator>;

  explicit ItemLog_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->red_count = 0;
      this->green_count = 0;
      this->blue_count = 0;
      this->total_count = 0;
      this->red_value = 0;
      this->green_value = 0;
      this->blue_value = 0;
      this->total_value = 0;
    }
  }

  explicit ItemLog_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->red_count = 0;
      this->green_count = 0;
      this->blue_count = 0;
      this->total_count = 0;
      this->red_value = 0;
      this->green_value = 0;
      this->blue_value = 0;
      this->total_value = 0;
    }
  }

  // field types and members
  using _red_count_type =
    uint16_t;
  _red_count_type red_count;
  using _green_count_type =
    uint16_t;
  _green_count_type green_count;
  using _blue_count_type =
    uint16_t;
  _blue_count_type blue_count;
  using _total_count_type =
    uint16_t;
  _total_count_type total_count;
  using _red_value_type =
    uint16_t;
  _red_value_type red_value;
  using _green_value_type =
    uint16_t;
  _green_value_type green_value;
  using _blue_value_type =
    uint16_t;
  _blue_value_type blue_value;
  using _total_value_type =
    uint16_t;
  _total_value_type total_value;

  // setters for named parameter idiom
  Type & set__red_count(
    const uint16_t & _arg)
  {
    this->red_count = _arg;
    return *this;
  }
  Type & set__green_count(
    const uint16_t & _arg)
  {
    this->green_count = _arg;
    return *this;
  }
  Type & set__blue_count(
    const uint16_t & _arg)
  {
    this->blue_count = _arg;
    return *this;
  }
  Type & set__total_count(
    const uint16_t & _arg)
  {
    this->total_count = _arg;
    return *this;
  }
  Type & set__red_value(
    const uint16_t & _arg)
  {
    this->red_value = _arg;
    return *this;
  }
  Type & set__green_value(
    const uint16_t & _arg)
  {
    this->green_value = _arg;
    return *this;
  }
  Type & set__blue_value(
    const uint16_t & _arg)
  {
    this->blue_value = _arg;
    return *this;
  }
  Type & set__total_value(
    const uint16_t & _arg)
  {
    this->total_value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    assessment_interfaces::msg::ItemLog_<ContainerAllocator> *;
  using ConstRawPtr =
    const assessment_interfaces::msg::ItemLog_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<assessment_interfaces::msg::ItemLog_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<assessment_interfaces::msg::ItemLog_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      assessment_interfaces::msg::ItemLog_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<assessment_interfaces::msg::ItemLog_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      assessment_interfaces::msg::ItemLog_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<assessment_interfaces::msg::ItemLog_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<assessment_interfaces::msg::ItemLog_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<assessment_interfaces::msg::ItemLog_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__assessment_interfaces__msg__ItemLog
    std::shared_ptr<assessment_interfaces::msg::ItemLog_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__assessment_interfaces__msg__ItemLog
    std::shared_ptr<assessment_interfaces::msg::ItemLog_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ItemLog_ & other) const
  {
    if (this->red_count != other.red_count) {
      return false;
    }
    if (this->green_count != other.green_count) {
      return false;
    }
    if (this->blue_count != other.blue_count) {
      return false;
    }
    if (this->total_count != other.total_count) {
      return false;
    }
    if (this->red_value != other.red_value) {
      return false;
    }
    if (this->green_value != other.green_value) {
      return false;
    }
    if (this->blue_value != other.blue_value) {
      return false;
    }
    if (this->total_value != other.total_value) {
      return false;
    }
    return true;
  }
  bool operator!=(const ItemLog_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ItemLog_

// alias to use template instance with default allocator
using ItemLog =
  assessment_interfaces::msg::ItemLog_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace assessment_interfaces

#endif  // ASSESSMENT_INTERFACES__MSG__DETAIL__ITEM_LOG__STRUCT_HPP_
