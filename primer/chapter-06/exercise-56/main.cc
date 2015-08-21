#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int add(int i, int j)
{
    return i + j;
}

int subtract(int i, int j)
{
    return i - j;
}

int multiply(int i, int j)
{
    return i * j;
}

int divide(int i, int j)
{
    return i / j;
}

int main()
{
    vector<int (*)(int, int)> operations {add, subtract, multiply, divide};

    cout << "4 + 8 = " << operations[0](4, 8) << endl;
    cout << "6 - 4 = " << operations[1](6, 4) << endl;
    cout << "3 * 2 = " << operations[2](3, 2) << endl;
    cout << "4 / 2 = " << operations[3](4, 2) << endl;
}

