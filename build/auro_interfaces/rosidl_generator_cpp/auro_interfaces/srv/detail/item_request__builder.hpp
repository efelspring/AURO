// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from auro_interfaces:srv/ItemRequest.idl
// generated code does not contain a copyright notice

#ifndef AURO_INTERFACES__SRV__DETAIL__ITEM_REQUEST__BUILDER_HPP_
#define AURO_INTERFACES__SRV__DETAIL__ITEM_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "auro_interfaces/srv/detail/item_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace auro_interfaces
{

namespace srv
{

namespace builder
{

class Init_ItemRequest_Request_robot_id
{
public:
  Init_ItemRequest_Request_robot_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::auro_interfaces::srv::ItemRequest_Request robot_id(::auro_interfaces::srv::ItemRequest_Request::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::auro_interfaces::srv::ItemRequest_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::auro_interfaces::srv::ItemRequest_Request>()
{
  return auro_interfaces::srv::builder::Init_ItemRequest_Request_robot_id();
}

}  // namespace auro_interfaces


namespace auro_interfaces
{

namespace srv
{

namespace builder
{

class Init_ItemRequest_Response_message
{
public:
  explicit Init_ItemRequest_Response_message(::auro_interfaces::srv::ItemRequest_Response & msg)
  : msg_(msg)
  {}
  ::auro_interfaces::srv::ItemRequest_Response message(::auro_interfaces::srv::ItemRequest_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::auro_interfaces::srv::ItemRequest_Response msg_;
};

class Init_ItemRequest_Response_success
{
public:
  Init_ItemRequest_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ItemRequest_Response_message success(::auro_interfaces::srv::ItemRequest_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ItemRequest_Response_message(msg_);
  }

private:
  ::auro_interfaces::srv::ItemRequest_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::auro_interfaces::srv::ItemRequest_Response>()
{
  return auro_interfaces::srv::builder::Init_ItemRequest_Response_success();
}

}  // namespace auro_interfaces

#endif  // AURO_INTERFACES__SRV__DETAIL__ITEM_REQUEST__BUILDER_HPP_
