! ========================================================================== 
!   Clarion INCLUDE file  cw_iso_2_uft.inc
! ========================================================================== 
!  Include this file in your programs MAP 
! ========================================================================== 
! MAP
            
    module('convert_iso_2_utf.cpp')
        replaceChar( *cstring str, short oldChar, short newChar),raw,name('_replaceChar')
        convertISO88591ToUTF8( *cstring _in, *cstring _out ),raw,name('_convertISO88591ToUTF8')
        convertUTF8ToISO88591( *cstring _in, *cstring _out ),raw,name('_convertUTF8ToISO88591')
    end !* end *
    
! END
