#include <stdio.h>

float convert(float f);

int main()
{
    float fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    
    fahr = lower;
    while (fahr <= upper)
    {
        printf("%3.0f %6.1f\n", fahr, convert(fahr));
        fahr += step;
    }
}

float convert(float f)
{
    float cel;
    cel = (5.0/9.0) * (f-32.0);
    return cel;
}
    
