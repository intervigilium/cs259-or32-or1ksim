
/*
===============================================================================

This C source file is part of TestFloat, Release 2a, a package of programs
for testing the correctness of floating-point arithmetic complying to the
IEC/IEEE Standard for Floating-Point.

Written by John R. Hauser.  More information is available through the Web
page `http://HTTP.CS.Berkeley.EDU/~jhauser/arithmetic/TestFloat.html'.

THIS SOFTWARE IS DISTRIBUTED AS IS, FOR FREE.  Although reasonable effort
has been made to avoid it, THIS SOFTWARE MAY CONTAIN FAULTS THAT WILL AT
TIMES RESULT IN INCORRECT BEHAVIOR.  USE OF THIS SOFTWARE IS RESTRICTED TO
PERSONS AND ORGANIZATIONS WHO CAN AND WILL TAKE FULL RESPONSIBILITY FOR ANY
AND ALL LOSSES, COSTS, OR OTHER PROBLEMS ARISING FROM ITS USE.

Derivative works are acceptable, even for commercial purposes, so long as
(1) they include prominent notice that the work is derivative, and (2) they
include prominent notice akin to these four paragraphs for those parts of
this code that are retained.

Modified for use with or1ksim's testsuite.

Contributor Julius Baxter <julius.baxter@orsoc.se>

===============================================================================
*/
								 /*
#include <stdlib.h>
								 */
#include "support.h" // OR1k support C library
#include "milieu.h"
#include "random.h"

uint8 randomUint8( void )
{

    return (bits8) ( rand()>>4 );

}

uint16 randomUint16( void )
{

    return ( ( rand() & 0x0FF0 )<<4 ) | ( ( rand()>>4 ) & 0xFF );

}

uint32 randomUint32( void )
{

    return
          ( ( (uint32) ( rand() & 0x0FF0 ) )<<20 )
        | ( ( (uint32) ( rand() & 0x0FF0 ) )<<12 )
        | ( ( rand() & 0x0FF0 )<<4 )
        | ( ( rand()>>4 ) & 0xFF );

}

#ifdef BITS64

uint64 randomUint64( void )
{

    return ( ( (uint64) randomUint32() )<<32 ) | randomUint32();

}

#endif

