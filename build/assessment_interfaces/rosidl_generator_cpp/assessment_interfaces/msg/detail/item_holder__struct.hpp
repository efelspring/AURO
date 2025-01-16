// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from assessment_interfaces:msg/ItemHolder.idl
// generated code does not contain a copyright notice

#ifndef ASSESSMENT_INTERFACES__MSG__DETAIL__ITEM_HOLDER__STRUCT_HPP_
#define ASSESSMENT_INTERFACES__MSG__DETAIL__ITEM_HOLDER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__assessment_interfaces__msg__ItemHolder __attribute__((deprecated))
#else
# define DEPRECATED__assessment_interfaces__msg__ItemHolder __declspec(deprecated)
#endif

namespace assessment_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ItemHolder_
{
  using Type = ItemHolder_<ContainerAllocator>;

  explicit ItemHolder_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = "";
      this->holding_item = false;
      this->item_colour = "";
      this->item_value = 0;
    }
  }

  explicit ItemHolder_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robot_id(_alloc),
    item_colour(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = "";
      this->holding_item = false;
      this->item_colour = "";
      this->item_value = 0;
    }
  }

  // field types and members
  using _robot_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_id_type robot_id;
  using _holding_item_type =
    bool;
  _holding_item_type holding_item;
  using _item_colour_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _item_colour_type item_colour;
  using _item_value_type =
    uint8_t;
  _item_value_type item_value;

  // setters for named parameter idiom
  Type & set__robot_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->robot_id = _arg;
    return *this;
  }
  Type & set__holding_item(
    const bool & _arg)
  {
    this->holding_item = _arg;
    return *this;
  }
  Type & set__item_colour(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->item_colour = _arg;
    return *this;
  }
  Type & set__item_value(
    const uint8_t & _arg)
  {
    this->item_value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    assessment_interfaces::msg::ItemHolder_<ContainerAllocator> *;
  using ConstRawPtr =
    const assessment_interfaces::msg::ItemHolder_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<assessment_interfaces::msg::ItemHolder_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<assessment_interfaces::msg::ItemHolder_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      assessment_interfaces::msg::ItemHolder_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<assessment_interfaces::msg::ItemHolder_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      assessment_interfaces::msg::ItemHolder_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<assessment_interfaces::msg::ItemHolder_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<assessment_interfaces::msg::ItemHolder_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<assessment_interfaces::msg::ItemHolder_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__assessment_interfaces__msg__ItemHolder
    std::shared_ptr<assessment_interfaces::msg::ItemHolder_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__assessment_interfaces__msg__ItemHolder
    std::shared_ptr<assessment_interfaces::msg::ItemHolder_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ItemHolder_ & other) const
  {
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->holding_item != other.holding_item) {
      return false;
    }
    if (this->item_colour != other.item_colour) {
      return false;
    }
    if (this->item_value != other.item_value) {
      return false;
    }
    return true;
  }
  bool operator!=(const ItemHolder_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ItemHolder_

// alias to use template instance with default allocator
using ItemHolder =
  assessment_interfaces::msg::ItemHolder_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace assessment_interfaces

#endif  // ASSESSMENT_INTERFACES__MSG__DETAIL__ITEM_HOLDER__STRUCT_HPP_
