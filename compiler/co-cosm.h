// ---------------------------------------------------------------------
// This file is provided by Gimpel Software (www.gimpel.com) for use with
// its products PC-lint and FlexeLint.
//
// Redistribution and use of this file, with or without modification, is
// permitted provided that any such redistribution retains this notice.
// ---------------------------------------------------------------------

//  co-cosm.h is included in every module as the result of the option:
//  -header(co-cosm.h) in co-cosm.lnt

// _asm is a function built into the Cosmic compiler.
// It needs to be declared here so that the result of an _asm() appears
// to return an integer.
int _asm( char *, ... );
