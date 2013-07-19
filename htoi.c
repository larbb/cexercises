/* The C Programming language, second edition,
by Brian W. Kernighan and Dennis M. Ritchie
Exercise 2-3, page 46
Write the function htoi(s), which converts a string of hexadecimal digits (including an optional 0x
or 0X into its equivalent interger value (ie: 0-9, a-f and A-F)
*/



#include <stdio.h>
#include <ctype.h>
#define LIM 100


int htoi(char[]);
int getline(char[], int);


int main(void)
{
    int len;
    char line[LIM];
    while ((len = getline(line, LIM)) > 0) 
        ; // null statement
    printf("%s: %d\n", line, htoi(line));

return 0;
}


/* getline: reads line into s, returns length */
int getline(char s[], int lim)
{
    int c, i;
    
    for (i=0; i < lim-1 && (c = getchar()) != EOF && c!='\n'; ++i) 
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}


int htoi(char s[])
{
    int i, k, hex;

    i = hex = 0;
    if(s[i] == '0') {
        i++;
        if(s[i] == 'x' || s[i] == toupper('x'))
            i++;
    }

    while (s[i] != '\0') {
        hex *= 16;
        if(isdigit(s[i])) {
            hex *= 16 + s[i] - '0';
        }
         else if (s[i] >= 'a' && s[i] <= 'f') {
            hex += 10 + (s[i] - 'a');
        }
         else if (s[i] >= 'A' && s[i] <= 'F') {
            hex += 10 + (s[i] -'A');
        }
         else {
            printf("No viable data");
            return -1; // non-zero indicated error
        }
    }

return hex;
}

        

