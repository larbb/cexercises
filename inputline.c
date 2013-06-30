#include <stdio.h>

#define MAXLINE 81
#define MAXLENGTH 1000

int getline(char line[]);

/* print line longer than 80 characters */

int main(void)
{
    int len;
    char line[MAXLENGTH];

    while ((len = getline(line)) > 0) 
        if (len > MAXLINE) {
            printf("%s", line);
    }
return 0;
}

int getline(char s[]) {
    int c, i;

    for (i=0; (c=getchar()) != EOF && c!='\n'; ++i) 
        s[i] = c;
    if (c== '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
