# generated from
# rosidl_cmake/cmake/template/rosidl_cmake_export_typesupport_targets.cmake.in

set(_exported_typesupport_targets
  "__rosidl_generator_c:robo2axis_data_strcs__rosidl_generator_c;__rosidl_typesupport_fastrtps_c:robo2axis_data_strcs__rosidl_typesupport_fastrtps_c;__rosidl_typesupport_introspection_c:robo2axis_data_strcs__rosidl_typesupport_introspection_c;__rosidl_typesupport_c:robo2axis_data_strcs__rosidl_typesupport_c;__rosidl_generator_cpp:robo2axis_data_strcs__rosidl_generator_cpp;__rosidl_typesupport_fastrtps_cpp:robo2axis_data_strcs__rosidl_typesupport_fastrtps_cpp;__rosidl_typesupport_introspection_cpp:robo2axis_data_strcs__rosidl_typesupport_introspection_cpp;__rosidl_typesupport_cpp:robo2axis_data_strcs__rosidl_typesupport_cpp;__rosidl_generator_py:robo2axis_data_strcs__rosidl_generator_py")

# populate robo2axis_data_strcs_TARGETS_<suffix>
if(NOT _exported_typesupport_targets STREQUAL "")
  # loop over typesupport targets
  foreach(_tuple ${_exported_typesupport_targets})
    string(REPLACE ":" ";" _tuple "${_tuple}")
    list(GET _tuple 0 _suffix)
    list(GET _tuple 1 _target)

    set(_target "robo2axis_data_strcs::${_target}")
    if(NOT TARGET "${_target}")
      # the exported target must exist
      message(WARNING "Package 'robo2axis_data_strcs' exports the typesupport target '${_target}' which doesn't exist")
    else()
      list(APPEND robo2axis_data_strcs_TARGETS${_suffix} "${_target}")
    endif()
  endforeach()
endif()
