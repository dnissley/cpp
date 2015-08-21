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
}

