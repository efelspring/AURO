// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from auro_interfaces:msg/StringWithPose.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "auro_interfaces/msg/detail/string_with_pose__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace auro_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void StringWithPose_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) auro_interfaces::msg::StringWithPose(_init);
}

void StringWithPose_fini_function(void * message_memory)
{
  auto typed_message = static_cast<auro_interfaces::msg::StringWithPose *>(message_memory);
  typed_message->~StringWithPose();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember StringWithPose_message_member_array[2] = {
  {
    "text",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(auro_interfaces::msg::StringWithPose, text),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(auro_interfaces::msg::StringWithPose, pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers StringWithPose_message_members = {
  "auro_interfaces::msg",  // message namespace
  "StringWithPose",  // message name
  2,  // number of fields
  sizeof(auro_interfaces::msg::StringWithPose),
  StringWithPose_message_member_array,  // message members
  StringWithPose_init_function,  // function to initialize message memory (memory has to be allocated)
  StringWithPose_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t StringWithPose_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &StringWithPose_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace auro_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<auro_interfaces::msg::StringWithPose>()
{
  return &::auro_interfaces::msg::rosidl_typesupport_introspection_cpp::StringWithPose_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, auro_interfaces, msg, StringWithPose)() {
  return &::auro_interfaces::msg::rosidl_typesupport_introspection_cpp::StringWithPose_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
