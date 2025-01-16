// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from auro_interfaces:msg/StringWithPose.idl
// generated code does not contain a copyright notice

#ifndef AURO_INTERFACES__MSG__DETAIL__STRING_WITH_POSE__STRUCT_HPP_
#define AURO_INTERFACES__MSG__DETAIL__STRING_WITH_POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__auro_interfaces__msg__StringWithPose __attribute__((deprecated))
#else
# define DEPRECATED__auro_interfaces__msg__StringWithPose __declspec(deprecated)
#endif

namespace auro_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StringWithPose_
{
  using Type = StringWithPose_<ContainerAllocator>;

  explicit StringWithPose_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->text = "";
    }
  }

  explicit StringWithPose_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : text(_alloc),
    pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->text = "";
    }
  }

  // field types and members
  using _text_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _text_type text;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__text(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->text = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    auro_interfaces::msg::StringWithPose_<ContainerAllocator> *;
  using ConstRawPtr =
    const auro_interfaces::msg::StringWithPose_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<auro_interfaces::msg::StringWithPose_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<auro_interfaces::msg::StringWithPose_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      auro_interfaces::msg::StringWithPose_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<auro_interfaces::msg::StringWithPose_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      auro_interfaces::msg::StringWithPose_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<auro_interfaces::msg::StringWithPose_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<auro_interfaces::msg::StringWithPose_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<auro_interfaces::msg::StringWithPose_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__auro_interfaces__msg__StringWithPose
    std::shared_ptr<auro_interfaces::msg::StringWithPose_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__auro_interfaces__msg__StringWithPose
    std::shared_ptr<auro_interfaces::msg::StringWithPose_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StringWithPose_ & other) const
  {
    if (this->text != other.text) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const StringWithPose_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StringWithPose_

// alias to use template instance with default allocator
using StringWithPose =
  auro_interfaces::msg::StringWithPose_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace auro_interfaces

#endif  // AURO_INTERFACES__MSG__DETAIL__STRING_WITH_POSE__STRUCT_HPP_
