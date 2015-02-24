// ---------------------------------------------------------------------
// This file is provided by Gimpel Software (www.gimpel.com) for use with
// its products PC-lint and FlexeLint.
//
// Redistribution and use of this file, with or without modification, is
// permitted provided that any such redistribution retains this notice.
// ---------------------------------------------------------------------

// co-bc5.h contains the necessary defines for the borland 5.0 compiler.
// The reason these are defined here is because they can be conditionally
// set depending on whether we are processing C or C++ or on whether
// __WIN32__ has been set

#ifdef  __cplusplus
  #define __TCPLUSPLUS__ 0x0340
  #define __TEMPLATES__ 1
  #define __CHAR_UNSIGNED 1
  #define __BCPLUSPLUS__ 0x0340
  #define _WCHAR_T          // wchar_t is intrinsically defined
  #define _WCHAR_T_DEFINED  // wchar_t is intrinsically defined
  template <class T1, class T2> class pair;
  template <class T> class allocator;
#endif

#if defined(__WIN32__)
  #define __TLS__ 1         //Always true for the 32 bit compilier
  #define _WIN32            // Required for processing 32-bit
#endif


