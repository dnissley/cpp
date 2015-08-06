#include <iostream>

using std::cout;
using std::endl;

int abs(int i) {
    if (i < 0) i *= -1;
    return i;
}

int main()
{
    cout << "The absolute value of -5 is " << abs(-5) << endl;
    cout << "The absolute value of 5 is " << abs(5) << endl;
    cout << "The absolute value of -123456 is " << abs(-123456) << endl;
    cout << "The absolute value of 123456 is " << abs(123456) << endl;
}

