#ifndef SORT_ARRAY_WITH_INDICES_EXPORT_H
#define SORT_ARRAY_WITH_INDICES_EXPORT_H

#if defined(_WIN32)
   #define SORT_ARRAY_WITH_INDICES_EXPORT __declspec(dllexport)
   #define SORT_ARRAY_WITH_INDICES_IMPORT __declspec(dllimport)
#elif defined(__GNUC__)
   #define SORT_ARRAY_WITH_INDICES_EXPORT __attribute__ ((visibility("default")))
   #define SORT_ARRAY_WITH_INDICES_IMPORT __attribute__ ((visibility("default")))
#else
   #define SORT_ARRAY_WITH_INDICES_EXPORT
   #define SORT_ARRAY_WITH_INDICES_IMPORT
#endif

#if defined(SORT_ARRAY_WITH_INDICES_BUILD_NODEDEF_DLL)
   #define SORT_ARRAY_WITH_INDICES_DECL SORT_ARRAY_WITH_INDICES_EXPORT
#else
   #define SORT_ARRAY_WITH_INDICES_DECL SORT_ARRAY_WITH_INDICES_IMPORT
#endif

#endif