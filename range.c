#include <stdio.h>
#include <limits.h>

/*values of char, short, int and long variables, singned and unsigned */
int main() 
{
    printf("Ranges of char %d %d\n", CHAR_MIN, CHAR_MAX);
    printf("Ranges of short %d %d\n", SHRT_MIN, SHRT_MAX);
    printf("Ranges of int %d %d\n", INT_MIN, INT_MAX);
    printf("Ranges of long %d %d\n", LONG_MIN, LONG_MAX);
    printf("Range of unsigned char %u\n", UCHAR_MAX);
    printf("Range of unsigned short %u\n", USHRT_MAX);
    printf("Range of unsigned int %u\n", UINT_MAX);
    printf("Range of unsigend long %u\n", ULONG_MAX);
    return 0;
}

