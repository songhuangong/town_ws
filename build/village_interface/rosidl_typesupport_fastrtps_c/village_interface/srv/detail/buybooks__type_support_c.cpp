// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from village_interface:srv/Buybooks.idl
// generated code does not contain a copyright notice
#include "village_interface/srv/detail/buybooks__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "village_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "village_interface/srv/detail/buybooks__struct.h"
#include "village_interface/srv/detail/buybooks__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Buybooks_Request__ros_msg_type = village_interface__srv__Buybooks_Request;

static bool _Buybooks_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Buybooks_Request__ros_msg_type * ros_message = static_cast<const _Buybooks_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: money
  {
    cdr << ros_message->money;
  }

  return true;
}

static bool _Buybooks_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Buybooks_Request__ros_msg_type * ros_message = static_cast<_Buybooks_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: money
  {
    cdr >> ros_message->money;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_village_interface
size_t get_serialized_size_village_interface__srv__Buybooks_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Buybooks_Request__ros_msg_type * ros_message = static_cast<const _Buybooks_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name money
  {
    size_t item_size = sizeof(ros_message->money);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Buybooks_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_village_interface__srv__Buybooks_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_village_interface
size_t max_serialized_size_village_interface__srv__Buybooks_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: money
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Buybooks_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_village_interface__srv__Buybooks_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Buybooks_Request = {
  "village_interface::srv",
  "Buybooks_Request",
  _Buybooks_Request__cdr_serialize,
  _Buybooks_Request__cdr_deserialize,
  _Buybooks_Request__get_serialized_size,
  _Buybooks_Request__max_serialized_size
};

static rosidl_message_type_support_t _Buybooks_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Buybooks_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, village_interface, srv, Buybooks_Request)() {
  return &_Buybooks_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "village_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "village_interface/srv/detail/buybooks__struct.h"
// already included above
// #include "village_interface/srv/detail/buybooks__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // books
#include "rosidl_runtime_c/string_functions.h"  // books

// forward declare type support functions


using _Buybooks_Response__ros_msg_type = village_interface__srv__Buybooks_Response;

static bool _Buybooks_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Buybooks_Response__ros_msg_type * ros_message = static_cast<const _Buybooks_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: books
  {
    size_t size = ros_message->books.size;
    auto array_ptr = ros_message->books.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  return true;
}

static bool _Buybooks_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Buybooks_Response__ros_msg_type * ros_message = static_cast<_Buybooks_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: books
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->books.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->books);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->books, size)) {
      return "failed to create array for field 'books'";
    }
    auto array_ptr = ros_message->books.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'books'\n");
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_village_interface
size_t get_serialized_size_village_interface__srv__Buybooks_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Buybooks_Response__ros_msg_type * ros_message = static_cast<const _Buybooks_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name books
  {
    size_t array_size = ros_message->books.size;
    auto array_ptr = ros_message->books.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Buybooks_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_village_interface__srv__Buybooks_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_village_interface
size_t max_serialized_size_village_interface__srv__Buybooks_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: books
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Buybooks_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_village_interface__srv__Buybooks_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Buybooks_Response = {
  "village_interface::srv",
  "Buybooks_Response",
  _Buybooks_Response__cdr_serialize,
  _Buybooks_Response__cdr_deserialize,
  _Buybooks_Response__get_serialized_size,
  _Buybooks_Response__max_serialized_size
};

static rosidl_message_type_support_t _Buybooks_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Buybooks_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, village_interface, srv, Buybooks_Response)() {
  return &_Buybooks_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "village_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "village_interface/srv/buybooks.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Buybooks__callbacks = {
  "village_interface::srv",
  "Buybooks",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, village_interface, srv, Buybooks_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, village_interface, srv, Buybooks_Response)(),
};

static rosidl_service_type_support_t Buybooks__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Buybooks__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, village_interface, srv, Buybooks)() {
  return &Buybooks__handle;
}

#if defined(__cplusplus)
}
#endif
