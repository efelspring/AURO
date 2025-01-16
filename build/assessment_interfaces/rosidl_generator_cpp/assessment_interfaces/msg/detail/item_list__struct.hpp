// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from assessment_interfaces:msg/ItemList.idl
// generated code does not contain a copyright notice

#ifndef ASSESSMENT_INTERFACES__MSG__DETAIL__ITEM_LIST__STRUCT_HPP_
#define ASSESSMENT_INTERFACES__MSG__DETAIL__ITEM_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'data'
#include "assessment_interfaces/msg/detail/item__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__assessment_interfaces__msg__ItemList __attribute__((deprecated))
#else
# define DEPRECATED__assessment_interfaces__msg__ItemList __declspec(deprecated)
#endif

namespace assessment_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ItemList_
{
  using Type = ItemList_<ContainerAllocator>;

  explicit ItemList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ItemList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _data_type =
    std::vector<assessment_interfaces::msg::Item_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<assessment_interfaces::msg::Item_<ContainerAllocator>>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const std::vector<assessment_interfaces::msg::Item_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<assessment_interfaces::msg::Item_<ContainerAllocator>>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    assessment_interfaces::msg::ItemList_<ContainerAllocator> *;
  using ConstRawPtr =
    const assessment_interfaces::msg::ItemList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<assessment_interfaces::msg::ItemList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<assessment_interfaces::msg::ItemList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      assessment_interfaces::msg::ItemList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<assessment_interfaces::msg::ItemList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      assessment_interfaces::msg::ItemList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<assessment_interfaces::msg::ItemList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<assessment_interfaces::msg::ItemList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<assessment_interfaces::msg::ItemList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__assessment_interfaces__msg__ItemList
    std::shared_ptr<assessment_interfaces::msg::ItemList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__assessment_interfaces__msg__ItemList
    std::shared_ptr<assessment_interfaces::msg::ItemList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ItemList_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const ItemList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ItemList_

// alias to use template instance with default allocator
using ItemList =
  assessment_interfaces::msg::ItemList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace assessment_interfaces

#endif  // ASSESSMENT_INTERFACES__MSG__DETAIL__ITEM_LIST__STRUCT_HPP_
