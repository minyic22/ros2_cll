// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interface:msg/Strokes.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE__MSG__DETAIL__STROKES__STRUCT_H_
#define INTERFACE__MSG__DETAIL__STROKES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'strokes'
#include "interface/msg/detail/stroke__struct.h"
// Member 'shape_type'
#include "rosidl_runtime_c/string.h"
// Member 'params_to_vary'
// Member 'param_values'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Strokes in the package interface.
typedef struct interface__msg__Strokes
{
  /// an array of strokes
  interface__msg__Stroke__Sequence strokes;
  /// the ID of the instance of the shape
  uint32_t shape_id;
  /// the type of the shape
  rosidl_runtime_c__String shape_type;
  /// the code of the type of the shape
  uint32_t shapetype_code;
  /// which parameters are varying in the shape model
  rosidl_runtime_c__uint8__Sequence params_to_vary;
  /// the parameter values used to make this shape
  rosidl_runtime_c__float__Sequence param_values;
} interface__msg__Strokes;

// Struct for a sequence of interface__msg__Strokes.
typedef struct interface__msg__Strokes__Sequence
{
  interface__msg__Strokes * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interface__msg__Strokes__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACE__MSG__DETAIL__STROKES__STRUCT_H_
