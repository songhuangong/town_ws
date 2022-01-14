// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from village_interface:srv/Money.idl
// generated code does not contain a copyright notice

#ifndef VILLAGE_INTERFACE__SRV__DETAIL__MONEY__STRUCT_H_
#define VILLAGE_INTERFACE__SRV__DETAIL__MONEY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/Money in the package village_interface.
typedef struct village_interface__srv__Money_Request
{
  rosidl_runtime_c__String name;
  uint32_t money;
} village_interface__srv__Money_Request;

// Struct for a sequence of village_interface__srv__Money_Request.
typedef struct village_interface__srv__Money_Request__Sequence
{
  village_interface__srv__Money_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} village_interface__srv__Money_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/Money in the package village_interface.
typedef struct village_interface__srv__Money_Response
{
  bool success;
  uint32_t money;
} village_interface__srv__Money_Response;

// Struct for a sequence of village_interface__srv__Money_Response.
typedef struct village_interface__srv__Money_Response__Sequence
{
  village_interface__srv__Money_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} village_interface__srv__Money_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VILLAGE_INTERFACE__SRV__DETAIL__MONEY__STRUCT_H_
