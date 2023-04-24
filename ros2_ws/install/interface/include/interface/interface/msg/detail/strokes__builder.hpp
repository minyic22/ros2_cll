// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface:msg/Strokes.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE__MSG__DETAIL__STROKES__BUILDER_HPP_
#define INTERFACE__MSG__DETAIL__STROKES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface/msg/detail/strokes__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface
{

namespace msg
{

namespace builder
{

class Init_Strokes_param_values
{
public:
  explicit Init_Strokes_param_values(::interface::msg::Strokes & msg)
  : msg_(msg)
  {}
  ::interface::msg::Strokes param_values(::interface::msg::Strokes::_param_values_type arg)
  {
    msg_.param_values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface::msg::Strokes msg_;
};

class Init_Strokes_params_to_vary
{
public:
  explicit Init_Strokes_params_to_vary(::interface::msg::Strokes & msg)
  : msg_(msg)
  {}
  Init_Strokes_param_values params_to_vary(::interface::msg::Strokes::_params_to_vary_type arg)
  {
    msg_.params_to_vary = std::move(arg);
    return Init_Strokes_param_values(msg_);
  }

private:
  ::interface::msg::Strokes msg_;
};

class Init_Strokes_shapetype_code
{
public:
  explicit Init_Strokes_shapetype_code(::interface::msg::Strokes & msg)
  : msg_(msg)
  {}
  Init_Strokes_params_to_vary shapetype_code(::interface::msg::Strokes::_shapetype_code_type arg)
  {
    msg_.shapetype_code = std::move(arg);
    return Init_Strokes_params_to_vary(msg_);
  }

private:
  ::interface::msg::Strokes msg_;
};

class Init_Strokes_shape_type
{
public:
  explicit Init_Strokes_shape_type(::interface::msg::Strokes & msg)
  : msg_(msg)
  {}
  Init_Strokes_shapetype_code shape_type(::interface::msg::Strokes::_shape_type_type arg)
  {
    msg_.shape_type = std::move(arg);
    return Init_Strokes_shapetype_code(msg_);
  }

private:
  ::interface::msg::Strokes msg_;
};

class Init_Strokes_shape_id
{
public:
  explicit Init_Strokes_shape_id(::interface::msg::Strokes & msg)
  : msg_(msg)
  {}
  Init_Strokes_shape_type shape_id(::interface::msg::Strokes::_shape_id_type arg)
  {
    msg_.shape_id = std::move(arg);
    return Init_Strokes_shape_type(msg_);
  }

private:
  ::interface::msg::Strokes msg_;
};

class Init_Strokes_strokes
{
public:
  Init_Strokes_strokes()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Strokes_shape_id strokes(::interface::msg::Strokes::_strokes_type arg)
  {
    msg_.strokes = std::move(arg);
    return Init_Strokes_shape_id(msg_);
  }

private:
  ::interface::msg::Strokes msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface::msg::Strokes>()
{
  return interface::msg::builder::Init_Strokes_strokes();
}

}  // namespace interface

#endif  // INTERFACE__MSG__DETAIL__STROKES__BUILDER_HPP_
