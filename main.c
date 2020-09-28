#include <stdio.h>
#include <stdlib.h>

void incremet(char arg[])
{
    puts(arg);
    __int8_t a = 5, *ptr_a = &a;
    printf("%X + 1 sizeof(int8)   is  1 byte  -> %X \n", ptr_a, ptr_a + 1);
    system("sleep 0.3");
    __int16_t b = 5, *ptr_b = &b;
    printf("%X + 1 sizeof(int16)  is  2 bytes -> %X \n", ptr_b, ptr_b + 1);
    system("sleep 0.3");
    __int32_t c = 5, *ptr_c = &c;
    printf("%X + 1 sizeof(int32)  is  4 bytes -> %X \n", ptr_c, ptr_c + 1);
    system("sleep 0.3");
    __int64_t d = 5, *ptr_d = &d;
    printf("%X + 1 sizeof(int64)  is  8 bytes -> %X \n", ptr_d, ptr_d + 1);
    system("sleep 0.3");
    __int128_t e = 5, *ptr_e = &e;
    printf("%X + 1 sizeof(int128) is 16 bytes -> %X \n", ptr_e, ptr_e + 1);
    system("sleep 0.3");
}

void decrement(char arg[])
{

    puts(arg);
    char str[100], *ptr = NULL;

    puts("Write one string: ");
    gets(str);
    ptr = &str;

    puts("\n<< String in order >>");
    while (*ptr != '\0')
    {
        putchar(*ptr++);
    }

    puts("\n<< String in reverse >>");

    while (ptr >= &str)
    {
        printf("%c\n", *ptr);
        system("sleep 0.3");
        *ptr--;
    }
}

void main(void)
{
    incremet("\n<< Pointer Increment Example with Address in Hexadecimal >>");
    decrement("\n<< Pointer Decrement Example with String >>");
    puts("");
}