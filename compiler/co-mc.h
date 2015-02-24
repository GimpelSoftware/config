// ---------------------------------------------------------------------
// This file is provided by Gimpel Software (www.gimpel.com) for use with
// its products PC-lint and FlexeLint.
//
// Redistribution and use of this file, with or without modification, is
// permitted provided that any such redistribution retains this notice.
// ---------------------------------------------------------------------

// The following is designed to support the use of the asm() function
// which in turn provides support for in-line assembly.  The format of
// the asm() function is asm(type,string).  The result is an expression
// whose C type is given as first argument.

// this file can automatically be included within every module by
// use of the PC-lint option:
//
//                   -header(co-mc.h)



#ifdef  __cplusplus
        extern "C"
            {
#endif

            #define asm(type,string) ((type) __asm_func())
            unsigned __asm_func(void);


#ifdef  __cplusplus
            }
#endif

