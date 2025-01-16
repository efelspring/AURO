// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from assessment_interfaces:msg/Item.idl
// generated code does not contain a copyright notice

#ifndef ASSESSMENT_INTERFACES__MSG__DETAIL__ITEM__BUILDER_HPP_
#define ASSESSMENT_INTERFACES__MSG__DETAIL__ITEM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "assessment_interfaces/msg/detail/item__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace assessment_interfaces
{

namespace msg
{

namespace builder
{

class Init_Item_value
{
public:
  explicit Init_Item_value(::assessment_interfaces::msg::Item & msg)
  : msg_(msg)
  {}
  ::assessment_interfaces::msg::Item value(::assessment_interfaces::msg::Item::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::assessment_interfaces::msg::Item msg_;
};

class Init_Item_colour
{
public:
  explicit Init_Item_colour(::assessment_interfaces::msg::Item & msg)
  : msg_(msg)
  {}
  Init_Item_value colour(::assessment_interfaces::msg::Item::_colour_type arg)
  {
    msg_.colour = std::move(arg);
    return Init_Item_value(msg_);
  }

private:
  ::assessment_interfaces::msg::Item msg_;
};

class Init_Item_diameter
{
public:
  explicit Init_Item_diameter(::assessment_interfaces::msg::Item & msg)
  : msg_(msg)
  {}
  Init_Item_colour diameter(::assessment_interfaces::msg::Item::_diameter_type arg)
  {
    msg_.diameter = std::move(arg);
    return Init_Item_colour(msg_);
  }

private:
  ::assessment_interfaces::msg::Item msg_;
};

class Init_Item_y
{
public:
  explicit Init_Item_y(::assessment_interfaces::msg::Item & msg)
  : msg_(msg)
  {}
  Init_Item_diameter y(::assessment_interfaces::msg::Item::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Item_diameter(msg_);
  }

private:
  ::assessment_interfaces::msg::Item msg_;
};

class Init_Item_x
{
public:
  Init_Item_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Item_y x(::assessment_interfaces::msg::Item::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Item_y(msg_);
  }

private:
  ::assessment_interfaces::msg::Item msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::assessment_interfaces::msg::Item>()
{
  return assessment_interfaces::msg::builder::Init_Item_x();
}

}  // namespace assessment_interfaces

#endif  // ASSESSMENT_INTERFACES__MSG__DETAIL__ITEM__BUILDER_HPP_
