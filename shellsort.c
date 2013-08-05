#include <stdio.h>

void shellsort(int v[], int n);

int main()
{
    int seq[] = {0,9,8,7,5,3,6,2,7,8,2,7,8};
    int length = 12;
    shellsort(seq, length);
    for (int i = 0; i <= length; i++) 
        printf("%6d%c", seq[i], (i%10==9 || i == length - 1) ? '\n' : ' '); //including last element
    return 0;
}

void shellsort(int v[], int n)
{
    int gap, i, j, temp;
    for (gap = n/2; gap > 0; gap /= 2) 
        for (i = gap; i < n; i++)
            for (j=i-gap; j >=0 && v[j]>v[j+gap]; j-=gap) {
                temp = v[j];
                v[j] = v[j+gap];
                v[j+gap] = temp;
            }
}
    

