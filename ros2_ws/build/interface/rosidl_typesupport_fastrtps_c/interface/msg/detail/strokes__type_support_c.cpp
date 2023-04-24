// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from interface:msg/Strokes.idl
// generated code does not contain a copyright notice
#include "interface/msg/detail/strokes__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interface/msg/detail/strokes__struct.h"
#include "interface/msg/detail/strokes__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "interface/msg/detail/stroke__functions.h"  // strokes
#include "rosidl_runtime_c/primitives_sequence.h"  // param_values, params_to_vary
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // param_values, params_to_vary
#include "rosidl_runtime_c/string.h"  // shape_type
#include "rosidl_runtime_c/string_functions.h"  // shape_type

// forward declare type support functions
size_t get_serialized_size_interface__msg__Stroke(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_interface__msg__Stroke(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interface, msg, Stroke)();


using _Strokes__ros_msg_type = interface__msg__Strokes;

static bool _Strokes__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Strokes__ros_msg_type * ros_message = static_cast<const _Strokes__ros_msg_type *>(untyped_ros_message);
  // Field name: strokes
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, interface, msg, Stroke
      )()->data);
    size_t size = ros_message->strokes.size;
    auto array_ptr = ros_message->strokes.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: shape_id
  {
    cdr << ros_message->shape_id;
  }

  // Field name: shape_type
  {
    const rosidl_runtime_c__String * str = &ros_message->shape_type;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: shapetype_code
  {
    cdr << ros_message->shapetype_code;
  }

  // Field name: params_to_vary
  {
    size_t size = ros_message->params_to_vary.size;
    auto array_ptr = ros_message->params_to_vary.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: param_values
  {
    size_t size = ros_message->param_values.size;
    auto array_ptr = ros_message->param_values.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _Strokes__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Strokes__ros_msg_type * ros_message = static_cast<_Strokes__ros_msg_type *>(untyped_ros_message);
  // Field name: strokes
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, interface, msg, Stroke
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->strokes.data) {
      interface__msg__Stroke__Sequence__fini(&ros_message->strokes);
    }
    if (!interface__msg__Stroke__Sequence__init(&ros_message->strokes, size)) {
      fprintf(stderr, "failed to create array for field 'strokes'");
      return false;
    }
    auto array_ptr = ros_message->strokes.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: shape_id
  {
    cdr >> ros_message->shape_id;
  }

  // Field name: shape_type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->shape_type.data) {
      rosidl_runtime_c__String__init(&ros_message->shape_type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->shape_type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'shape_type'\n");
      return false;
    }
  }

  // Field name: shapetype_code
  {
    cdr >> ros_message->shapetype_code;
  }

  // Field name: params_to_vary
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->params_to_vary.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->params_to_vary);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->params_to_vary, size)) {
      fprintf(stderr, "failed to create array for field 'params_to_vary'");
      return false;
    }
    auto array_ptr = ros_message->params_to_vary.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: param_values
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->param_values.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->param_values);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->param_values, size)) {
      fprintf(stderr, "failed to create array for field 'param_values'");
      return false;
    }
    auto array_ptr = ros_message->param_values.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interface
size_t get_serialized_size_interface__msg__Strokes(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Strokes__ros_msg_type * ros_message = static_cast<const _Strokes__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name strokes
  {
    size_t array_size = ros_message->strokes.size;
    auto array_ptr = ros_message->strokes.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_interface__msg__Stroke(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name shape_id
  {
    size_t item_size = sizeof(ros_message->shape_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name shape_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->shape_type.size + 1);
  // field.name shapetype_code
  {
    size_t item_size = sizeof(ros_message->shapetype_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name params_to_vary
  {
    size_t array_size = ros_message->params_to_vary.size;
    auto array_ptr = ros_message->params_to_vary.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name param_values
  {
    size_t array_size = ros_message->param_values.size;
    auto array_ptr = ros_message->param_values.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Strokes__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interface__msg__Strokes(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interface
size_t max_serialized_size_interface__msg__Strokes(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: strokes
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_interface__msg__Stroke(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: shape_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: shape_type
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: shapetype_code
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: params_to_vary
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: param_values
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Strokes__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_interface__msg__Strokes(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Strokes = {
  "interface::msg",
  "Strokes",
  _Strokes__cdr_serialize,
  _Strokes__cdr_deserialize,
  _Strokes__get_serialized_size,
  _Strokes__max_serialized_size
};

static rosidl_message_type_support_t _Strokes__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Strokes,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interface, msg, Strokes)() {
  return &_Strokes__type_support;
}

#if defined(__cplusplus)
}
#endif
