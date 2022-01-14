// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from village_interface:srv/Money.idl
// generated code does not contain a copyright notice

#ifndef VILLAGE_INTERFACE__SRV__DETAIL__MONEY__TRAITS_HPP_
#define VILLAGE_INTERFACE__SRV__DETAIL__MONEY__TRAITS_HPP_

#include "village_interface/srv/detail/money__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<village_interface::srv::Money_Request>()
{
  return "village_interface::srv::Money_Request";
}

template<>
inline const char * name<village_interface::srv::Money_Request>()
{
  return "village_interface/srv/Money_Request";
}

template<>
struct has_fixed_size<village_interface::srv::Money_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<village_interface::srv::Money_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<village_interface::srv::Money_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<village_interface::srv::Money_Response>()
{
  return "village_interface::srv::Money_Response";
}

template<>
inline const char * name<village_interface::srv::Money_Response>()
{
  return "village_interface/srv/Money_Response";
}

template<>
struct has_fixed_size<village_interface::srv::Money_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<village_interface::srv::Money_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<village_interface::srv::Money_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<village_interface::srv::Money>()
{
  return "village_interface::srv::Money";
}

template<>
inline const char * name<village_interface::srv::Money>()
{
  return "village_interface/srv/Money";
}

template<>
struct has_fixed_size<village_interface::srv::Money>
  : std::integral_constant<
    bool,
    has_fixed_size<village_interface::srv::Money_Request>::value &&
    has_fixed_size<village_interface::srv::Money_Response>::value
  >
{
};

template<>
struct has_bounded_size<village_interface::srv::Money>
  : std::integral_constant<
    bool,
    has_bounded_size<village_interface::srv::Money_Request>::value &&
    has_bounded_size<village_interface::srv::Money_Response>::value
  >
{
};

template<>
struct is_service<village_interface::srv::Money>
  : std::true_type
{
};

template<>
struct is_service_request<village_interface::srv::Money_Request>
  : std::true_type
{
};

template<>
struct is_service_response<village_interface::srv::Money_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // VILLAGE_INTERFACE__SRV__DETAIL__MONEY__TRAITS_HPP_
