#include <cstddef>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    constexpr unsigned n = 10;
    vector<int> a;

    for (size_t i = 0; i != n; ++i)
        a.push_back(i);

    for (size_t i = 0; i != n; ++i)
        cout << "Index " << i << " of a is " << a[i] << endl;

    int b[n];

    for (size_t i = 0; i != n; ++i)
        b[i] = a[i];

    for (size_t i = 0; i != n; ++i)
        cout << "Index " << i << " of b is " << b[i] << endl;
}
