// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from assessment_interfaces:msg/ItemHolder.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "assessment_interfaces/msg/detail/item_holder__rosidl_typesupport_introspection_c.h"
#include "assessment_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "assessment_interfaces/msg/detail/item_holder__functions.h"
#include "assessment_interfaces/msg/detail/item_holder__struct.h"


// Include directives for member types
// Member `robot_id`
// Member `item_colour`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void assessment_interfaces__msg__ItemHolder__rosidl_typesupport_introspection_c__ItemHolder_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  assessment_interfaces__msg__ItemHolder__init(message_memory);
}

void assessment_interfaces__msg__ItemHolder__rosidl_typesupport_introspection_c__ItemHolder_fini_function(void * message_memory)
{
  assessment_interfaces__msg__ItemHolder__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember assessment_interfaces__msg__ItemHolder__rosidl_typesupport_introspection_c__ItemHolder_message_member_array[4] = {
  {
    "robot_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(assessment_interfaces__msg__ItemHolder, robot_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "holding_item",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(assessment_interfaces__msg__ItemHolder, holding_item),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "item_colour",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(assessment_interfaces__msg__ItemHolder, item_colour),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "item_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(assessment_interfaces__msg__ItemHolder, item_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers assessment_interfaces__msg__ItemHolder__rosidl_typesupport_introspection_c__ItemHolder_message_members = {
  "assessment_interfaces__msg",  // message namespace
  "ItemHolder",  // message name
  4,  // number of fields
  sizeof(assessment_interfaces__msg__ItemHolder),
  assessment_interfaces__msg__ItemHolder__rosidl_typesupport_introspection_c__ItemHolder_message_member_array,  // message members
  assessment_interfaces__msg__ItemHolder__rosidl_typesupport_introspection_c__ItemHolder_init_function,  // function to initialize message memory (memory has to be allocated)
  assessment_interfaces__msg__ItemHolder__rosidl_typesupport_introspection_c__ItemHolder_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t assessment_interfaces__msg__ItemHolder__rosidl_typesupport_introspection_c__ItemHolder_message_type_support_handle = {
  0,
  &assessment_interfaces__msg__ItemHolder__rosidl_typesupport_introspection_c__ItemHolder_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_assessment_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, assessment_interfaces, msg, ItemHolder)() {
  if (!assessment_interfaces__msg__ItemHolder__rosidl_typesupport_introspection_c__ItemHolder_message_type_support_handle.typesupport_identifier) {
    assessment_interfaces__msg__ItemHolder__rosidl_typesupport_introspection_c__ItemHolder_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &assessment_interfaces__msg__ItemHolder__rosidl_typesupport_introspection_c__ItemHolder_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
