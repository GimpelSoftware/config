// ---------------------------------------------------------------------
// This file is provided by Gimpel Software (www.gimpel.com) for use with
// its products PC-lint and FlexeLint.
//
// Redistribution and use of this file, with or without modification, is
// permitted provided that any such redistribution retains this notice.
// ---------------------------------------------------------------------

//  lib-bcl.h
// lib-bcl.lnt contains an option -header(lib-bcl.h) which causes
// this header file to be automatically included for every
// module (compilation unit)

// this is only needed for C++

#ifdef __cplusplus

//  These are required for PC-lint to process templates referring to same

template <class T,class Alloc> class TMSListImp;
template <class T,class Alloc> class TMIListIteratorImp;
template <class T,class Alloc> class TMISListIteratorImp;

//  This is probably a mispelling of "TOcRemView"

class TOcRemVie;
#endif
