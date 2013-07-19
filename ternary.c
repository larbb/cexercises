#include <stdio.h>

int main()
{
    int a, b, z;

    a = 4;
    b = 20;
    printf("%d\n", (a > b) ? a : b); /* z = max(a, b) */
    return 0;
}

