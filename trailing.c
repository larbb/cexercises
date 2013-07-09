#include <stdio.h>

#define MAXLINE 1000

int getline(char line[], int lim);

int main() 
{
    int len,j, head, tail;
    char line[MAXLINE];

    while ((len = getline(line, MAXLINE)) > 0) {
        if (len > 1) {
            for (j = 0; line[len - 2 - j] == ' ' || line[len - 2 -j] == '\t')



int getline(char line[], int lim)
{
    int c, i;
    for(i = 0; i < MAXLINE-1 && (c=getchar())
        != EOF && c != '\n'; ++i) line[i] = c;
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

