#ifndef TM_MSGS__VISIBILITY_CONTROL_H_
#define TM_MSGS__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define TM_MSGS_EXPORT __attribute__ ((dllexport))
    #define TM_MSGS_IMPORT __attribute__ ((dllimport))
  #else
    #define TM_MSGS_EXPORT __declspec(dllexport)
    #define TM_MSGS_IMPORT __declspec(dllimport)
  #endif
  #ifdef TM_MSGS_BUILDING_LIBRARY
    #define TM_MSGS_PUBLIC TM_MSGS_EXPORT
  #else
    #define TM_MSGS_PUBLIC TM_MSGS_IMPORT
  #endif
  #define TM_MSGS_PUBLIC_TYPE TM_MSGS_PUBLIC
  #define TM_MSGS_LOCAL
#else
  #define TM_MSGS_EXPORT __attribute__ ((visibility("default")))
  #define TM_MSGS_IMPORT
  #if __GNUC__ >= 4
    #define TM_MSGS_PUBLIC __attribute__ ((visibility("default")))
    #define TM_MSGS_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define TM_MSGS_PUBLIC
    #define TM_MSGS_LOCAL
  #endif
  #define TM_MSGS_PUBLIC_TYPE
#endif
#endif  // TM_MSGS__VISIBILITY_CONTROL_H_
// Generated 29-Oct-2024 17:52:12
// Copyright 2019-2020 The MathWorks, Inc.
