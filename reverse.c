#include <stdio.h>

#define MAXLINE 1000

int getline(char s[], int lim);
void reverse(char s[],  int length);

int main() 
{
    char s[MAXLINE];
    char t[MAXLINE];
    int k, len;

    while ((len = getline(s, MAXLINE)) > 0) {
        if (len >= 1) {
            reverse(s, len);

        }
    }
    printf("%s", s);
}


void reverse (char input[], int length) 
{
      char temp;
      int j = length - 1;

    for (int i = 0; i < length; ++i, j++) {
            temp = input[i]; // temp = 'A'
            input[i] = input[j]; // input = char -1
            input[j] = temp;
    }
}      


int getline(char s[], int lim)
{
    int c, i;

    for (i=0; (c=getchar()) != EOF && c!='\n'; ++i) 
        s[i] = c;
    if (c== '\n') {
        s[i] = c;
        ++i;
    }
    return i;
}




