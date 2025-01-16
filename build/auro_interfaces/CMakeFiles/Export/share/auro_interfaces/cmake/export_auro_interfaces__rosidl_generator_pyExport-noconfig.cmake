#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "auro_interfaces::auro_interfaces__rosidl_generator_py" for configuration ""
set_property(TARGET auro_interfaces::auro_interfaces__rosidl_generator_py APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(auro_interfaces::auro_interfaces__rosidl_generator_py PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libauro_interfaces__rosidl_generator_py.so"
  IMPORTED_SONAME_NOCONFIG "libauro_interfaces__rosidl_generator_py.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS auro_interfaces::auro_interfaces__rosidl_generator_py )
list(APPEND _IMPORT_CHECK_FILES_FOR_auro_interfaces::auro_interfaces__rosidl_generator_py "${_IMPORT_PREFIX}/lib/libauro_interfaces__rosidl_generator_py.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
