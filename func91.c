#include <stdio.h>

int m91(int n);

int main(int argc, char **argv)
{
    printf("%u\n", m91(strtoul(argv[1], NULL, 10)));
    return 0;
}

int m91(int n)
{
    if (n > 100) {
        printf("M91(%d) since %d is > 100\n", n - 10, n);
        return n - 10;
    }
    else {
        printf("M91(M91(%d)) since %d <= 100\n", n + 11, n);
        return m91(m91(n + 11));
    }
}
