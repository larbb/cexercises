#include <stdio.h>

#define LIM 100

int main(void) 
{
    int i, c;
    char s[LIM];

    i = c = 0;
    while (i < LIM -1) {
        c = getchar();
        if (c != EOF) 
            if (c != '\n')
            s[i++] = c;
        }
    s[i] = '\0';
return 0;
}


