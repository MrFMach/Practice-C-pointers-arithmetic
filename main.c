#include <stdio.h>

void main(void)
{
    puts("<< Adreess in hexadecimal >>");
    __int8_t a = 5, *ptr_a = &a;
    printf("%X + 1 sizeof(int8)   is  1 byte  -> %X \n", ptr_a, ptr_a + 1);
    __int16_t b = 5, *ptr_b = &b;
    printf("%X + 1 sizeof(int16)  is  2 bytes -> %X \n", ptr_b, ptr_b + 1);
    __int32_t c = 5, *ptr_c = &c;
    printf("%X + 1 sizeof(int32)  is  4 bytes -> %X \n", ptr_c, ptr_c + 1);
    __int64_t d = 5, *ptr_d = &d;
    printf("%X + 1 sizeof(int64)  is  8 bytes -> %X \n", ptr_d, ptr_d + 1);
    __int128_t e = 5, *ptr_e = &e;
    printf("%X + 1 sizeof(int128) is 16 bytes -> %X \n", ptr_e, ptr_e + 1);
}