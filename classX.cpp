#include <iostream>

class y;

int main() 
{
    class x {
        y *next;
    };

    class y {
        x prev;
    };
return 0;
}
