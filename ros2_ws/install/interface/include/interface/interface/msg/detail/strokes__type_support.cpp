// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from interface:msg/Strokes.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "interface/msg/detail/strokes__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace interface
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Strokes_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) interface::msg::Strokes(_init);
}

void Strokes_fini_function(void * message_memory)
{
  auto typed_message = static_cast<interface::msg::Strokes *>(message_memory);
  typed_message->~Strokes();
}

size_t size_function__Strokes__strokes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<interface::msg::Stroke> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Strokes__strokes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<interface::msg::Stroke> *>(untyped_member);
  return &member[index];
}

void * get_function__Strokes__strokes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<interface::msg::Stroke> *>(untyped_member);
  return &member[index];
}

void fetch_function__Strokes__strokes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const interface::msg::Stroke *>(
    get_const_function__Strokes__strokes(untyped_member, index));
  auto & value = *reinterpret_cast<interface::msg::Stroke *>(untyped_value);
  value = item;
}

void assign_function__Strokes__strokes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<interface::msg::Stroke *>(
    get_function__Strokes__strokes(untyped_member, index));
  const auto & value = *reinterpret_cast<const interface::msg::Stroke *>(untyped_value);
  item = value;
}

void resize_function__Strokes__strokes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<interface::msg::Stroke> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Strokes__params_to_vary(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Strokes__params_to_vary(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__Strokes__params_to_vary(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__Strokes__params_to_vary(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__Strokes__params_to_vary(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__Strokes__params_to_vary(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__Strokes__params_to_vary(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__Strokes__params_to_vary(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Strokes__param_values(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Strokes__param_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Strokes__param_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__Strokes__param_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__Strokes__param_values(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__Strokes__param_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__Strokes__param_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__Strokes__param_values(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Strokes_message_member_array[6] = {
  {
    "strokes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<interface::msg::Stroke>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interface::msg::Strokes, strokes),  // bytes offset in struct
    nullptr,  // default value
    size_function__Strokes__strokes,  // size() function pointer
    get_const_function__Strokes__strokes,  // get_const(index) function pointer
    get_function__Strokes__strokes,  // get(index) function pointer
    fetch_function__Strokes__strokes,  // fetch(index, &value) function pointer
    assign_function__Strokes__strokes,  // assign(index, value) function pointer
    resize_function__Strokes__strokes  // resize(index) function pointer
  },
  {
    "shape_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interface::msg::Strokes, shape_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "shape_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interface::msg::Strokes, shape_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "shapetype_code",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interface::msg::Strokes, shapetype_code),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "params_to_vary",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interface::msg::Strokes, params_to_vary),  // bytes offset in struct
    nullptr,  // default value
    size_function__Strokes__params_to_vary,  // size() function pointer
    get_const_function__Strokes__params_to_vary,  // get_const(index) function pointer
    get_function__Strokes__params_to_vary,  // get(index) function pointer
    fetch_function__Strokes__params_to_vary,  // fetch(index, &value) function pointer
    assign_function__Strokes__params_to_vary,  // assign(index, value) function pointer
    resize_function__Strokes__params_to_vary  // resize(index) function pointer
  },
  {
    "param_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interface::msg::Strokes, param_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Strokes__param_values,  // size() function pointer
    get_const_function__Strokes__param_values,  // get_const(index) function pointer
    get_function__Strokes__param_values,  // get(index) function pointer
    fetch_function__Strokes__param_values,  // fetch(index, &value) function pointer
    assign_function__Strokes__param_values,  // assign(index, value) function pointer
    resize_function__Strokes__param_values  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Strokes_message_members = {
  "interface::msg",  // message namespace
  "Strokes",  // message name
  6,  // number of fields
  sizeof(interface::msg::Strokes),
  Strokes_message_member_array,  // message members
  Strokes_init_function,  // function to initialize message memory (memory has to be allocated)
  Strokes_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Strokes_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Strokes_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interface::msg::Strokes>()
{
  return &::interface::msg::rosidl_typesupport_introspection_cpp::Strokes_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interface, msg, Strokes)() {
  return &::interface::msg::rosidl_typesupport_introspection_cpp::Strokes_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
