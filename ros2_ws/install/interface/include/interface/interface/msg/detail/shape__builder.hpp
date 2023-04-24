// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface:msg/Shape.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE__MSG__DETAIL__SHAPE__BUILDER_HPP_
#define INTERFACE__MSG__DETAIL__SHAPE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface/msg/detail/shape__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface
{

namespace msg
{

namespace builder
{

class Init_Shape_param_values
{
public:
  explicit Init_Shape_param_values(::interface::msg::Shape & msg)
  : msg_(msg)
  {}
  ::interface::msg::Shape param_values(::interface::msg::Shape::_param_values_type arg)
  {
    msg_.param_values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface::msg::Shape msg_;
};

class Init_Shape_params_to_vary
{
public:
  explicit Init_Shape_params_to_vary(::interface::msg::Shape & msg)
  : msg_(msg)
  {}
  Init_Shape_param_values params_to_vary(::interface::msg::Shape::_params_to_vary_type arg)
  {
    msg_.params_to_vary = std::move(arg);
    return Init_Shape_param_values(msg_);
  }

private:
  ::interface::msg::Shape msg_;
};

class Init_Shape_shape_type_code
{
public:
  explicit Init_Shape_shape_type_code(::interface::msg::Shape & msg)
  : msg_(msg)
  {}
  Init_Shape_params_to_vary shape_type_code(::interface::msg::Shape::_shape_type_code_type arg)
  {
    msg_.shape_type_code = std::move(arg);
    return Init_Shape_params_to_vary(msg_);
  }

private:
  ::interface::msg::Shape msg_;
};

class Init_Shape_shape_type
{
public:
  explicit Init_Shape_shape_type(::interface::msg::Shape & msg)
  : msg_(msg)
  {}
  Init_Shape_shape_type_code shape_type(::interface::msg::Shape::_shape_type_type arg)
  {
    msg_.shape_type = std::move(arg);
    return Init_Shape_shape_type_code(msg_);
  }

private:
  ::interface::msg::Shape msg_;
};

class Init_Shape_shape_id
{
public:
  explicit Init_Shape_shape_id(::interface::msg::Shape & msg)
  : msg_(msg)
  {}
  Init_Shape_shape_type shape_id(::interface::msg::Shape::_shape_id_type arg)
  {
    msg_.shape_id = std::move(arg);
    return Init_Shape_shape_type(msg_);
  }

private:
  ::interface::msg::Shape msg_;
};

class Init_Shape_path
{
public:
  Init_Shape_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Shape_shape_id path(::interface::msg::Shape::_path_type arg)
  {
    msg_.path = std::move(arg);
    return Init_Shape_shape_id(msg_);
  }

private:
  ::interface::msg::Shape msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface::msg::Shape>()
{
  return interface::msg::builder::Init_Shape_path();
}

}  // namespace interface

#endif  // INTERFACE__MSG__DETAIL__SHAPE__BUILDER_HPP_
