#include <iostream>
#include "cbrt.h"

int main()
{
    using namespace std;

    double nums[] {2, 16, 1234567890123, 0.0123};

    for (double n : nums) {
        cout << "The cube root of " << n << " is " << cbrt(n) << "; that cubed is " << (cbrt(n) * cbrt(n) * cbrt(n)) << endl;
    }

    return 0;
}

