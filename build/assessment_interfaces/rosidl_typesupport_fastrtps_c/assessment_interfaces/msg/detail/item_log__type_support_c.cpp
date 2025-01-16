// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from assessment_interfaces:msg/ItemLog.idl
// generated code does not contain a copyright notice
#include "assessment_interfaces/msg/detail/item_log__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "assessment_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "assessment_interfaces/msg/detail/item_log__struct.h"
#include "assessment_interfaces/msg/detail/item_log__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _ItemLog__ros_msg_type = assessment_interfaces__msg__ItemLog;

static bool _ItemLog__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ItemLog__ros_msg_type * ros_message = static_cast<const _ItemLog__ros_msg_type *>(untyped_ros_message);
  // Field name: red_count
  {
    cdr << ros_message->red_count;
  }

  // Field name: green_count
  {
    cdr << ros_message->green_count;
  }

  // Field name: blue_count
  {
    cdr << ros_message->blue_count;
  }

  // Field name: total_count
  {
    cdr << ros_message->total_count;
  }

  // Field name: red_value
  {
    cdr << ros_message->red_value;
  }

  // Field name: green_value
  {
    cdr << ros_message->green_value;
  }

  // Field name: blue_value
  {
    cdr << ros_message->blue_value;
  }

  // Field name: total_value
  {
    cdr << ros_message->total_value;
  }

  return true;
}

static bool _ItemLog__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ItemLog__ros_msg_type * ros_message = static_cast<_ItemLog__ros_msg_type *>(untyped_ros_message);
  // Field name: red_count
  {
    cdr >> ros_message->red_count;
  }

  // Field name: green_count
  {
    cdr >> ros_message->green_count;
  }

  // Field name: blue_count
  {
    cdr >> ros_message->blue_count;
  }

  // Field name: total_count
  {
    cdr >> ros_message->total_count;
  }

  // Field name: red_value
  {
    cdr >> ros_message->red_value;
  }

  // Field name: green_value
  {
    cdr >> ros_message->green_value;
  }

  // Field name: blue_value
  {
    cdr >> ros_message->blue_value;
  }

  // Field name: total_value
  {
    cdr >> ros_message->total_value;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_assessment_interfaces
size_t get_serialized_size_assessment_interfaces__msg__ItemLog(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ItemLog__ros_msg_type * ros_message = static_cast<const _ItemLog__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name red_count
  {
    size_t item_size = sizeof(ros_message->red_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name green_count
  {
    size_t item_size = sizeof(ros_message->green_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name blue_count
  {
    size_t item_size = sizeof(ros_message->blue_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name total_count
  {
    size_t item_size = sizeof(ros_message->total_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name red_value
  {
    size_t item_size = sizeof(ros_message->red_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name green_value
  {
    size_t item_size = sizeof(ros_message->green_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name blue_value
  {
    size_t item_size = sizeof(ros_message->blue_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name total_value
  {
    size_t item_size = sizeof(ros_message->total_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ItemLog__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_assessment_interfaces__msg__ItemLog(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_assessment_interfaces
size_t max_serialized_size_assessment_interfaces__msg__ItemLog(
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

  // member: red_count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: green_count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: blue_count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: total_count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: red_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: green_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: blue_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: total_value
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
    using DataType = assessment_interfaces__msg__ItemLog;
    is_plain =
      (
      offsetof(DataType, total_value) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ItemLog__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_assessment_interfaces__msg__ItemLog(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ItemLog = {
  "assessment_interfaces::msg",
  "ItemLog",
  _ItemLog__cdr_serialize,
  _ItemLog__cdr_deserialize,
  _ItemLog__get_serialized_size,
  _ItemLog__max_serialized_size
};

static rosidl_message_type_support_t _ItemLog__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ItemLog,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, assessment_interfaces, msg, ItemLog)() {
  return &_ItemLog__type_support;
}

#if defined(__cplusplus)
}
#endif
