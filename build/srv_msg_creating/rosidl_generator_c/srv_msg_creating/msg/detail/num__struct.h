// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from srv_msg_creating:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef SRV_MSG_CREATING__MSG__DETAIL__NUM__STRUCT_H_
#define SRV_MSG_CREATING__MSG__DETAIL__NUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Num in the package srv_msg_creating.
typedef struct srv_msg_creating__msg__Num
{
  int64_t a;
  int64_t b;
  int64_t c;
} srv_msg_creating__msg__Num;

// Struct for a sequence of srv_msg_creating__msg__Num.
typedef struct srv_msg_creating__msg__Num__Sequence
{
  srv_msg_creating__msg__Num * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} srv_msg_creating__msg__Num__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SRV_MSG_CREATING__MSG__DETAIL__NUM__STRUCT_H_
