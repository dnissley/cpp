#include <cstddef>
#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::begin;
using std::end;
using std::vector;
using std::size_t;

int main()
{
    vector<int> v = {1, 2, 3 ,4, 5};

    cout << "Values in a vector:" << endl;
    for (auto n : v)
        cout << "    " << n << endl;

    cout << endl;

    constexpr unsigned n = 5;
    int a[n];

    for (size_t i = 0; i != n && i != v.size(); i++)
        a[i] = v[i];

    cout << "Values in an array:" << endl;
    for (auto it = begin(a); it != end(a); ++it)
        cout << "    " << *it << endl;
}

