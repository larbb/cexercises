#include <stdio.h>

int bitcount(unsigned x);

int main()
{
    printf("%d\n", bitcount(10));
    return 0;
}

int bitcount(unsigned x)
{
    unsigned c;
    for (c = 0; x; c++)
        x &= x - 1;
    return c;
}
