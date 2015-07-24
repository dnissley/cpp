#include <cstddef>
#include <iostream>
#include <vector>

using std::size_t;
using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;

int main()
{
    int a[] = {1, 2, 3, 4, 5};

    cout << "Values in an array:" << endl;
    for (int *it = begin(a); it != end(a); ++it)
        cout << "    " << *it << endl;

    cout << endl;

    vector<int> v(begin(a), end(a));

    cout << "Values in a vector:" << endl;
    for (auto it = v.begin(); it != v.end(); ++it)
        cout << "    " << *it << endl;
}

