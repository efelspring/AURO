// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from auro_interfaces:msg/ItemList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "auro_interfaces/msg/detail/item_list__rosidl_typesupport_introspection_c.h"
#include "auro_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "auro_interfaces/msg/detail/item_list__functions.h"
#include "auro_interfaces/msg/detail/item_list__struct.h"


// Include directives for member types
// Member `data`
#include "auro_interfaces/msg/item.h"
// Member `data`
#include "auro_interfaces/msg/detail/item__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void auro_interfaces__msg__ItemList__rosidl_typesupport_introspection_c__ItemList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  auro_interfaces__msg__ItemList__init(message_memory);
}

void auro_interfaces__msg__ItemList__rosidl_typesupport_introspection_c__ItemList_fini_function(void * message_memory)
{
  auro_interfaces__msg__ItemList__fini(message_memory);
}

size_t auro_interfaces__msg__ItemList__rosidl_typesupport_introspection_c__size_function__ItemList__data(
  const void * untyped_member)
{
  const auro_interfaces__msg__Item__Sequence * member =
    (const auro_interfaces__msg__Item__Sequence *)(untyped_member);
  return member->size;
}

const void * auro_interfaces__msg__ItemList__rosidl_typesupport_introspection_c__get_const_function__ItemList__data(
  const void * untyped_member, size_t index)
{
  const auro_interfaces__msg__Item__Sequence * member =
    (const auro_interfaces__msg__Item__Sequence *)(untyped_member);
  return &member->data[index];
}

void * auro_interfaces__msg__ItemList__rosidl_typesupport_introspection_c__get_function__ItemList__data(
  void * untyped_member, size_t index)
{
  auro_interfaces__msg__Item__Sequence * member =
    (auro_interfaces__msg__Item__Sequence *)(untyped_member);
  return &member->data[index];
}

void auro_interfaces__msg__ItemList__rosidl_typesupport_introspection_c__fetch_function__ItemList__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auro_interfaces__msg__Item * item =
    ((const auro_interfaces__msg__Item *)
    auro_interfaces__msg__ItemList__rosidl_typesupport_introspection_c__get_const_function__ItemList__data(untyped_member, index));
  auro_interfaces__msg__Item * value =
    (auro_interfaces__msg__Item *)(untyped_value);
  *value = *item;
}

void auro_interfaces__msg__ItemList__rosidl_typesupport_introspection_c__assign_function__ItemList__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auro_interfaces__msg__Item * item =
    ((auro_interfaces__msg__Item *)
    auro_interfaces__msg__ItemList__rosidl_typesupport_introspection_c__get_function__ItemList__data(untyped_member, index));
  const auro_interfaces__msg__Item * value =
    (const auro_interfaces__msg__Item *)(untyped_value);
  *item = *value;
}

bool auro_interfaces__msg__ItemList__rosidl_typesupport_introspection_c__resize_function__ItemList__data(
  void * untyped_member, size_t size)
{
  auro_interfaces__msg__Item__Sequence * member =
    (auro_interfaces__msg__Item__Sequence *)(untyped_member);
  auro_interfaces__msg__Item__Sequence__fini(member);
  return auro_interfaces__msg__Item__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember auro_interfaces__msg__ItemList__rosidl_typesupport_introspection_c__ItemList_message_member_array[1] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(auro_interfaces__msg__ItemList, data),  // bytes offset in struct
    NULL,  // default value
    auro_interfaces__msg__ItemList__rosidl_typesupport_introspection_c__size_function__ItemList__data,  // size() function pointer
    auro_interfaces__msg__ItemList__rosidl_typesupport_introspection_c__get_const_function__ItemList__data,  // get_const(index) function pointer
    auro_interfaces__msg__ItemList__rosidl_typesupport_introspection_c__get_function__ItemList__data,  // get(index) function pointer
    auro_interfaces__msg__ItemList__rosidl_typesupport_introspection_c__fetch_function__ItemList__data,  // fetch(index, &value) function pointer
    auro_interfaces__msg__ItemList__rosidl_typesupport_introspection_c__assign_function__ItemList__data,  // assign(index, value) function pointer
    auro_interfaces__msg__ItemList__rosidl_typesupport_introspection_c__resize_function__ItemList__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers auro_interfaces__msg__ItemList__rosidl_typesupport_introspection_c__ItemList_message_members = {
  "auro_interfaces__msg",  // message namespace
  "ItemList",  // message name
  1,  // number of fields
  sizeof(auro_interfaces__msg__ItemList),
  auro_interfaces__msg__ItemList__rosidl_typesupport_introspection_c__ItemList_message_member_array,  // message members
  auro_interfaces__msg__ItemList__rosidl_typesupport_introspection_c__ItemList_init_function,  // function to initialize message memory (memory has to be allocated)
  auro_interfaces__msg__ItemList__rosidl_typesupport_introspection_c__ItemList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t auro_interfaces__msg__ItemList__rosidl_typesupport_introspection_c__ItemList_message_type_support_handle = {
  0,
  &auro_interfaces__msg__ItemList__rosidl_typesupport_introspection_c__ItemList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_auro_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, auro_interfaces, msg, ItemList)() {
  auro_interfaces__msg__ItemList__rosidl_typesupport_introspection_c__ItemList_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, auro_interfaces, msg, Item)();
  if (!auro_interfaces__msg__ItemList__rosidl_typesupport_introspection_c__ItemList_message_type_support_handle.typesupport_identifier) {
    auro_interfaces__msg__ItemList__rosidl_typesupport_introspection_c__ItemList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &auro_interfaces__msg__ItemList__rosidl_typesupport_introspection_c__ItemList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
