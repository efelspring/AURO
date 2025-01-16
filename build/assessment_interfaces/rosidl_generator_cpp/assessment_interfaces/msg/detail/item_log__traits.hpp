// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from assessment_interfaces:msg/ItemLog.idl
// generated code does not contain a copyright notice

#ifndef ASSESSMENT_INTERFACES__MSG__DETAIL__ITEM_LOG__TRAITS_HPP_
#define ASSESSMENT_INTERFACES__MSG__DETAIL__ITEM_LOG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "assessment_interfaces/msg/detail/item_log__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace assessment_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ItemLog & msg,
  std::ostream & out)
{
  out << "{";
  // member: red_count
  {
    out << "red_count: ";
    rosidl_generator_traits::value_to_yaml(msg.red_count, out);
    out << ", ";
  }

  // member: green_count
  {
    out << "green_count: ";
    rosidl_generator_traits::value_to_yaml(msg.green_count, out);
    out << ", ";
  }

  // member: blue_count
  {
    out << "blue_count: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_count, out);
    out << ", ";
  }

  // member: total_count
  {
    out << "total_count: ";
    rosidl_generator_traits::value_to_yaml(msg.total_count, out);
    out << ", ";
  }

  // member: red_value
  {
    out << "red_value: ";
    rosidl_generator_traits::value_to_yaml(msg.red_value, out);
    out << ", ";
  }

  // member: green_value
  {
    out << "green_value: ";
    rosidl_generator_traits::value_to_yaml(msg.green_value, out);
    out << ", ";
  }

  // member: blue_value
  {
    out << "blue_value: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_value, out);
    out << ", ";
  }

  // member: total_value
  {
    out << "total_value: ";
    rosidl_generator_traits::value_to_yaml(msg.total_value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ItemLog & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: red_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red_count: ";
    rosidl_generator_traits::value_to_yaml(msg.red_count, out);
    out << "\n";
  }

  // member: green_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "green_count: ";
    rosidl_generator_traits::value_to_yaml(msg.green_count, out);
    out << "\n";
  }

  // member: blue_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue_count: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_count, out);
    out << "\n";
  }

  // member: total_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_count: ";
    rosidl_generator_traits::value_to_yaml(msg.total_count, out);
    out << "\n";
  }

  // member: red_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red_value: ";
    rosidl_generator_traits::value_to_yaml(msg.red_value, out);
    out << "\n";
  }

  // member: green_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "green_value: ";
    rosidl_generator_traits::value_to_yaml(msg.green_value, out);
    out << "\n";
  }

  // member: blue_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue_value: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_value, out);
    out << "\n";
  }

  // member: total_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_value: ";
    rosidl_generator_traits::value_to_yaml(msg.total_value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ItemLog & msg, bool use_flow_style = false)
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

}  // namespace assessment_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use assessment_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const assessment_interfaces::msg::ItemLog & msg,
  std::ostream & out, size_t indentation = 0)
{
  assessment_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use assessment_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const assessment_interfaces::msg::ItemLog & msg)
{
  return assessment_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<assessment_interfaces::msg::ItemLog>()
{
  return "assessment_interfaces::msg::ItemLog";
}

template<>
inline const char * name<assessment_interfaces::msg::ItemLog>()
{
  return "assessment_interfaces/msg/ItemLog";
}

template<>
struct has_fixed_size<assessment_interfaces::msg::ItemLog>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<assessment_interfaces::msg::ItemLog>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<assessment_interfaces::msg::ItemLog>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ASSESSMENT_INTERFACES__MSG__DETAIL__ITEM_LOG__TRAITS_HPP_
