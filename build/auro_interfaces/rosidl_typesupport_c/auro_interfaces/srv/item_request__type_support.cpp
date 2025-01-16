// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from auro_interfaces:srv/ItemRequest.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "auro_interfaces/srv/detail/item_request__struct.h"
#include "auro_interfaces/srv/detail/item_request__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace auro_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ItemRequest_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ItemRequest_Request_type_support_ids_t;

static const _ItemRequest_Request_type_support_ids_t _ItemRequest_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ItemRequest_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ItemRequest_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ItemRequest_Request_type_support_symbol_names_t _ItemRequest_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, auro_interfaces, srv, ItemRequest_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, auro_interfaces, srv, ItemRequest_Request)),
  }
};

typedef struct _ItemRequest_Request_type_support_data_t
{
  void * data[2];
} _ItemRequest_Request_type_support_data_t;

static _ItemRequest_Request_type_support_data_t _ItemRequest_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ItemRequest_Request_message_typesupport_map = {
  2,
  "auro_interfaces",
  &_ItemRequest_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ItemRequest_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ItemRequest_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ItemRequest_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ItemRequest_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace auro_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, auro_interfaces, srv, ItemRequest_Request)() {
  return &::auro_interfaces::srv::rosidl_typesupport_c::ItemRequest_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "auro_interfaces/srv/detail/item_request__struct.h"
// already included above
// #include "auro_interfaces/srv/detail/item_request__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace auro_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ItemRequest_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ItemRequest_Response_type_support_ids_t;

static const _ItemRequest_Response_type_support_ids_t _ItemRequest_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ItemRequest_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ItemRequest_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ItemRequest_Response_type_support_symbol_names_t _ItemRequest_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, auro_interfaces, srv, ItemRequest_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, auro_interfaces, srv, ItemRequest_Response)),
  }
};

typedef struct _ItemRequest_Response_type_support_data_t
{
  void * data[2];
} _ItemRequest_Response_type_support_data_t;

static _ItemRequest_Response_type_support_data_t _ItemRequest_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ItemRequest_Response_message_typesupport_map = {
  2,
  "auro_interfaces",
  &_ItemRequest_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ItemRequest_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ItemRequest_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ItemRequest_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ItemRequest_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace auro_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, auro_interfaces, srv, ItemRequest_Response)() {
  return &::auro_interfaces::srv::rosidl_typesupport_c::ItemRequest_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "auro_interfaces/srv/detail/item_request__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace auro_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ItemRequest_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ItemRequest_type_support_ids_t;

static const _ItemRequest_type_support_ids_t _ItemRequest_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ItemRequest_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ItemRequest_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ItemRequest_type_support_symbol_names_t _ItemRequest_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, auro_interfaces, srv, ItemRequest)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, auro_interfaces, srv, ItemRequest)),
  }
};

typedef struct _ItemRequest_type_support_data_t
{
  void * data[2];
} _ItemRequest_type_support_data_t;

static _ItemRequest_type_support_data_t _ItemRequest_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ItemRequest_service_typesupport_map = {
  2,
  "auro_interfaces",
  &_ItemRequest_service_typesupport_ids.typesupport_identifier[0],
  &_ItemRequest_service_typesupport_symbol_names.symbol_name[0],
  &_ItemRequest_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ItemRequest_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ItemRequest_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace auro_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, auro_interfaces, srv, ItemRequest)() {
  return &::auro_interfaces::srv::rosidl_typesupport_c::ItemRequest_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
