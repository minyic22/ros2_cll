// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from interface:msg/Strokes.idl
// generated code does not contain a copyright notice
#include "interface/msg/detail/strokes__rosidl_typesupport_fastrtps_cpp.hpp"
#include "interface/msg/detail/strokes__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace interface
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const interface::msg::Stroke &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  interface::msg::Stroke &);
size_t get_serialized_size(
  const interface::msg::Stroke &,
  size_t current_alignment);
size_t
max_serialized_size_Stroke(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace interface


namespace interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interface
cdr_serialize(
  const interface::msg::Strokes & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: strokes
  {
    size_t size = ros_message.strokes.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      interface::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.strokes[i],
        cdr);
    }
  }
  // Member: shape_id
  cdr << ros_message.shape_id;
  // Member: shape_type
  cdr << ros_message.shape_type;
  // Member: shapetype_code
  cdr << ros_message.shapetype_code;
  // Member: params_to_vary
  {
    cdr << ros_message.params_to_vary;
  }
  // Member: param_values
  {
    cdr << ros_message.param_values;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  interface::msg::Strokes & ros_message)
{
  // Member: strokes
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.strokes.resize(size);
    for (size_t i = 0; i < size; i++) {
      interface::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.strokes[i]);
    }
  }

  // Member: shape_id
  cdr >> ros_message.shape_id;

  // Member: shape_type
  cdr >> ros_message.shape_type;

  // Member: shapetype_code
  cdr >> ros_message.shapetype_code;

  // Member: params_to_vary
  {
    cdr >> ros_message.params_to_vary;
  }

  // Member: param_values
  {
    cdr >> ros_message.param_values;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interface
get_serialized_size(
  const interface::msg::Strokes & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: strokes
  {
    size_t array_size = ros_message.strokes.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        interface::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.strokes[index], current_alignment);
    }
  }
  // Member: shape_id
  {
    size_t item_size = sizeof(ros_message.shape_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: shape_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.shape_type.size() + 1);
  // Member: shapetype_code
  {
    size_t item_size = sizeof(ros_message.shapetype_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: params_to_vary
  {
    size_t array_size = ros_message.params_to_vary.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.params_to_vary[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: param_values
  {
    size_t array_size = ros_message.param_values.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.param_values[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interface
max_serialized_size_Strokes(
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


  // Member: strokes
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
        interface::msg::typesupport_fastrtps_cpp::max_serialized_size_Stroke(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: shape_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: shape_type
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

  // Member: shapetype_code
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: params_to_vary
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: param_values
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

static bool _Strokes__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const interface::msg::Strokes *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Strokes__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<interface::msg::Strokes *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Strokes__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const interface::msg::Strokes *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Strokes__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Strokes(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Strokes__callbacks = {
  "interface::msg",
  "Strokes",
  _Strokes__cdr_serialize,
  _Strokes__cdr_deserialize,
  _Strokes__get_serialized_size,
  _Strokes__max_serialized_size
};

static rosidl_message_type_support_t _Strokes__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Strokes__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<interface::msg::Strokes>()
{
  return &interface::msg::typesupport_fastrtps_cpp::_Strokes__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interface, msg, Strokes)() {
  return &interface::msg::typesupport_fastrtps_cpp::_Strokes__handle;
}

#ifdef __cplusplus
}
#endif
