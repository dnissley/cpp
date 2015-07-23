#include <cstddef>
#include <iostream>

using namespace std;

int main()
{
    constexpr unsigned n = 10;
    int a[n];

    for (size_t i = 0; i != n; ++i)
        a[i] = i;

    for (size_t i = 0; i != n; ++i)
        cout << "Index " << i << " is " << a[i] << endl;
}
