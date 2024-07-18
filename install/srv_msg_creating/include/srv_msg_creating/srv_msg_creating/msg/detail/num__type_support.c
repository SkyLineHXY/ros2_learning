// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from srv_msg_creating:msg/Num.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "srv_msg_creating/msg/detail/num__rosidl_typesupport_introspection_c.h"
#include "srv_msg_creating/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "srv_msg_creating/msg/detail/num__functions.h"
#include "srv_msg_creating/msg/detail/num__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void srv_msg_creating__msg__Num__rosidl_typesupport_introspection_c__Num_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  srv_msg_creating__msg__Num__init(message_memory);
}

void srv_msg_creating__msg__Num__rosidl_typesupport_introspection_c__Num_fini_function(void * message_memory)
{
  srv_msg_creating__msg__Num__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember srv_msg_creating__msg__Num__rosidl_typesupport_introspection_c__Num_message_member_array[3] = {
  {
    "a",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(srv_msg_creating__msg__Num, a),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "b",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(srv_msg_creating__msg__Num, b),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "c",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(srv_msg_creating__msg__Num, c),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers srv_msg_creating__msg__Num__rosidl_typesupport_introspection_c__Num_message_members = {
  "srv_msg_creating__msg",  // message namespace
  "Num",  // message name
  3,  // number of fields
  sizeof(srv_msg_creating__msg__Num),
  srv_msg_creating__msg__Num__rosidl_typesupport_introspection_c__Num_message_member_array,  // message members
  srv_msg_creating__msg__Num__rosidl_typesupport_introspection_c__Num_init_function,  // function to initialize message memory (memory has to be allocated)
  srv_msg_creating__msg__Num__rosidl_typesupport_introspection_c__Num_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t srv_msg_creating__msg__Num__rosidl_typesupport_introspection_c__Num_message_type_support_handle = {
  0,
  &srv_msg_creating__msg__Num__rosidl_typesupport_introspection_c__Num_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_srv_msg_creating
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, srv_msg_creating, msg, Num)() {
  if (!srv_msg_creating__msg__Num__rosidl_typesupport_introspection_c__Num_message_type_support_handle.typesupport_identifier) {
    srv_msg_creating__msg__Num__rosidl_typesupport_introspection_c__Num_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &srv_msg_creating__msg__Num__rosidl_typesupport_introspection_c__Num_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
