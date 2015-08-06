#include <iostream>

using std::cout;
using std::endl;

int fact(int i) {
    if (i > 1)
        return i * fact(i - 1);
    else
        return 1;
}

int main()
{
    cout << "1! is " << fact(1) << endl;
    cout << "2! is " << fact(2) << endl;
    cout << "3! is " << fact(3) << endl;
    cout << "4! is " << fact(4) << endl;
    cout << "5! is " << fact(5) << endl;
    cout << "6! is " << fact(6) << endl;
}

