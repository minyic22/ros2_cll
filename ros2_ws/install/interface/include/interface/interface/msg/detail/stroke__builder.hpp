// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interface:msg/Stroke.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE__MSG__DETAIL__STROKE__BUILDER_HPP_
#define INTERFACE__MSG__DETAIL__STROKE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interface/msg/detail/stroke__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interface
{

namespace msg
{

namespace builder
{

class Init_Stroke_stroke
{
public:
  Init_Stroke_stroke()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interface::msg::Stroke stroke(::interface::msg::Stroke::_stroke_type arg)
  {
    msg_.stroke = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interface::msg::Stroke msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interface::msg::Stroke>()
{
  return interface::msg::builder::Init_Stroke_stroke();
}

}  // namespace interface

#endif  // INTERFACE__MSG__DETAIL__STROKE__BUILDER_HPP_
