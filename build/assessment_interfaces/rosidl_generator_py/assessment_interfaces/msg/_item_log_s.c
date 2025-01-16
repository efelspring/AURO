// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from assessment_interfaces:msg/ItemLog.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "assessment_interfaces/msg/detail/item_log__struct.h"
#include "assessment_interfaces/msg/detail/item_log__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool assessment_interfaces__msg__item_log__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[44];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("assessment_interfaces.msg._item_log.ItemLog", full_classname_dest, 43) == 0);
  }
  assessment_interfaces__msg__ItemLog * ros_message = _ros_message;
  {  // red_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "red_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->red_count = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // green_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "green_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->green_count = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // blue_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "blue_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->blue_count = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // total_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "total_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->total_count = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // red_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "red_value");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->red_value = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // green_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "green_value");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->green_value = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // blue_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "blue_value");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->blue_value = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // total_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "total_value");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->total_value = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * assessment_interfaces__msg__item_log__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ItemLog */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("assessment_interfaces.msg._item_log");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ItemLog");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  assessment_interfaces__msg__ItemLog * ros_message = (assessment_interfaces__msg__ItemLog *)raw_ros_message;
  {  // red_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->red_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "red_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // green_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->green_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "green_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blue_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->blue_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blue_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // total_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->total_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // red_value
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->red_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "red_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // green_value
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->green_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "green_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blue_value
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->blue_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blue_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // total_value
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->total_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
