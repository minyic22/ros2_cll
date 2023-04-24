// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface:msg/Stroke.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE__MSG__DETAIL__STROKE__STRUCT_H_
#define INTERFACE__MSG__DETAIL__STROKE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stroke'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Stroke in the package interface.
typedef struct interface__msg__Stroke
{
  /// the shape-path of the drawn stroke
  rosidl_runtime_c__float__Sequence stroke;
} interface__msg__Stroke;

// Struct for a sequence of interface__msg__Stroke.
typedef struct interface__msg__Stroke__Sequence
{
  interface__msg__Stroke * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface__msg__Stroke__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE__MSG__DETAIL__STROKE__STRUCT_H_
