#include <stdio.h>

int bitcount(unsigned x);

int main(int argc, char **argv)
{
    if (argv[1])
        printf("%d\n", bitcount((unsigned int)strtoul(argv[1], NULL, 10)));
    return 0;
}

int bitcount(unsigned x) 
{
    int b;
    for (b = 0; x; x &= (x - 1)) /* x != 0 due to RMB being deleted in x. Faster bit count then listed in K&R 2 */
        b++;
    return b;
}
