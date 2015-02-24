// ---------------------------------------------------------------------
// This file is provided by Gimpel Software (www.gimpel.com) for use with
// its products PC-lint and FlexeLint.
//
// Redistribution and use of this file, with or without modification, is
// permitted provided that any such redistribution retains this notice.
// ---------------------------------------------------------------------

#ifndef LINT_SUPPORT_CO_MSC90_H_
#define LINT_SUPPORT_CO_MSC90_H_

// co-msc90.h  --
// This header is automatically included in every module if you use
// co-msc90.lnt.  (There is a -header(co-msc90.h) option therein
// for this purpose
//
// This header is used to compensate for the fact that class typeinfo
// is available for use in the MSC compilers without an explicit
// definition.  According to the standard this class definition
// is not by default available.


#ifdef __cplusplus

#include <typeinfo>

#endif

#endif /* LINT_SUPPORT_CO_MSC90_H_ */
