// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from assessment_interfaces:msg/Zone.idl
// generated code does not contain a copyright notice

#ifndef ASSESSMENT_INTERFACES__MSG__DETAIL__ZONE__BUILDER_HPP_
#define ASSESSMENT_INTERFACES__MSG__DETAIL__ZONE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "assessment_interfaces/msg/detail/zone__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace assessment_interfaces
{

namespace msg
{

namespace builder
{

class Init_Zone_size
{
public:
  explicit Init_Zone_size(::assessment_interfaces::msg::Zone & msg)
  : msg_(msg)
  {}
  ::assessment_interfaces::msg::Zone size(::assessment_interfaces::msg::Zone::_size_type arg)
  {
    msg_.size = std::move(arg);
    return std::move(msg_);
  }

private:
  ::assessment_interfaces::msg::Zone msg_;
};

class Init_Zone_y
{
public:
  explicit Init_Zone_y(::assessment_interfaces::msg::Zone & msg)
  : msg_(msg)
  {}
  Init_Zone_size y(::assessment_interfaces::msg::Zone::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Zone_size(msg_);
  }

private:
  ::assessment_interfaces::msg::Zone msg_;
};

class Init_Zone_x
{
public:
  explicit Init_Zone_x(::assessment_interfaces::msg::Zone & msg)
  : msg_(msg)
  {}
  Init_Zone_y x(::assessment_interfaces::msg::Zone::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Zone_y(msg_);
  }

private:
  ::assessment_interfaces::msg::Zone msg_;
};

class Init_Zone_zone
{
public:
  Init_Zone_zone()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Zone_x zone(::assessment_interfaces::msg::Zone::_zone_type arg)
  {
    msg_.zone = std::move(arg);
    return Init_Zone_x(msg_);
  }

private:
  ::assessment_interfaces::msg::Zone msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::assessment_interfaces::msg::Zone>()
{
  return assessment_interfaces::msg::builder::Init_Zone_zone();
}

}  // namespace assessment_interfaces

#endif  // ASSESSMENT_INTERFACES__MSG__DETAIL__ZONE__BUILDER_HPP_
