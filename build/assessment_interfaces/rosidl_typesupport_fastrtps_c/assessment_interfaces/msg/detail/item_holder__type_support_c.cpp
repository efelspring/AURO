// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from assessment_interfaces:msg/ItemHolder.idl
// generated code does not contain a copyright notice
#include "assessment_interfaces/msg/detail/item_holder__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "assessment_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "assessment_interfaces/msg/detail/item_holder__struct.h"
#include "assessment_interfaces/msg/detail/item_holder__functions.h"
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

#include "rosidl_runtime_c/string.h"  // item_colour, robot_id
#include "rosidl_runtime_c/string_functions.h"  // item_colour, robot_id

// forward declare type support functions


using _ItemHolder__ros_msg_type = assessment_interfaces__msg__ItemHolder;

static bool _ItemHolder__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ItemHolder__ros_msg_type * ros_message = static_cast<const _ItemHolder__ros_msg_type *>(untyped_ros_message);
  // Field name: robot_id
  {
    const rosidl_runtime_c__String * str = &ros_message->robot_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: holding_item
  {
    cdr << (ros_message->holding_item ? true : false);
  }

  // Field name: item_colour
  {
    const rosidl_runtime_c__String * str = &ros_message->item_colour;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: item_value
  {
    cdr << ros_message->item_value;
  }

  return true;
}

static bool _ItemHolder__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ItemHolder__ros_msg_type * ros_message = static_cast<_ItemHolder__ros_msg_type *>(untyped_ros_message);
  // Field name: robot_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->robot_id.data) {
      rosidl_runtime_c__String__init(&ros_message->robot_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->robot_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'robot_id'\n");
      return false;
    }
  }

  // Field name: holding_item
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->holding_item = tmp ? true : false;
  }

  // Field name: item_colour
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->item_colour.data) {
      rosidl_runtime_c__String__init(&ros_message->item_colour);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->item_colour,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'item_colour'\n");
      return false;
    }
  }

  // Field name: item_value
  {
    cdr >> ros_message->item_value;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_assessment_interfaces
size_t get_serialized_size_assessment_interfaces__msg__ItemHolder(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ItemHolder__ros_msg_type * ros_message = static_cast<const _ItemHolder__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name robot_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->robot_id.size + 1);
  // field.name holding_item
  {
    size_t item_size = sizeof(ros_message->holding_item);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name item_colour
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->item_colour.size + 1);
  // field.name item_value
  {
    size_t item_size = sizeof(ros_message->item_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ItemHolder__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_assessment_interfaces__msg__ItemHolder(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_assessment_interfaces
size_t max_serialized_size_assessment_interfaces__msg__ItemHolder(
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

  // member: robot_id
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
  // member: holding_item
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: item_colour
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
  // member: item_value
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
    using DataType = assessment_interfaces__msg__ItemHolder;
    is_plain =
      (
      offsetof(DataType, item_value) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ItemHolder__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_assessment_interfaces__msg__ItemHolder(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ItemHolder = {
  "assessment_interfaces::msg",
  "ItemHolder",
  _ItemHolder__cdr_serialize,
  _ItemHolder__cdr_deserialize,
  _ItemHolder__get_serialized_size,
  _ItemHolder__max_serialized_size
};

static rosidl_message_type_support_t _ItemHolder__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ItemHolder,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, assessment_interfaces, msg, ItemHolder)() {
  return &_ItemHolder__type_support;
}

#if defined(__cplusplus)
}
#endif
