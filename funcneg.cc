#include <iostream>
#include <cmath>

using std::endl; using std::cout;

int f(int x)
    {

        if (x == 0) return 0;

        if ((x % 2) != 0)
            return x * -1 + (-1 *x) / (std::abs(x));
        else
            return x - x / (std::abs(x));
    }

int main()
{
std::cout << f(f(5)) << std::endl;
}


