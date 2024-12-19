# CWISO2UTF8
## Clarion interface for a small C library that converts from ISO-8859-1 from/to UFT-8.

### How to use:
! ========================================================================== !
!  Include the file (cw_iso_2_uft.inc.INC) in your program MAP
! ========================================================================== !
!! MAP

    module('convert_iso_2_utf.cpp')
        replaceChar( *cstring str, short oldChar, short newChar),raw,name('_replaceChar')
        convertISO88591ToUTF8( *cstring _in, *cstring _out ),raw,name('_convertISO88591ToUTF8')
        convertUTF8ToISO88591( *cstring _in, *cstring _out ),raw,name('_convertUTF8ToISO88591')
    end !* end *
    
!! END
