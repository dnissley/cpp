#include <cstddef>
#include <iostream>

using std::size_t;
using std::cout;
using std::endl;

int main()
{
    size_t bool_size = sizeof(bool);
    size_t char_size = sizeof(char);
    size_t short_size = sizeof(short);
    size_t int_size = sizeof(int);
    size_t long_size = sizeof(long);
    size_t long_long_size = sizeof(long long);
    size_t float_size = sizeof(float);
    size_t double_size = sizeof(double);
    size_t long_double_size = sizeof(long double);
    size_t size_t_size = sizeof(size_t);

    cout << "sizeof bool = " << bool_size << endl;
    cout << "sizeof char = " << char_size << endl;
    cout << "sizeof short = " << short_size << endl;
    cout << "sizeof int = " << int_size << endl;
    cout << "sizeof long = " << long_size << endl;
    cout << "sizeof long long = " << long_long_size << endl;
    cout << "sizeof float = " << float_size << endl;
    cout << "sizeof double = " << double_size << endl;
    cout << "sizeof long double = " << long_double_size << endl;
    cout << "sizeof size_t = " << size_t_size << endl;
}

