// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from auro_interfaces:msg/Item.idl
// generated code does not contain a copyright notice

#ifndef AURO_INTERFACES__MSG__DETAIL__ITEM__BUILDER_HPP_
#define AURO_INTERFACES__MSG__DETAIL__ITEM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "auro_interfaces/msg/detail/item__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace auro_interfaces
{

namespace msg
{

namespace builder
{

class Init_Item_colour
{
public:
  explicit Init_Item_colour(::auro_interfaces::msg::Item & msg)
  : msg_(msg)
  {}
  ::auro_interfaces::msg::Item colour(::auro_interfaces::msg::Item::_colour_type arg)
  {
    msg_.colour = std::move(arg);
    return std::move(msg_);
  }

private:
  ::auro_interfaces::msg::Item msg_;
};

class Init_Item_diameter
{
public:
  explicit Init_Item_diameter(::auro_interfaces::msg::Item & msg)
  : msg_(msg)
  {}
  Init_Item_colour diameter(::auro_interfaces::msg::Item::_diameter_type arg)
  {
    msg_.diameter = std::move(arg);
    return Init_Item_colour(msg_);
  }

private:
  ::auro_interfaces::msg::Item msg_;
};

class Init_Item_x
{
public:
  Init_Item_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Item_diameter x(::auro_interfaces::msg::Item::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Item_diameter(msg_);
  }

private:
  ::auro_interfaces::msg::Item msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::auro_interfaces::msg::Item>()
{
  return auro_interfaces::msg::builder::Init_Item_x();
}

}  // namespace auro_interfaces

#endif  // AURO_INTERFACES__MSG__DETAIL__ITEM__BUILDER_HPP_
