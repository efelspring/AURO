// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from assessment_interfaces:msg/ItemHolder.idl
// generated code does not contain a copyright notice
#include "assessment_interfaces/msg/detail/item_holder__rosidl_typesupport_fastrtps_cpp.hpp"
#include "assessment_interfaces/msg/detail/item_holder__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: robot_id
  cdr << ros_message.robot_id;
  // Member: holding_item
  cdr << (ros_message.holding_item ? true : false);
  // Member: item_colour
  cdr << ros_message.item_colour;
  // Member: item_value
  cdr << ros_message.item_value;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_assessment_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  assessment_interfaces::msg::ItemHolder & ros_message)
{
  // Member: robot_id
  cdr >> ros_message.robot_id;

  // Member: holding_item
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.holding_item = tmp ? true : false;
  }

  // Member: item_colour
  cdr >> ros_message.item_colour;

  // Member: item_value
  cdr >> ros_message.item_value;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_assessment_interfaces
get_serialized_size(
  const assessment_interfaces::msg::ItemHolder & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: robot_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.robot_id.size() + 1);
  // Member: holding_item
  {
    size_t item_size = sizeof(ros_message.holding_item);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: item_colour
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.item_colour.size() + 1);
  // Member: item_value
  {
    size_t item_size = sizeof(ros_message.item_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_assessment_interfaces
max_serialized_size_ItemHolder(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: robot_id
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: holding_item
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: item_colour
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: item_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = assessment_interfaces::msg::ItemHolder;
    is_plain =
      (
      offsetof(DataType, item_value) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ItemHolder__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const assessment_interfaces::msg::ItemHolder *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ItemHolder__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<assessment_interfaces::msg::ItemHolder *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ItemHolder__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const assessment_interfaces::msg::ItemHolder *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ItemHolder__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ItemHolder(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ItemHolder__callbacks = {
  "assessment_interfaces::msg",
  "ItemHolder",
  _ItemHolder__cdr_serialize,
  _ItemHolder__cdr_deserialize,
  _ItemHolder__get_serialized_size,
  _ItemHolder__max_serialized_size
};

static rosidl_message_type_support_t _ItemHolder__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ItemHolder__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace assessment_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_assessment_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<assessment_interfaces::msg::ItemHolder>()
{
  return &assessment_interfaces::msg::typesupport_fastrtps_cpp::_ItemHolder__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, assessment_interfaces, msg, ItemHolder)() {
  return &assessment_interfaces::msg::typesupport_fastrtps_cpp::_ItemHolder__handle;
}

#ifdef __cplusplus
}
#endif
