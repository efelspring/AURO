// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from assessment_interfaces:msg/ItemHolders.idl
// generated code does not contain a copyright notice

#ifndef ASSESSMENT_INTERFACES__MSG__DETAIL__ITEM_HOLDERS__BUILDER_HPP_
#define ASSESSMENT_INTERFACES__MSG__DETAIL__ITEM_HOLDERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "assessment_interfaces/msg/detail/item_holders__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace assessment_interfaces
{

namespace msg
{

namespace builder
{

class Init_ItemHolders_data
{
public:
  Init_ItemHolders_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::assessment_interfaces::msg::ItemHolders data(::assessment_interfaces::msg::ItemHolders::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::assessment_interfaces::msg::ItemHolders msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::assessment_interfaces::msg::ItemHolders>()
{
  return assessment_interfaces::msg::builder::Init_ItemHolders_data();
}

}  // namespace assessment_interfaces

#endif  // ASSESSMENT_INTERFACES__MSG__DETAIL__ITEM_HOLDERS__BUILDER_HPP_
