# CWISO2UTF8
## Clarion interface for a small C library that converts from ISO-8859-1 from/to UFT-8.

### How to use:
! ========================================================================== !
!  Include the file (.INC) in your program MAP                         !
! ========================================================================== !
! MAP

    module('cwB64.cpp')
        CWencode64(*CSTRING _out, *CSTRING _in, long inlen),SIGNED,RAW ,NAME('_cwencode64')
        CWdecode64(*CSTRING  out, *CSTRING in, long inlen),SIGNED,RAW ,NAME('_cwdecode64')
    end !* end *
    
! END
