// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from interface:msg/Shape.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "interface/msg/detail/shape__rosidl_typesupport_introspection_c.h"
#include "interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "interface/msg/detail/shape__functions.h"
#include "interface/msg/detail/shape__struct.h"


// Include directives for member types
// Member `path`
// Member `params_to_vary`
// Member `param_values`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `shape_type`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void interface__msg__Shape__rosidl_typesupport_introspection_c__Shape_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interface__msg__Shape__init(message_memory);
}

void interface__msg__Shape__rosidl_typesupport_introspection_c__Shape_fini_function(void * message_memory)
{
  interface__msg__Shape__fini(message_memory);
}

size_t interface__msg__Shape__rosidl_typesupport_introspection_c__size_function__Shape__path(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * interface__msg__Shape__rosidl_typesupport_introspection_c__get_const_function__Shape__path(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interface__msg__Shape__rosidl_typesupport_introspection_c__get_function__Shape__path(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void interface__msg__Shape__rosidl_typesupport_introspection_c__fetch_function__Shape__path(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    interface__msg__Shape__rosidl_typesupport_introspection_c__get_const_function__Shape__path(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void interface__msg__Shape__rosidl_typesupport_introspection_c__assign_function__Shape__path(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    interface__msg__Shape__rosidl_typesupport_introspection_c__get_function__Shape__path(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool interface__msg__Shape__rosidl_typesupport_introspection_c__resize_function__Shape__path(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t interface__msg__Shape__rosidl_typesupport_introspection_c__size_function__Shape__params_to_vary(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * interface__msg__Shape__rosidl_typesupport_introspection_c__get_const_function__Shape__params_to_vary(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interface__msg__Shape__rosidl_typesupport_introspection_c__get_function__Shape__params_to_vary(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void interface__msg__Shape__rosidl_typesupport_introspection_c__fetch_function__Shape__params_to_vary(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    interface__msg__Shape__rosidl_typesupport_introspection_c__get_const_function__Shape__params_to_vary(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void interface__msg__Shape__rosidl_typesupport_introspection_c__assign_function__Shape__params_to_vary(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    interface__msg__Shape__rosidl_typesupport_introspection_c__get_function__Shape__params_to_vary(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool interface__msg__Shape__rosidl_typesupport_introspection_c__resize_function__Shape__params_to_vary(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t interface__msg__Shape__rosidl_typesupport_introspection_c__size_function__Shape__param_values(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * interface__msg__Shape__rosidl_typesupport_introspection_c__get_const_function__Shape__param_values(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interface__msg__Shape__rosidl_typesupport_introspection_c__get_function__Shape__param_values(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void interface__msg__Shape__rosidl_typesupport_introspection_c__fetch_function__Shape__param_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    interface__msg__Shape__rosidl_typesupport_introspection_c__get_const_function__Shape__param_values(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void interface__msg__Shape__rosidl_typesupport_introspection_c__assign_function__Shape__param_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    interface__msg__Shape__rosidl_typesupport_introspection_c__get_function__Shape__param_values(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool interface__msg__Shape__rosidl_typesupport_introspection_c__resize_function__Shape__param_values(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember interface__msg__Shape__rosidl_typesupport_introspection_c__Shape_message_member_array[6] = {
  {
    "path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interface__msg__Shape, path),  // bytes offset in struct
    NULL,  // default value
    interface__msg__Shape__rosidl_typesupport_introspection_c__size_function__Shape__path,  // size() function pointer
    interface__msg__Shape__rosidl_typesupport_introspection_c__get_const_function__Shape__path,  // get_const(index) function pointer
    interface__msg__Shape__rosidl_typesupport_introspection_c__get_function__Shape__path,  // get(index) function pointer
    interface__msg__Shape__rosidl_typesupport_introspection_c__fetch_function__Shape__path,  // fetch(index, &value) function pointer
    interface__msg__Shape__rosidl_typesupport_introspection_c__assign_function__Shape__path,  // assign(index, value) function pointer
    interface__msg__Shape__rosidl_typesupport_introspection_c__resize_function__Shape__path  // resize(index) function pointer
  },
  {
    "shape_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interface__msg__Shape, shape_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "shape_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interface__msg__Shape, shape_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "shape_type_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interface__msg__Shape, shape_type_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "params_to_vary",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interface__msg__Shape, params_to_vary),  // bytes offset in struct
    NULL,  // default value
    interface__msg__Shape__rosidl_typesupport_introspection_c__size_function__Shape__params_to_vary,  // size() function pointer
    interface__msg__Shape__rosidl_typesupport_introspection_c__get_const_function__Shape__params_to_vary,  // get_const(index) function pointer
    interface__msg__Shape__rosidl_typesupport_introspection_c__get_function__Shape__params_to_vary,  // get(index) function pointer
    interface__msg__Shape__rosidl_typesupport_introspection_c__fetch_function__Shape__params_to_vary,  // fetch(index, &value) function pointer
    interface__msg__Shape__rosidl_typesupport_introspection_c__assign_function__Shape__params_to_vary,  // assign(index, value) function pointer
    interface__msg__Shape__rosidl_typesupport_introspection_c__resize_function__Shape__params_to_vary  // resize(index) function pointer
  },
  {
    "param_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interface__msg__Shape, param_values),  // bytes offset in struct
    NULL,  // default value
    interface__msg__Shape__rosidl_typesupport_introspection_c__size_function__Shape__param_values,  // size() function pointer
    interface__msg__Shape__rosidl_typesupport_introspection_c__get_const_function__Shape__param_values,  // get_const(index) function pointer
    interface__msg__Shape__rosidl_typesupport_introspection_c__get_function__Shape__param_values,  // get(index) function pointer
    interface__msg__Shape__rosidl_typesupport_introspection_c__fetch_function__Shape__param_values,  // fetch(index, &value) function pointer
    interface__msg__Shape__rosidl_typesupport_introspection_c__assign_function__Shape__param_values,  // assign(index, value) function pointer
    interface__msg__Shape__rosidl_typesupport_introspection_c__resize_function__Shape__param_values  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers interface__msg__Shape__rosidl_typesupport_introspection_c__Shape_message_members = {
  "interface__msg",  // message namespace
  "Shape",  // message name
  6,  // number of fields
  sizeof(interface__msg__Shape),
  interface__msg__Shape__rosidl_typesupport_introspection_c__Shape_message_member_array,  // message members
  interface__msg__Shape__rosidl_typesupport_introspection_c__Shape_init_function,  // function to initialize message memory (memory has to be allocated)
  interface__msg__Shape__rosidl_typesupport_introspection_c__Shape_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t interface__msg__Shape__rosidl_typesupport_introspection_c__Shape_message_type_support_handle = {
  0,
  &interface__msg__Shape__rosidl_typesupport_introspection_c__Shape_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interface, msg, Shape)() {
  if (!interface__msg__Shape__rosidl_typesupport_introspection_c__Shape_message_type_support_handle.typesupport_identifier) {
    interface__msg__Shape__rosidl_typesupport_introspection_c__Shape_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &interface__msg__Shape__rosidl_typesupport_introspection_c__Shape_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
