#include <stdio.h>
#include <string.h>

void reverse(char s[]);

int main()
{
    int i,j;
    int longest = -1;
    char s1[7];
    char s2[7];
    for (i = 999; i > 0; i--) {
        for (j = 999; j > 0; j--) {
            int sum = i * j;
            sprintf(s1, "%d", sum);
            strcpy(s2, s1);
            reverse(s2);
            if (strcmp(s1, s2) == 0 && sum > longest)
                longest = sum;
        }
    }
    longest > 0 ? printf("%d\n", longest) : printf("No palindromic number present"); 
    return 0;
}

void reverse(char s[]) 
{
    int c, i, j;
    for (i = 0,j = strlen(s) - 1 ; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}
            
            
                    
        
        
        
