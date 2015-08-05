#include <iostream>
#include <stdexcept>

using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;

int main()
{
    float f1, f2;
    cin >> f1 >> f2;

    if (f2 == 0)
        throw runtime_error("You can't divide by zero.");

    cout << f1 / f2 << endl;
}

