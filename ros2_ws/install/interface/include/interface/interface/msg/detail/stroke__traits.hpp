// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interface:msg/Stroke.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE__MSG__DETAIL__STROKE__TRAITS_HPP_
#define INTERFACE__MSG__DETAIL__STROKE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interface/msg/detail/stroke__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Stroke & msg,
  std::ostream & out)
{
  out << "{";
  // member: stroke
  {
    if (msg.stroke.size() == 0) {
      out << "stroke: []";
    } else {
      out << "stroke: [";
      size_t pending_items = msg.stroke.size();
      for (auto item : msg.stroke) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Stroke & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stroke
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.stroke.size() == 0) {
      out << "stroke: []\n";
    } else {
      out << "stroke:\n";
      for (auto item : msg.stroke) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Stroke & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace interface

namespace rosidl_generator_traits
{

[[deprecated("use interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interface::msg::Stroke & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const interface::msg::Stroke & msg)
{
  return interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interface::msg::Stroke>()
{
  return "interface::msg::Stroke";
}

template<>
inline const char * name<interface::msg::Stroke>()
{
  return "interface/msg/Stroke";
}

template<>
struct has_fixed_size<interface::msg::Stroke>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interface::msg::Stroke>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interface::msg::Stroke>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACE__MSG__DETAIL__STROKE__TRAITS_HPP_
