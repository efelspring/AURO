// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from assessment_interfaces:msg/Robot.idl
// generated code does not contain a copyright notice

#ifndef ASSESSMENT_INTERFACES__MSG__DETAIL__ROBOT__BUILDER_HPP_
#define ASSESSMENT_INTERFACES__MSG__DETAIL__ROBOT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "assessment_interfaces/msg/detail/robot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace assessment_interfaces
{

namespace msg
{

namespace builder
{

class Init_Robot_size
{
public:
  explicit Init_Robot_size(::assessment_interfaces::msg::Robot & msg)
  : msg_(msg)
  {}
  ::assessment_interfaces::msg::Robot size(::assessment_interfaces::msg::Robot::_size_type arg)
  {
    msg_.size = std::move(arg);
    return std::move(msg_);
  }

private:
  ::assessment_interfaces::msg::Robot msg_;
};

class Init_Robot_y
{
public:
  explicit Init_Robot_y(::assessment_interfaces::msg::Robot & msg)
  : msg_(msg)
  {}
  Init_Robot_size y(::assessment_interfaces::msg::Robot::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Robot_size(msg_);
  }

private:
  ::assessment_interfaces::msg::Robot msg_;
};

class Init_Robot_x
{
public:
  Init_Robot_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Robot_y x(::assessment_interfaces::msg::Robot::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Robot_y(msg_);
  }

private:
  ::assessment_interfaces::msg::Robot msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::assessment_interfaces::msg::Robot>()
{
  return assessment_interfaces::msg::builder::Init_Robot_x();
}

}  // namespace assessment_interfaces

#endif  // ASSESSMENT_INTERFACES__MSG__DETAIL__ROBOT__BUILDER_HPP_
