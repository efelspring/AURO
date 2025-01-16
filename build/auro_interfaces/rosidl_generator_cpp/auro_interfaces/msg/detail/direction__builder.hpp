// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from auro_interfaces:msg/Direction.idl
// generated code does not contain a copyright notice

#ifndef AURO_INTERFACES__MSG__DETAIL__DIRECTION__BUILDER_HPP_
#define AURO_INTERFACES__MSG__DETAIL__DIRECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "auro_interfaces/msg/detail/direction__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace auro_interfaces
{

namespace msg
{

namespace builder
{

class Init_Direction_direction
{
public:
  Init_Direction_direction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::auro_interfaces::msg::Direction direction(::auro_interfaces::msg::Direction::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::auro_interfaces::msg::Direction msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::auro_interfaces::msg::Direction>()
{
  return auro_interfaces::msg::builder::Init_Direction_direction();
}

}  // namespace auro_interfaces

#endif  // AURO_INTERFACES__MSG__DETAIL__DIRECTION__BUILDER_HPP_
