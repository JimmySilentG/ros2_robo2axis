// generated from
// rosidl_typesupport_fastrtps_c/resource/rosidl_typesupport_fastrtps_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef ROBO2AXIS_DATA_STRCS__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_C__VISIBILITY_CONTROL_H_
#define ROBO2AXIS_DATA_STRCS__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_C__VISIBILITY_CONTROL_H_

#if __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_EXPORT_robo2axis_data_strcs __attribute__ ((dllexport))
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_robo2axis_data_strcs __attribute__ ((dllimport))
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_EXPORT_robo2axis_data_strcs __declspec(dllexport)
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_robo2axis_data_strcs __declspec(dllimport)
  #endif
  #ifdef ROSIDL_TYPESUPPORT_FASTRTPS_C_BUILDING_DLL_robo2axis_data_strcs
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo2axis_data_strcs ROSIDL_TYPESUPPORT_FASTRTPS_C_EXPORT_robo2axis_data_strcs
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo2axis_data_strcs ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_robo2axis_data_strcs
  #endif
#else
  #define ROSIDL_TYPESUPPORT_FASTRTPS_C_EXPORT_robo2axis_data_strcs __attribute__ ((visibility("default")))
  #define ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_robo2axis_data_strcs
  #if __GNUC__ >= 4
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo2axis_data_strcs __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robo2axis_data_strcs
  #endif
#endif

#if __cplusplus
}
#endif

#endif  // ROBO2AXIS_DATA_STRCS__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_C__VISIBILITY_CONTROL_H_
