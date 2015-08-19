#include <iostream>

using std::cout;
using std::endl;

void f()
{
    cout << "f()" << endl;
}


void f(int i)
{
    cout << "f(int)" << endl;
}

void f(int i, int j)
{
    cout << "f(int, int)" << endl;
}

void f(double d, double e = 3.14)
{
    cout << "f(double, double = 3.14)" << endl;
}

int main()
{
    //f(2.56, 42);
    f(42);
    f(42, 0);
    f(2.56, 3.14);
}

