#include <stdio.h>
#define TARGET 999

int SumDivisibleBy(int num);

int main(void)
{
    printf("%d\n", SumDivisibleBy(3) + SumDivisibleBy(5) - SumDivisibleBy(15));
    return 0;
}

int SumDivisibleBy(int num)
{
    int p = TARGET / num;
    return num * (p*(p+1)) / 2;


}
