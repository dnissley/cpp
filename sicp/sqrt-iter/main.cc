#include <iostream>
#include "sqrt.h"

int main()
{
    using namespace std;

    double nums[] {2, 16, 1234567890123, 0.0123};

    for (double n : nums) {
        cout << "The square root of " << n << " is " << sqrt(n) << "; that squared is " << (sqrt(n) * sqrt(n)) << endl;
    }

    return 0;
}

