#include <stdio.h>

int bitcount(unsigned x);

int main()
{
    printf("%d\n", bitcount(5));
}

int bitcount(unsigned x)
{
    int b;
    for (b = 0; b != x; x &= (x-1));
        b++;
    return b;
}
