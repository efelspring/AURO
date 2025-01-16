// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from assessment_interfaces:msg/ItemHolder.idl
// generated code does not contain a copyright notice

#ifndef ASSESSMENT_INTERFACES__MSG__DETAIL__ITEM_HOLDER__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define ASSESSMENT_INTERFACES__MSG__DETAIL__ITEM_HOLDER__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "assessment_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "assessment_interfaces/msg/detail/item_holder__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace assessment_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_assessment_interfaces
cdr_serialize(
  const assessment_interfaces::msg::ItemHolder & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_assessment_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  assessment_interfaces::msg::ItemHolder & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_assessment_interfaces
get_serialized_size(
  const assessment_interfaces::msg::ItemHolder & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_assessment_interfaces
max_serialized_size_ItemHolder(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace assessment_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_assessment_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, assessment_interfaces, msg, ItemHolder)();

#ifdef __cplusplus
}
#endif

#endif  // ASSESSMENT_INTERFACES__MSG__DETAIL__ITEM_HOLDER__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
