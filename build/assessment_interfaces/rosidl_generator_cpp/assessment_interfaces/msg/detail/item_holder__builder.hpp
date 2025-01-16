// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from assessment_interfaces:msg/ItemHolder.idl
// generated code does not contain a copyright notice

#ifndef ASSESSMENT_INTERFACES__MSG__DETAIL__ITEM_HOLDER__BUILDER_HPP_
#define ASSESSMENT_INTERFACES__MSG__DETAIL__ITEM_HOLDER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "assessment_interfaces/msg/detail/item_holder__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace assessment_interfaces
{

namespace msg
{

namespace builder
{

class Init_ItemHolder_item_value
{
public:
  explicit Init_ItemHolder_item_value(::assessment_interfaces::msg::ItemHolder & msg)
  : msg_(msg)
  {}
  ::assessment_interfaces::msg::ItemHolder item_value(::assessment_interfaces::msg::ItemHolder::_item_value_type arg)
  {
    msg_.item_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::assessment_interfaces::msg::ItemHolder msg_;
};

class Init_ItemHolder_item_colour
{
public:
  explicit Init_ItemHolder_item_colour(::assessment_interfaces::msg::ItemHolder & msg)
  : msg_(msg)
  {}
  Init_ItemHolder_item_value item_colour(::assessment_interfaces::msg::ItemHolder::_item_colour_type arg)
  {
    msg_.item_colour = std::move(arg);
    return Init_ItemHolder_item_value(msg_);
  }

private:
  ::assessment_interfaces::msg::ItemHolder msg_;
};

class Init_ItemHolder_holding_item
{
public:
  explicit Init_ItemHolder_holding_item(::assessment_interfaces::msg::ItemHolder & msg)
  : msg_(msg)
  {}
  Init_ItemHolder_item_colour holding_item(::assessment_interfaces::msg::ItemHolder::_holding_item_type arg)
  {
    msg_.holding_item = std::move(arg);
    return Init_ItemHolder_item_colour(msg_);
  }

private:
  ::assessment_interfaces::msg::ItemHolder msg_;
};

class Init_ItemHolder_robot_id
{
public:
  Init_ItemHolder_robot_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ItemHolder_holding_item robot_id(::assessment_interfaces::msg::ItemHolder::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_ItemHolder_holding_item(msg_);
  }

private:
  ::assessment_interfaces::msg::ItemHolder msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::assessment_interfaces::msg::ItemHolder>()
{
  return assessment_interfaces::msg::builder::Init_ItemHolder_robot_id();
}

}  // namespace assessment_interfaces

#endif  // ASSESSMENT_INTERFACES__MSG__DETAIL__ITEM_HOLDER__BUILDER_HPP_
