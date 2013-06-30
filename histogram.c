#include <stdio.h>
#define MAX 10
#define IN 1
#define OUT 0

int main()
{
    int c, len, state;
    int nlength[MAX];
    c = len = 0;
    state = 1;

    for(int i = 0; i < 10; ++i) 
        nlength[i] = 0;

    while ((c = getchar()) != EOF) {
        ++len;
        if (c == ' ' || c == '\n' || c == '\t') {
            --len;
            state = OUT;
        }
            if(state == OUT) {
                if(len != 0 && len <= MAX)
                    ++nlength[len];

            len = 0;
            state = IN;
        }
    }
    for (int i = 0; i <= MAX; ++i) {
        printf("%d ", i);
        for (int a = 0; a < nlength[i]; ++a)
            printf("*");

        printf("\n");
        }
    return 0;
}
        


    

