// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from village_interface:srv/Buybooks.idl
// generated code does not contain a copyright notice
#include "village_interface/srv/detail/buybooks__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
village_interface__srv__Buybooks_Request__init(village_interface__srv__Buybooks_Request * msg)
{
  if (!msg) {
    return false;
  }
  // money
  return true;
}

void
village_interface__srv__Buybooks_Request__fini(village_interface__srv__Buybooks_Request * msg)
{
  if (!msg) {
    return;
  }
  // money
}

village_interface__srv__Buybooks_Request *
village_interface__srv__Buybooks_Request__create()
{
  village_interface__srv__Buybooks_Request * msg = (village_interface__srv__Buybooks_Request *)malloc(sizeof(village_interface__srv__Buybooks_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(village_interface__srv__Buybooks_Request));
  bool success = village_interface__srv__Buybooks_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
village_interface__srv__Buybooks_Request__destroy(village_interface__srv__Buybooks_Request * msg)
{
  if (msg) {
    village_interface__srv__Buybooks_Request__fini(msg);
  }
  free(msg);
}


bool
village_interface__srv__Buybooks_Request__Sequence__init(village_interface__srv__Buybooks_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  village_interface__srv__Buybooks_Request * data = NULL;
  if (size) {
    data = (village_interface__srv__Buybooks_Request *)calloc(size, sizeof(village_interface__srv__Buybooks_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = village_interface__srv__Buybooks_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        village_interface__srv__Buybooks_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
village_interface__srv__Buybooks_Request__Sequence__fini(village_interface__srv__Buybooks_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      village_interface__srv__Buybooks_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

village_interface__srv__Buybooks_Request__Sequence *
village_interface__srv__Buybooks_Request__Sequence__create(size_t size)
{
  village_interface__srv__Buybooks_Request__Sequence * array = (village_interface__srv__Buybooks_Request__Sequence *)malloc(sizeof(village_interface__srv__Buybooks_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = village_interface__srv__Buybooks_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
village_interface__srv__Buybooks_Request__Sequence__destroy(village_interface__srv__Buybooks_Request__Sequence * array)
{
  if (array) {
    village_interface__srv__Buybooks_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `books`
#include "rosidl_runtime_c/string_functions.h"

bool
village_interface__srv__Buybooks_Response__init(village_interface__srv__Buybooks_Response * msg)
{
  if (!msg) {
    return false;
  }
  // books
  if (!rosidl_runtime_c__String__Sequence__init(&msg->books, 0)) {
    village_interface__srv__Buybooks_Response__fini(msg);
    return false;
  }
  return true;
}

void
village_interface__srv__Buybooks_Response__fini(village_interface__srv__Buybooks_Response * msg)
{
  if (!msg) {
    return;
  }
  // books
  rosidl_runtime_c__String__Sequence__fini(&msg->books);
}

village_interface__srv__Buybooks_Response *
village_interface__srv__Buybooks_Response__create()
{
  village_interface__srv__Buybooks_Response * msg = (village_interface__srv__Buybooks_Response *)malloc(sizeof(village_interface__srv__Buybooks_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(village_interface__srv__Buybooks_Response));
  bool success = village_interface__srv__Buybooks_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
village_interface__srv__Buybooks_Response__destroy(village_interface__srv__Buybooks_Response * msg)
{
  if (msg) {
    village_interface__srv__Buybooks_Response__fini(msg);
  }
  free(msg);
}


bool
village_interface__srv__Buybooks_Response__Sequence__init(village_interface__srv__Buybooks_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  village_interface__srv__Buybooks_Response * data = NULL;
  if (size) {
    data = (village_interface__srv__Buybooks_Response *)calloc(size, sizeof(village_interface__srv__Buybooks_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = village_interface__srv__Buybooks_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        village_interface__srv__Buybooks_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
village_interface__srv__Buybooks_Response__Sequence__fini(village_interface__srv__Buybooks_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      village_interface__srv__Buybooks_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

village_interface__srv__Buybooks_Response__Sequence *
village_interface__srv__Buybooks_Response__Sequence__create(size_t size)
{
  village_interface__srv__Buybooks_Response__Sequence * array = (village_interface__srv__Buybooks_Response__Sequence *)malloc(sizeof(village_interface__srv__Buybooks_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = village_interface__srv__Buybooks_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
village_interface__srv__Buybooks_Response__Sequence__destroy(village_interface__srv__Buybooks_Response__Sequence * array)
{
  if (array) {
    village_interface__srv__Buybooks_Response__Sequence__fini(array);
  }
  free(array);
}
