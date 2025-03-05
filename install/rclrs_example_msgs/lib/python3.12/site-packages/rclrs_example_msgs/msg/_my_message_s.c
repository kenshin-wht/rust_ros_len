// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rclrs_example_msgs:msg/MyMessage.idl
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
#include "rclrs_example_msgs/msg/detail/my_message__struct.h"
#include "rclrs_example_msgs/msg/detail/my_message__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/u16string.h"
#include "rosidl_runtime_c/u16string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rclrs_example_msgs__msg__my_message__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
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
    assert(strncmp("rclrs_example_msgs.msg._my_message.MyMessage", full_classname_dest, 44) == 0);
  }
  rclrs_example_msgs__msg__MyMessage * ros_message = _ros_message;
  {  // short_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "short_value");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->short_value = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // short_value2
    PyObject * field = PyObject_GetAttrString(_pymsg, "short_value2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->short_value2 = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // unsigned_short_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "unsigned_short_value");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->unsigned_short_value = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // long_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "long_value");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->long_value = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // unsigned_long_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "unsigned_long_value");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->unsigned_long_value = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // long_long_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "long_long_value");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->long_long_value = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // unsigned_long_long_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "unsigned_long_long_value");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->unsigned_long_long_value = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // float_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "float_value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->float_value = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // double_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "double_value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->double_value = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // char_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "char_value");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    ros_message->char_value = PyBytes_AS_STRING(encoded_field)[0];
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // wchar_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "wchar_value");
    if (!field) {
      return false;
    }
    assert(false);
    Py_DECREF(field);
  }
  {  // boolean_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "boolean_value");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->boolean_value = (Py_True == field);
    Py_DECREF(field);
  }
  {  // octet_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "octet_value");
    if (!field) {
      return false;
    }
    assert(PyBytes_Check(field));
    ros_message->octet_value = PyBytes_AS_STRING(field)[0];
    Py_DECREF(field);
  }
  {  // int8_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "int8_value");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->int8_value = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // uint8_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "uint8_value");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->uint8_value = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // int16_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "int16_value");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->int16_value = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // uint16_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "uint16_value");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->uint16_value = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // int32_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "int32_value");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->int32_value = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // uint32_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "uint32_value");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->uint32_value = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // int64_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "int64_value");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->int64_value = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // uint64_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "uint64_value");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->uint64_value = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // string_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "string_value");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->string_value, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // bounded_string_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "bounded_string_value");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->bounded_string_value, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // wstring_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "wstring_value");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    // the returned string starts with a BOM mark and uses native byte order
    PyObject * encoded_field = PyUnicode_AsUTF16String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    char * buffer;
    Py_ssize_t length;
    int rc = PyBytes_AsStringAndSize(encoded_field, &buffer, &length);
    if (rc) {
      Py_DECREF(encoded_field);
      Py_DECREF(field);
      return false;
    }
    // use offset of 2 to skip BOM mark
    {
      bool succeeded = rosidl_runtime_c__U16String__assignn_from_char(&ros_message->wstring_value, buffer + 2, length - 2);
      Py_DECREF(encoded_field);
      if (!succeeded) {
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(field);
  }
  {  // bounded_wstring_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "bounded_wstring_value");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    // the returned string starts with a BOM mark and uses native byte order
    PyObject * encoded_field = PyUnicode_AsUTF16String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    char * buffer;
    Py_ssize_t length;
    int rc = PyBytes_AsStringAndSize(encoded_field, &buffer, &length);
    if (rc) {
      Py_DECREF(encoded_field);
      Py_DECREF(field);
      return false;
    }
    // use offset of 2 to skip BOM mark
    {
      bool succeeded = rosidl_runtime_c__U16String__assignn_from_char(&ros_message->bounded_wstring_value, buffer + 2, length - 2);
      Py_DECREF(encoded_field);
      if (!succeeded) {
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(field);
  }
  {  // unbounded_short_values
    PyObject * field = PyObject_GetAttrString(_pymsg, "unbounded_short_values");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(int16_t);
      if (!rosidl_runtime_c__int16__Sequence__init(&(ros_message->unbounded_short_values), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create int16__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      int16_t * dest = ros_message->unbounded_short_values.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'unbounded_short_values'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__int16__Sequence__init(&(ros_message->unbounded_short_values), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create int16__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      int16_t * dest = ros_message->unbounded_short_values.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyLong_Check(item));
        int16_t tmp = (int16_t)PyLong_AsLong(item);
        memcpy(&dest[i], &tmp, sizeof(int16_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // bounded_short_values
    PyObject * field = PyObject_GetAttrString(_pymsg, "bounded_short_values");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(int16_t);
      if (!rosidl_runtime_c__int16__Sequence__init(&(ros_message->bounded_short_values), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create int16__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      int16_t * dest = ros_message->bounded_short_values.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'bounded_short_values'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__int16__Sequence__init(&(ros_message->bounded_short_values), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create int16__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      int16_t * dest = ros_message->bounded_short_values.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyLong_Check(item));
        int16_t tmp = (int16_t)PyLong_AsLong(item);
        memcpy(&dest[i], &tmp, sizeof(int16_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // unbounded_values_of_bounded_strings
    PyObject * field = PyObject_GetAttrString(_pymsg, "unbounded_values_of_bounded_strings");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'unbounded_values_of_bounded_strings'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__String__Sequence__init(&(ros_message->unbounded_values_of_bounded_strings), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_runtime_c__String * dest = ros_message->unbounded_values_of_bounded_strings.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyUnicode_Check(item));
        PyObject * encoded_item = PyUnicode_AsUTF8String(item);
        if (!encoded_item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        rosidl_runtime_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
        Py_DECREF(encoded_item);
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // bounded_values_of_bounded_strings
    PyObject * field = PyObject_GetAttrString(_pymsg, "bounded_values_of_bounded_strings");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'bounded_values_of_bounded_strings'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__String__Sequence__init(&(ros_message->bounded_values_of_bounded_strings), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_runtime_c__String * dest = ros_message->bounded_values_of_bounded_strings.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyUnicode_Check(item));
        PyObject * encoded_item = PyUnicode_AsUTF8String(item);
        if (!encoded_item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        rosidl_runtime_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
        Py_DECREF(encoded_item);
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // array_short_values
    PyObject * field = PyObject_GetAttrString(_pymsg, "array_short_values");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_INT16);
      Py_ssize_t size = 23;
      int16_t * dest = ros_message->array_short_values;
      for (Py_ssize_t i = 0; i < size; ++i) {
        int16_t tmp = *(npy_int16 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(int16_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // int_and_frac_with_positive_scientific
    PyObject * field = PyObject_GetAttrString(_pymsg, "int_and_frac_with_positive_scientific");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->int_and_frac_with_positive_scientific = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // int_and_frac_with_explicit_positive_scientific
    PyObject * field = PyObject_GetAttrString(_pymsg, "int_and_frac_with_explicit_positive_scientific");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->int_and_frac_with_explicit_positive_scientific = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // int_and_frac_with_negative_scientific
    PyObject * field = PyObject_GetAttrString(_pymsg, "int_and_frac_with_negative_scientific");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->int_and_frac_with_negative_scientific = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // int_and_frac
    PyObject * field = PyObject_GetAttrString(_pymsg, "int_and_frac");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->int_and_frac = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // int_with_empty_frac
    PyObject * field = PyObject_GetAttrString(_pymsg, "int_with_empty_frac");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->int_with_empty_frac = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // frac_only
    PyObject * field = PyObject_GetAttrString(_pymsg, "frac_only");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->frac_only = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // int_with_positive_scientific
    PyObject * field = PyObject_GetAttrString(_pymsg, "int_with_positive_scientific");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->int_with_positive_scientific = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // int_with_explicit_positive_scientific
    PyObject * field = PyObject_GetAttrString(_pymsg, "int_with_explicit_positive_scientific");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->int_with_explicit_positive_scientific = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // int_with_negative_scientific
    PyObject * field = PyObject_GetAttrString(_pymsg, "int_with_negative_scientific");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->int_with_negative_scientific = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fixed_int_and_frac
    PyObject * field = PyObject_GetAttrString(_pymsg, "fixed_int_and_frac");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fixed_int_and_frac = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fixed_int_with_dot_only
    PyObject * field = PyObject_GetAttrString(_pymsg, "fixed_int_with_dot_only");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fixed_int_with_dot_only = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fixed_frac_only
    PyObject * field = PyObject_GetAttrString(_pymsg, "fixed_frac_only");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fixed_frac_only = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fixed_int_only
    PyObject * field = PyObject_GetAttrString(_pymsg, "fixed_int_only");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fixed_int_only = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rclrs_example_msgs__msg__my_message__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MyMessage */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rclrs_example_msgs.msg._my_message");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MyMessage");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rclrs_example_msgs__msg__MyMessage * ros_message = (rclrs_example_msgs__msg__MyMessage *)raw_ros_message;
  {  // short_value
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->short_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "short_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // short_value2
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->short_value2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "short_value2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // unsigned_short_value
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->unsigned_short_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "unsigned_short_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // long_value
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->long_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "long_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // unsigned_long_value
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->unsigned_long_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "unsigned_long_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // long_long_value
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->long_long_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "long_long_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // unsigned_long_long_value
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->unsigned_long_long_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "unsigned_long_long_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // float_value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->float_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "float_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // double_value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->double_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "double_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // char_value
    PyObject * field = NULL;
    field = Py_BuildValue("C", ros_message->char_value);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "char_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wchar_value
    PyObject * field = NULL;
    assert(false);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wchar_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // boolean_value
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->boolean_value ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "boolean_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // octet_value
    PyObject * field = NULL;
    field = PyBytes_FromStringAndSize((const char *)&ros_message->octet_value, 1);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "octet_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // int8_value
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->int8_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "int8_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // uint8_value
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->uint8_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "uint8_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // int16_value
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->int16_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "int16_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // uint16_value
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->uint16_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "uint16_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // int32_value
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->int32_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "int32_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // uint32_value
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->uint32_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "uint32_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // int64_value
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->int64_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "int64_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // uint64_value
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->uint64_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "uint64_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // string_value
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->string_value.data,
      strlen(ros_message->string_value.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "string_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bounded_string_value
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->bounded_string_value.data,
      strlen(ros_message->bounded_string_value.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "bounded_string_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wstring_value
    PyObject * field = NULL;
    int byteorder = 0;
    field = PyUnicode_DecodeUTF16(
      (const char *)ros_message->wstring_value.data,
      ros_message->wstring_value.size * sizeof(uint16_t),
      NULL, &byteorder);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "wstring_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bounded_wstring_value
    PyObject * field = NULL;
    int byteorder = 0;
    field = PyUnicode_DecodeUTF16(
      (const char *)ros_message->bounded_wstring_value.data,
      ros_message->bounded_wstring_value.size * sizeof(uint16_t),
      NULL, &byteorder);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "bounded_wstring_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // unbounded_short_values
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "unbounded_short_values");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(int16_t)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->unbounded_short_values.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      int16_t * src = &(ros_message->unbounded_short_values.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->unbounded_short_values.size * sizeof(int16_t));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // bounded_short_values
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "bounded_short_values");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(int16_t)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->bounded_short_values.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      int16_t * src = &(ros_message->bounded_short_values.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->bounded_short_values.size * sizeof(int16_t));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // unbounded_values_of_bounded_strings
    PyObject * field = NULL;
    size_t size = ros_message->unbounded_values_of_bounded_strings.size;
    rosidl_runtime_c__String * src = ros_message->unbounded_values_of_bounded_strings.data;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "replace");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "unbounded_values_of_bounded_strings", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bounded_values_of_bounded_strings
    PyObject * field = NULL;
    size_t size = ros_message->bounded_values_of_bounded_strings.size;
    rosidl_runtime_c__String * src = ros_message->bounded_values_of_bounded_strings.data;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "replace");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "bounded_values_of_bounded_strings", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // array_short_values
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "array_short_values");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_INT16);
    assert(sizeof(npy_int16) == sizeof(int16_t));
    npy_int16 * dst = (npy_int16 *)PyArray_GETPTR1(seq_field, 0);
    int16_t * src = &(ros_message->array_short_values[0]);
    memcpy(dst, src, 23 * sizeof(int16_t));
    Py_DECREF(field);
  }
  {  // int_and_frac_with_positive_scientific
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->int_and_frac_with_positive_scientific);
    {
      int rc = PyObject_SetAttrString(_pymessage, "int_and_frac_with_positive_scientific", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // int_and_frac_with_explicit_positive_scientific
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->int_and_frac_with_explicit_positive_scientific);
    {
      int rc = PyObject_SetAttrString(_pymessage, "int_and_frac_with_explicit_positive_scientific", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // int_and_frac_with_negative_scientific
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->int_and_frac_with_negative_scientific);
    {
      int rc = PyObject_SetAttrString(_pymessage, "int_and_frac_with_negative_scientific", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // int_and_frac
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->int_and_frac);
    {
      int rc = PyObject_SetAttrString(_pymessage, "int_and_frac", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // int_with_empty_frac
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->int_with_empty_frac);
    {
      int rc = PyObject_SetAttrString(_pymessage, "int_with_empty_frac", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // frac_only
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->frac_only);
    {
      int rc = PyObject_SetAttrString(_pymessage, "frac_only", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // int_with_positive_scientific
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->int_with_positive_scientific);
    {
      int rc = PyObject_SetAttrString(_pymessage, "int_with_positive_scientific", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // int_with_explicit_positive_scientific
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->int_with_explicit_positive_scientific);
    {
      int rc = PyObject_SetAttrString(_pymessage, "int_with_explicit_positive_scientific", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // int_with_negative_scientific
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->int_with_negative_scientific);
    {
      int rc = PyObject_SetAttrString(_pymessage, "int_with_negative_scientific", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fixed_int_and_frac
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fixed_int_and_frac);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fixed_int_and_frac", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fixed_int_with_dot_only
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fixed_int_with_dot_only);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fixed_int_with_dot_only", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fixed_frac_only
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fixed_frac_only);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fixed_frac_only", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fixed_int_only
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fixed_int_only);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fixed_int_only", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
