// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interface:msg/Shape.idl
// generated code does not contain a copyright notice

#ifndef INTERFACE__MSG__DETAIL__SHAPE__STRUCT_HPP_
#define INTERFACE__MSG__DETAIL__SHAPE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interface__msg__Shape __attribute__((deprecated))
#else
# define DEPRECATED__interface__msg__Shape __declspec(deprecated)
#endif

namespace interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Shape_
{
  using Type = Shape_<ContainerAllocator>;

  explicit Shape_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->shape_id = 0ul;
      this->shape_type = "";
      this->shape_type_code = 0ul;
    }
  }

  explicit Shape_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : shape_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->shape_id = 0ul;
      this->shape_type = "";
      this->shape_type_code = 0ul;
    }
  }

  // field types and members
  using _path_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _path_type path;
  using _shape_id_type =
    uint32_t;
  _shape_id_type shape_id;
  using _shape_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _shape_type_type shape_type;
  using _shape_type_code_type =
    uint32_t;
  _shape_type_code_type shape_type_code;
  using _params_to_vary_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _params_to_vary_type params_to_vary;
  using _param_values_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _param_values_type param_values;

  // setters for named parameter idiom
  Type & set__path(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->path = _arg;
    return *this;
  }
  Type & set__shape_id(
    const uint32_t & _arg)
  {
    this->shape_id = _arg;
    return *this;
  }
  Type & set__shape_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->shape_type = _arg;
    return *this;
  }
  Type & set__shape_type_code(
    const uint32_t & _arg)
  {
    this->shape_type_code = _arg;
    return *this;
  }
  Type & set__params_to_vary(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->params_to_vary = _arg;
    return *this;
  }
  Type & set__param_values(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->param_values = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interface::msg::Shape_<ContainerAllocator> *;
  using ConstRawPtr =
    const interface::msg::Shape_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interface::msg::Shape_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interface::msg::Shape_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interface::msg::Shape_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interface::msg::Shape_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interface::msg::Shape_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interface::msg::Shape_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interface::msg::Shape_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interface::msg::Shape_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interface__msg__Shape
    std::shared_ptr<interface::msg::Shape_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interface__msg__Shape
    std::shared_ptr<interface::msg::Shape_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Shape_ & other) const
  {
    if (this->path != other.path) {
      return false;
    }
    if (this->shape_id != other.shape_id) {
      return false;
    }
    if (this->shape_type != other.shape_type) {
      return false;
    }
    if (this->shape_type_code != other.shape_type_code) {
      return false;
    }
    if (this->params_to_vary != other.params_to_vary) {
      return false;
    }
    if (this->param_values != other.param_values) {
      return false;
    }
    return true;
  }
  bool operator!=(const Shape_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Shape_

// alias to use template instance with default allocator
using Shape =
  interface::msg::Shape_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interface

#endif  // INTERFACE__MSG__DETAIL__SHAPE__STRUCT_HPP_
