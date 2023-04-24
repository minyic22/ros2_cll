// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interface:msg/Shape.idl
// generated code does not contain a copyright notice
#include "interface/msg/detail/shape__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `path`
// Member `params_to_vary`
// Member `param_values`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `shape_type`
#include "rosidl_runtime_c/string_functions.h"

bool
interface__msg__Shape__init(interface__msg__Shape * msg)
{
  if (!msg) {
    return false;
  }
  // path
  if (!rosidl_runtime_c__float__Sequence__init(&msg->path, 0)) {
    interface__msg__Shape__fini(msg);
    return false;
  }
  // shape_id
  // shape_type
  if (!rosidl_runtime_c__String__init(&msg->shape_type)) {
    interface__msg__Shape__fini(msg);
    return false;
  }
  // shape_type_code
  // params_to_vary
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->params_to_vary, 0)) {
    interface__msg__Shape__fini(msg);
    return false;
  }
  // param_values
  if (!rosidl_runtime_c__float__Sequence__init(&msg->param_values, 0)) {
    interface__msg__Shape__fini(msg);
    return false;
  }
  return true;
}

void
interface__msg__Shape__fini(interface__msg__Shape * msg)
{
  if (!msg) {
    return;
  }
  // path
  rosidl_runtime_c__float__Sequence__fini(&msg->path);
  // shape_id
  // shape_type
  rosidl_runtime_c__String__fini(&msg->shape_type);
  // shape_type_code
  // params_to_vary
  rosidl_runtime_c__uint8__Sequence__fini(&msg->params_to_vary);
  // param_values
  rosidl_runtime_c__float__Sequence__fini(&msg->param_values);
}

bool
interface__msg__Shape__are_equal(const interface__msg__Shape * lhs, const interface__msg__Shape * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // path
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->path), &(rhs->path)))
  {
    return false;
  }
  // shape_id
  if (lhs->shape_id != rhs->shape_id) {
    return false;
  }
  // shape_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->shape_type), &(rhs->shape_type)))
  {
    return false;
  }
  // shape_type_code
  if (lhs->shape_type_code != rhs->shape_type_code) {
    return false;
  }
  // params_to_vary
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->params_to_vary), &(rhs->params_to_vary)))
  {
    return false;
  }
  // param_values
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->param_values), &(rhs->param_values)))
  {
    return false;
  }
  return true;
}

bool
interface__msg__Shape__copy(
  const interface__msg__Shape * input,
  interface__msg__Shape * output)
{
  if (!input || !output) {
    return false;
  }
  // path
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->path), &(output->path)))
  {
    return false;
  }
  // shape_id
  output->shape_id = input->shape_id;
  // shape_type
  if (!rosidl_runtime_c__String__copy(
      &(input->shape_type), &(output->shape_type)))
  {
    return false;
  }
  // shape_type_code
  output->shape_type_code = input->shape_type_code;
  // params_to_vary
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->params_to_vary), &(output->params_to_vary)))
  {
    return false;
  }
  // param_values
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->param_values), &(output->param_values)))
  {
    return false;
  }
  return true;
}

interface__msg__Shape *
interface__msg__Shape__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface__msg__Shape * msg = (interface__msg__Shape *)allocator.allocate(sizeof(interface__msg__Shape), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interface__msg__Shape));
  bool success = interface__msg__Shape__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interface__msg__Shape__destroy(interface__msg__Shape * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interface__msg__Shape__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interface__msg__Shape__Sequence__init(interface__msg__Shape__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface__msg__Shape * data = NULL;

  if (size) {
    data = (interface__msg__Shape *)allocator.zero_allocate(size, sizeof(interface__msg__Shape), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interface__msg__Shape__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interface__msg__Shape__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
interface__msg__Shape__Sequence__fini(interface__msg__Shape__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interface__msg__Shape__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

interface__msg__Shape__Sequence *
interface__msg__Shape__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interface__msg__Shape__Sequence * array = (interface__msg__Shape__Sequence *)allocator.allocate(sizeof(interface__msg__Shape__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interface__msg__Shape__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interface__msg__Shape__Sequence__destroy(interface__msg__Shape__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interface__msg__Shape__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interface__msg__Shape__Sequence__are_equal(const interface__msg__Shape__Sequence * lhs, const interface__msg__Shape__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interface__msg__Shape__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interface__msg__Shape__Sequence__copy(
  const interface__msg__Shape__Sequence * input,
  interface__msg__Shape__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interface__msg__Shape);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interface__msg__Shape * data =
      (interface__msg__Shape *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interface__msg__Shape__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interface__msg__Shape__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interface__msg__Shape__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
