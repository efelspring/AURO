// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from assessment_interfaces:msg/ItemLog.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "assessment_interfaces/msg/detail/item_log__rosidl_typesupport_introspection_c.h"
#include "assessment_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "assessment_interfaces/msg/detail/item_log__functions.h"
#include "assessment_interfaces/msg/detail/item_log__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void assessment_interfaces__msg__ItemLog__rosidl_typesupport_introspection_c__ItemLog_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  assessment_interfaces__msg__ItemLog__init(message_memory);
}

void assessment_interfaces__msg__ItemLog__rosidl_typesupport_introspection_c__ItemLog_fini_function(void * message_memory)
{
  assessment_interfaces__msg__ItemLog__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember assessment_interfaces__msg__ItemLog__rosidl_typesupport_introspection_c__ItemLog_message_member_array[8] = {
  {
    "red_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(assessment_interfaces__msg__ItemLog, red_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "green_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(assessment_interfaces__msg__ItemLog, green_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "blue_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(assessment_interfaces__msg__ItemLog, blue_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "total_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(assessment_interfaces__msg__ItemLog, total_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "red_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(assessment_interfaces__msg__ItemLog, red_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "green_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(assessment_interfaces__msg__ItemLog, green_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "blue_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(assessment_interfaces__msg__ItemLog, blue_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "total_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(assessment_interfaces__msg__ItemLog, total_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers assessment_interfaces__msg__ItemLog__rosidl_typesupport_introspection_c__ItemLog_message_members = {
  "assessment_interfaces__msg",  // message namespace
  "ItemLog",  // message name
  8,  // number of fields
  sizeof(assessment_interfaces__msg__ItemLog),
  assessment_interfaces__msg__ItemLog__rosidl_typesupport_introspection_c__ItemLog_message_member_array,  // message members
  assessment_interfaces__msg__ItemLog__rosidl_typesupport_introspection_c__ItemLog_init_function,  // function to initialize message memory (memory has to be allocated)
  assessment_interfaces__msg__ItemLog__rosidl_typesupport_introspection_c__ItemLog_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t assessment_interfaces__msg__ItemLog__rosidl_typesupport_introspection_c__ItemLog_message_type_support_handle = {
  0,
  &assessment_interfaces__msg__ItemLog__rosidl_typesupport_introspection_c__ItemLog_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_assessment_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, assessment_interfaces, msg, ItemLog)() {
  if (!assessment_interfaces__msg__ItemLog__rosidl_typesupport_introspection_c__ItemLog_message_type_support_handle.typesupport_identifier) {
    assessment_interfaces__msg__ItemLog__rosidl_typesupport_introspection_c__ItemLog_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &assessment_interfaces__msg__ItemLog__rosidl_typesupport_introspection_c__ItemLog_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
