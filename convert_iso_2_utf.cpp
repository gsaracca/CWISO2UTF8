/*
    Gustavo Saracca & ChatGPT para la versión de estas dos librerías.
    2024-06-07
    v 0.1
*/

// ------------------------------------------------------------------------------------------------
// Función para reemplazar un carácter por otro en una cadena
// ------------------------------------------------------------------------------------------------
extern "C" void replaceChar( char *str, char oldChar, char newChar) {
    while (*str) {
        if (*str == oldChar) {
            *str = newChar;
        }
        str++;
    }
}

// ------------------------------------------------------------------------------------------------
// Función para convertir texto de ISO-8859-1 a UTF-8 
// ------------------------------------------------------------------------------------------------
extern "C" void convertISO88591ToUTF8(const char *input, char *output) {
    while (*input) {
        unsigned char c = *input++;
        if (c < 0x80) {
            *output++ = c;  // ASCII characters map directly
        } else {
            *output++ = 0xC0 | (c >> 6);
            *output++ = 0x80 | (c & 0x3F);
        }
    }
    *output = '\0';  // Null-terminate the output string
}

// ------------------------------------------------------------------------------------------------
// Función para convertir texto de UTF-8 a ISO-8859-1
// ------------------------------------------------------------------------------------------------
extern "C" void convertUTF8ToISO88591(const char *input, char *output) {
    while (*input) {
        unsigned char c = *input++;
        if (c < 0x80) {
            *output++ = c;  // ASCII characters map directly
        } else if ((c & 0xE0) == 0xC0) {
            // Check for valid 2-byte sequence
            unsigned char c2 = *input++;
            if ((c2 & 0xC0) == 0x80) {
                unsigned char finalChar = ((c & 0x1F) << 6) | (c2 & 0x3F);
                if (finalChar >= 0xA0) {
                    *output++ = finalChar;
                } else {
                    // Invalid character for ISO-8859-1
                    // You might want to handle this case differently
                    *output++ = '?';
                }
            } else {
                // Invalid UTF-8 sequence
                // You might want to handle this case differently
                *output++ = '?';
            }
        } else {
            // Invalid UTF-8 sequence or character not representable in ISO-8859-1
            // You might want to handle this case differently
            *output++ = '?';
        }
    }
    *output = '\0';  // Null-terminate the output string
}