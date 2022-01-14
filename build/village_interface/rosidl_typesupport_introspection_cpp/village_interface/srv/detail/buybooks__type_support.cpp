// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from village_interface:srv/Buybooks.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "village_interface/srv/detail/buybooks__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace village_interface
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void Buybooks_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) village_interface::srv::Buybooks_Request(_init);
}

void Buybooks_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<village_interface::srv::Buybooks_Request *>(message_memory);
  typed_message->~Buybooks_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Buybooks_Request_message_member_array[1] = {
  {
    "money",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(village_interface::srv::Buybooks_Request, money),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Buybooks_Request_message_members = {
  "village_interface::srv",  // message namespace
  "Buybooks_Request",  // message name
  1,  // number of fields
  sizeof(village_interface::srv::Buybooks_Request),
  Buybooks_Request_message_member_array,  // message members
  Buybooks_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Buybooks_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Buybooks_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Buybooks_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace village_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<village_interface::srv::Buybooks_Request>()
{
  return &::village_interface::srv::rosidl_typesupport_introspection_cpp::Buybooks_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, village_interface, srv, Buybooks_Request)() {
  return &::village_interface::srv::rosidl_typesupport_introspection_cpp::Buybooks_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "village_interface/srv/detail/buybooks__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace village_interface
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void Buybooks_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) village_interface::srv::Buybooks_Response(_init);
}

void Buybooks_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<village_interface::srv::Buybooks_Response *>(message_memory);
  typed_message->~Buybooks_Response();
}

size_t size_function__Buybooks_Response__books(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Buybooks_Response__books(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__Buybooks_Response__books(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__Buybooks_Response__books(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Buybooks_Response_message_member_array[1] = {
  {
    "books",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(village_interface::srv::Buybooks_Response, books),  // bytes offset in struct
    nullptr,  // default value
    size_function__Buybooks_Response__books,  // size() function pointer
    get_const_function__Buybooks_Response__books,  // get_const(index) function pointer
    get_function__Buybooks_Response__books,  // get(index) function pointer
    resize_function__Buybooks_Response__books  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Buybooks_Response_message_members = {
  "village_interface::srv",  // message namespace
  "Buybooks_Response",  // message name
  1,  // number of fields
  sizeof(village_interface::srv::Buybooks_Response),
  Buybooks_Response_message_member_array,  // message members
  Buybooks_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Buybooks_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Buybooks_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Buybooks_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace village_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<village_interface::srv::Buybooks_Response>()
{
  return &::village_interface::srv::rosidl_typesupport_introspection_cpp::Buybooks_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, village_interface, srv, Buybooks_Response)() {
  return &::village_interface::srv::rosidl_typesupport_introspection_cpp::Buybooks_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "village_interface/srv/detail/buybooks__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace village_interface
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers Buybooks_service_members = {
  "village_interface::srv",  // service namespace
  "Buybooks",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<village_interface::srv::Buybooks>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t Buybooks_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Buybooks_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace village_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<village_interface::srv::Buybooks>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::village_interface::srv::rosidl_typesupport_introspection_cpp::Buybooks_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::village_interface::srv::Buybooks_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::village_interface::srv::Buybooks_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, village_interface, srv, Buybooks)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<village_interface::srv::Buybooks>();
}

#ifdef __cplusplus
}
#endif
