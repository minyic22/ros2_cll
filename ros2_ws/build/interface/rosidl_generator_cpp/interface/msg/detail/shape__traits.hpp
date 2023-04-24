// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interface:msg/Shape.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE__MSG__DETAIL__SHAPE__TRAITS_HPP_
#define INTERFACE__MSG__DETAIL__SHAPE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interface/msg/detail/shape__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Shape & msg,
  std::ostream & out)
{
  out << "{";
  // member: path
  {
    if (msg.path.size() == 0) {
      out << "path: []";
    } else {
      out << "path: [";
      size_t pending_items = msg.path.size();
      for (auto item : msg.path) {
        rosidl_generator_traits::value_to_yaml(item, out);
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

  // member: shape_type_code
  {
    out << "shape_type_code: ";
    rosidl_generator_traits::value_to_yaml(msg.shape_type_code, out);
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
  const Shape & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.path.size() == 0) {
      out << "path: []\n";
    } else {
      out << "path:\n";
      for (auto item : msg.path) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
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

  // member: shape_type_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shape_type_code: ";
    rosidl_generator_traits::value_to_yaml(msg.shape_type_code, out);
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

inline std::string to_yaml(const Shape & msg, bool use_flow_style = false)
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
  const interface::msg::Shape & msg,
  std::ostream & out, size_t indentation = 0)
{
  interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const interface::msg::Shape & msg)
{
  return interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interface::msg::Shape>()
{
  return "interface::msg::Shape";
}

template<>
inline const char * name<interface::msg::Shape>()
{
  return "interface/msg/Shape";
}

template<>
struct has_fixed_size<interface::msg::Shape>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interface::msg::Shape>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interface::msg::Shape>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACE__MSG__DETAIL__SHAPE__TRAITS_HPP_
