// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from assessment_interfaces:msg/ItemLog.idl
// generated code does not contain a copyright notice
#include "assessment_interfaces/msg/detail/item_log__rosidl_typesupport_fastrtps_cpp.hpp"
#include "assessment_interfaces/msg/detail/item_log__struct.hpp"

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
  const assessment_interfaces::msg::ItemLog & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: red_count
  cdr << ros_message.red_count;
  // Member: green_count
  cdr << ros_message.green_count;
  // Member: blue_count
  cdr << ros_message.blue_count;
  // Member: total_count
  cdr << ros_message.total_count;
  // Member: red_value
  cdr << ros_message.red_value;
  // Member: green_value
  cdr << ros_message.green_value;
  // Member: blue_value
  cdr << ros_message.blue_value;
  // Member: total_value
  cdr << ros_message.total_value;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_assessment_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  assessment_interfaces::msg::ItemLog & ros_message)
{
  // Member: red_count
  cdr >> ros_message.red_count;

  // Member: green_count
  cdr >> ros_message.green_count;

  // Member: blue_count
  cdr >> ros_message.blue_count;

  // Member: total_count
  cdr >> ros_message.total_count;

  // Member: red_value
  cdr >> ros_message.red_value;

  // Member: green_value
  cdr >> ros_message.green_value;

  // Member: blue_value
  cdr >> ros_message.blue_value;

  // Member: total_value
  cdr >> ros_message.total_value;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_assessment_interfaces
get_serialized_size(
  const assessment_interfaces::msg::ItemLog & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: red_count
  {
    size_t item_size = sizeof(ros_message.red_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: green_count
  {
    size_t item_size = sizeof(ros_message.green_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: blue_count
  {
    size_t item_size = sizeof(ros_message.blue_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: total_count
  {
    size_t item_size = sizeof(ros_message.total_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: red_value
  {
    size_t item_size = sizeof(ros_message.red_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: green_value
  {
    size_t item_size = sizeof(ros_message.green_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: blue_value
  {
    size_t item_size = sizeof(ros_message.blue_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: total_value
  {
    size_t item_size = sizeof(ros_message.total_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_assessment_interfaces
max_serialized_size_ItemLog(
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


  // Member: red_count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: green_count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: blue_count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: total_count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: red_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: green_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: blue_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: total_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = assessment_interfaces::msg::ItemLog;
    is_plain =
      (
      offsetof(DataType, total_value) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ItemLog__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const assessment_interfaces::msg::ItemLog *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ItemLog__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<assessment_interfaces::msg::ItemLog *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ItemLog__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const assessment_interfaces::msg::ItemLog *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ItemLog__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ItemLog(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ItemLog__callbacks = {
  "assessment_interfaces::msg",
  "ItemLog",
  _ItemLog__cdr_serialize,
  _ItemLog__cdr_deserialize,
  _ItemLog__get_serialized_size,
  _ItemLog__max_serialized_size
};

static rosidl_message_type_support_t _ItemLog__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ItemLog__callbacks,
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
get_message_type_support_handle<assessment_interfaces::msg::ItemLog>()
{
  return &assessment_interfaces::msg::typesupport_fastrtps_cpp::_ItemLog__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, assessment_interfaces, msg, ItemLog)() {
  return &assessment_interfaces::msg::typesupport_fastrtps_cpp::_ItemLog__handle;
}

#ifdef __cplusplus
}
#endif
