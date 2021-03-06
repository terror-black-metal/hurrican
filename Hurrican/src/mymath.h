// Datei : mymath.h

// --------------------------------------------------------------------------------------
//
// Mathe-Hilfsfuktionen
//
// (c) 2004
// J�rg M. Winterstein
// http://www.poke53280.de
//
// --------------------------------------------------------------------------------------

#ifndef _MYMATH_
#define _MYMATH_

// --------------------------------------------------------------------------------------
// Defines
// --------------------------------------------------------------------------------------

// Schnelle Float to Int Konvertierung

#if defined(USE_X86)

#define MYMATH_FTOL(fx,x)\
		_asm fld fx\
		_asm fistp x

#else

#define MYMATH_FTOL(fx,x)  (x) = (long)(fx)

#endif /* defined(USE_X86) */

#endif

