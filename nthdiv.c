#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
    int i;
    if (argc < 3)
        return -1;

    int n = atoi(argv[1]);
    int m = atoi(argv[2]);

    if (n < 1 || n > 9 || m < 2 || m > 999999999)
        return -1;

    for (i = pow(10, n) - 1; i > 0; i--) {
        if (!(i % m)) {
            printf("%d\n", i);
            return 0;
        }
    }
            
    printf("%d\n", i);
    return 0;
}
