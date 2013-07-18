#include <stdio.h>

#define LIM 100

//same arguments as the c std library function strpbrk
int any(const char s[], const char accept);

int main()
{  
    char s1[LIM] = "CDEFG";
    char s2 = 'F';
    printf("%d\n", any(s1, s2));
}

int any(const char s[], const char accept)
{
    int i, j, k;
    for (i = 0; i != '/0'; i++) {
        if (s[i] != accept)
            continue;
        return i;
    }
return -1;
}
        


