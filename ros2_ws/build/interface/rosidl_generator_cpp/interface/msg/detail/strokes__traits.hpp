// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interface:msg/Strokes.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE__MSG__DETAIL__STROKES__TRAITS_HPP_
#define INTERFACE__MSG__DETAIL__STROKES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interface/msg/detail/strokes__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'strokes'
#include "interface/msg/detail/stroke__traits.hpp"

namespace interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Strokes & msg,
  std::ostream & out)
{
  out << "{";
  // member: strokes
  {
    if (msg.strokes.size() == 0) {
      out << "strokes: []";
    } else {
      out << "strokes: [";
      size_t pending_items = msg.strokes.size();
      for (auto item : msg.strokes) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: shape_id
  {
    out << "shape_id: ";
    rosidl_generator_traits::value_to_yaml(msg.shape_id, out);
    out << ", ";
  }

  // member: shape_type
  {
    out << "shape_type: ";
    rosidl_generator_traits::value_to_yaml(msg.shape_type, out);
    out << ", ";
  }

  // member: shapetype_code
  {
    out << "shapetype_code: ";
    rosidl_generator_traits::value_to_yaml(msg.shapetype_code, out);
    out << ", ";
  }

  // member: params_to_vary
  {
    if (msg.params_to_vary.size() == 0) {
      out << "params_to_vary: []";
    } else {
      out << "params_to_vary: [";
      size_t pending_items = msg.params_to_vary.size();
      for (auto item : msg.params_to_vary) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: param_values
  {
    if (msg.param_values.size() == 0) {
      out << "param_values: []";
    } else {
      out << "param_values: [";
      size_t pending_items = msg.param_values.size();
      for (auto item : msg.param_values) {
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
  const Strokes & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: strokes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.strokes.size() == 0) {
      out << "strokes: []\n";
    } else {
      out << "strokes:\n";
      for (auto item : msg.strokes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: shape_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shape_id: ";
    rosidl_generator_traits::value_to_yaml(msg.shape_id, out);
    out << "\n";
  }

  // member: shape_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shape_type: ";
    rosidl_generator_traits::value_to_yaml(msg.shape_type, out);
    out << "\n";
  }

  // member: shapetype_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shapetype_code: ";
    rosidl_generator_traits::value_to_yaml(msg.shapetype_code, out);
    out << "\n";
  }

  // member: params_to_vary
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.params_to_vary.size() == 0) {
      out << "params_to_vary: []\n";
    } else {
      out << "params_to_vary:\n";
      for (auto item : msg.params_to_vary) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: param_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.param_values.size() == 0) {
      out << "param_values: []\n";
    } else {
      out << "param_values:\n";
      for (auto item : msg.param_values) {
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

inline std::string to_yaml(const Strokes & msg, bool use_flow_style = false)
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
  const interface::msg::Strokes & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const interface::msg::Strokes & msg)
{
  return interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interface::msg::Strokes>()
{
  return "interface::msg::Strokes";
}

template<>
inline const char * name<interface::msg::Strokes>()
{
  return "interface/msg/Strokes";
}

template<>
struct has_fixed_size<interface::msg::Strokes>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interface::msg::Strokes>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interface::msg::Strokes>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACE__MSG__DETAIL__STROKES__TRAITS_HPP_
