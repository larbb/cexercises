#include <stdio.h>
#define LIM 100

void squeeze(char[], char[]);
int ggetline(char[], int);

int main()
{
    //the getline function is buggy; it would produce null strings.
    char line1[LIM] = "hello";
    char line2[LIM] = "hello2";
    squeeze(line1, line2);
    printf("%s %s\n", line1, line2);

return 0;
  
}


/* getline: reads line into s, returns length */
int ggetline(char s[], int lim)
{
    int c, i;
    
    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c!='\n'; ++i) 
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void squeeze(char s1[], char s2[])
{
    int j, l, i, k;

    for (i = 0; s2[i] != '\0'; i++) {
        for (k = l = 0; s2[j] != '\0'; j++) {
            if (s1[j] != s2[i])
                s1[k++] = s1[j];
        }
        s2[k] = '\0';

    }
}
