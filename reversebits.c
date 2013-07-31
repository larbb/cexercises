#include <stdio.h>
#include <time.h>
#include <limits.h>
#include <sys/time.h>

unsigned char ReverseBits(unsigned char v);

int main()
{
    struct timespec ts, ts2;
    clock_gettime(CLOCK_MONOTONIC_RAW, &ts);
    ReverseBits(54);
    clock_gettime(CLOCK_MONOTONIC_RAW, &ts2);
    printf("%f\n", (double)ts2.tv_nsec - ts.tv_nsec);
    return 0;
}

unsigned char ReverseBits(unsigned char v)
{
    unsigned r = v;
    int s = sizeof(v) * CHAR_BIT - 1;
    for (v >>= 1; v; v >>= 1) {
        r <<= 1; r |= v & 1; s--;
    }
    
    return r << s;
}
