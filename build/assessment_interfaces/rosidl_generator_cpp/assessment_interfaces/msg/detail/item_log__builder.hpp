// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from assessment_interfaces:msg/ItemLog.idl
// generated code does not contain a copyright notice

#ifndef ASSESSMENT_INTERFACES__MSG__DETAIL__ITEM_LOG__BUILDER_HPP_
#define ASSESSMENT_INTERFACES__MSG__DETAIL__ITEM_LOG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "assessment_interfaces/msg/detail/item_log__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace assessment_interfaces
{

namespace msg
{

namespace builder
{

class Init_ItemLog_total_value
{
public:
  explicit Init_ItemLog_total_value(::assessment_interfaces::msg::ItemLog & msg)
  : msg_(msg)
  {}
  ::assessment_interfaces::msg::ItemLog total_value(::assessment_interfaces::msg::ItemLog::_total_value_type arg)
  {
    msg_.total_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::assessment_interfaces::msg::ItemLog msg_;
};

class Init_ItemLog_blue_value
{
public:
  explicit Init_ItemLog_blue_value(::assessment_interfaces::msg::ItemLog & msg)
  : msg_(msg)
  {}
  Init_ItemLog_total_value blue_value(::assessment_interfaces::msg::ItemLog::_blue_value_type arg)
  {
    msg_.blue_value = std::move(arg);
    return Init_ItemLog_total_value(msg_);
  }

private:
  ::assessment_interfaces::msg::ItemLog msg_;
};

class Init_ItemLog_green_value
{
public:
  explicit Init_ItemLog_green_value(::assessment_interfaces::msg::ItemLog & msg)
  : msg_(msg)
  {}
  Init_ItemLog_blue_value green_value(::assessment_interfaces::msg::ItemLog::_green_value_type arg)
  {
    msg_.green_value = std::move(arg);
    return Init_ItemLog_blue_value(msg_);
  }

private:
  ::assessment_interfaces::msg::ItemLog msg_;
};

class Init_ItemLog_red_value
{
public:
  explicit Init_ItemLog_red_value(::assessment_interfaces::msg::ItemLog & msg)
  : msg_(msg)
  {}
  Init_ItemLog_green_value red_value(::assessment_interfaces::msg::ItemLog::_red_value_type arg)
  {
    msg_.red_value = std::move(arg);
    return Init_ItemLog_green_value(msg_);
  }

private:
  ::assessment_interfaces::msg::ItemLog msg_;
};

class Init_ItemLog_total_count
{
public:
  explicit Init_ItemLog_total_count(::assessment_interfaces::msg::ItemLog & msg)
  : msg_(msg)
  {}
  Init_ItemLog_red_value total_count(::assessment_interfaces::msg::ItemLog::_total_count_type arg)
  {
    msg_.total_count = std::move(arg);
    return Init_ItemLog_red_value(msg_);
  }

private:
  ::assessment_interfaces::msg::ItemLog msg_;
};

class Init_ItemLog_blue_count
{
public:
  explicit Init_ItemLog_blue_count(::assessment_interfaces::msg::ItemLog & msg)
  : msg_(msg)
  {}
  Init_ItemLog_total_count blue_count(::assessment_interfaces::msg::ItemLog::_blue_count_type arg)
  {
    msg_.blue_count = std::move(arg);
    return Init_ItemLog_total_count(msg_);
  }

private:
  ::assessment_interfaces::msg::ItemLog msg_;
};

class Init_ItemLog_green_count
{
public:
  explicit Init_ItemLog_green_count(::assessment_interfaces::msg::ItemLog & msg)
  : msg_(msg)
  {}
  Init_ItemLog_blue_count green_count(::assessment_interfaces::msg::ItemLog::_green_count_type arg)
  {
    msg_.green_count = std::move(arg);
    return Init_ItemLog_blue_count(msg_);
  }

private:
  ::assessment_interfaces::msg::ItemLog msg_;
};

class Init_ItemLog_red_count
{
public:
  Init_ItemLog_red_count()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ItemLog_green_count red_count(::assessment_interfaces::msg::ItemLog::_red_count_type arg)
  {
    msg_.red_count = std::move(arg);
    return Init_ItemLog_green_count(msg_);
  }

private:
  ::assessment_interfaces::msg::ItemLog msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::assessment_interfaces::msg::ItemLog>()
{
  return assessment_interfaces::msg::builder::Init_ItemLog_red_count();
}

}  // namespace assessment_interfaces

#endif  // ASSESSMENT_INTERFACES__MSG__DETAIL__ITEM_LOG__BUILDER_HPP_
