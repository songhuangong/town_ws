// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from village_interface:srv/Money.idl
// generated code does not contain a copyright notice

#ifndef VILLAGE_INTERFACE__SRV__DETAIL__MONEY__FUNCTIONS_H_
#define VILLAGE_INTERFACE__SRV__DETAIL__MONEY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "village_interface/msg/rosidl_generator_c__visibility_control.h"

#include "village_interface/srv/detail/money__struct.h"

/// Initialize srv/Money message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * village_interface__srv__Money_Request
 * )) before or use
 * village_interface__srv__Money_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_village_interface
bool
village_interface__srv__Money_Request__init(village_interface__srv__Money_Request * msg);

/// Finalize srv/Money message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_village_interface
void
village_interface__srv__Money_Request__fini(village_interface__srv__Money_Request * msg);

/// Create srv/Money message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * village_interface__srv__Money_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_village_interface
village_interface__srv__Money_Request *
village_interface__srv__Money_Request__create();

/// Destroy srv/Money message.
/**
 * It calls
 * village_interface__srv__Money_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_village_interface
void
village_interface__srv__Money_Request__destroy(village_interface__srv__Money_Request * msg);


/// Initialize array of srv/Money messages.
/**
 * It allocates the memory for the number of elements and calls
 * village_interface__srv__Money_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_village_interface
bool
village_interface__srv__Money_Request__Sequence__init(village_interface__srv__Money_Request__Sequence * array, size_t size);

/// Finalize array of srv/Money messages.
/**
 * It calls
 * village_interface__srv__Money_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_village_interface
void
village_interface__srv__Money_Request__Sequence__fini(village_interface__srv__Money_Request__Sequence * array);

/// Create array of srv/Money messages.
/**
 * It allocates the memory for the array and calls
 * village_interface__srv__Money_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_village_interface
village_interface__srv__Money_Request__Sequence *
village_interface__srv__Money_Request__Sequence__create(size_t size);

/// Destroy array of srv/Money messages.
/**
 * It calls
 * village_interface__srv__Money_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_village_interface
void
village_interface__srv__Money_Request__Sequence__destroy(village_interface__srv__Money_Request__Sequence * array);

/// Initialize srv/Money message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * village_interface__srv__Money_Response
 * )) before or use
 * village_interface__srv__Money_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_village_interface
bool
village_interface__srv__Money_Response__init(village_interface__srv__Money_Response * msg);

/// Finalize srv/Money message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_village_interface
void
village_interface__srv__Money_Response__fini(village_interface__srv__Money_Response * msg);

/// Create srv/Money message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * village_interface__srv__Money_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_village_interface
village_interface__srv__Money_Response *
village_interface__srv__Money_Response__create();

/// Destroy srv/Money message.
/**
 * It calls
 * village_interface__srv__Money_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_village_interface
void
village_interface__srv__Money_Response__destroy(village_interface__srv__Money_Response * msg);


/// Initialize array of srv/Money messages.
/**
 * It allocates the memory for the number of elements and calls
 * village_interface__srv__Money_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_village_interface
bool
village_interface__srv__Money_Response__Sequence__init(village_interface__srv__Money_Response__Sequence * array, size_t size);

/// Finalize array of srv/Money messages.
/**
 * It calls
 * village_interface__srv__Money_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_village_interface
void
village_interface__srv__Money_Response__Sequence__fini(village_interface__srv__Money_Response__Sequence * array);

/// Create array of srv/Money messages.
/**
 * It allocates the memory for the array and calls
 * village_interface__srv__Money_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_village_interface
village_interface__srv__Money_Response__Sequence *
village_interface__srv__Money_Response__Sequence__create(size_t size);

/// Destroy array of srv/Money messages.
/**
 * It calls
 * village_interface__srv__Money_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_village_interface
void
village_interface__srv__Money_Response__Sequence__destroy(village_interface__srv__Money_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // VILLAGE_INTERFACE__SRV__DETAIL__MONEY__FUNCTIONS_H_
