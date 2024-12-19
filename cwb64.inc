!/* ========================================================================== */
!/*   Clarion INCLUDE file  cwB64.INC                                          */
!/*      cwB64.cpp                                                             */
!/*   adapted from GPL code for Clarion For Windows by John Griffiths -2009    */
!/*                                                                            */
!/*   Description: Base64 encode and Decode CPP for Clarion                    */                      
!/*   Tested and supplied without any warranty. Use at your own risk           */
!/*                                                                            */
!/* ========================================================================== */
!  Include this file in your programs MAP 
! MAP

    module('cwB64.cpp')
        CWencode64(*CSTRING _out, *CSTRING _in, long inlen),SIGNED,RAW ,NAME('_cwencode64')
        CWdecode64(*CSTRING  out, *CSTRING in, long inlen),SIGNED,RAW ,NAME('_cwdecode64')
    end !* end *
            
    module('convert_iso_2_utf.cpp')
        replaceChar( *cstring str, short oldChar, short newChar),raw,name('_replaceChar')
        convertISO88591ToUTF8( *cstring _in, *cstring _out ),raw,name('_convertISO88591ToUTF8')
        convertUTF8ToISO88591( *cstring _in, *cstring _out ),raw,name('_convertUTF8ToISO88591')
    end !* end *
    
! END
