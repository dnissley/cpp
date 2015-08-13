#include <iostream>
#include "print.h"

using std::size_t;
using std::cout;
using std::endl;

void print(const int *beg, const int *end)
{
    cout << "[ ";
    while (beg != end) {
        cout << *beg++;
        if (beg != end)
            cout << ", ";
    }
    cout << " ]" << endl;
}

void print(const int *arr, size_t length)
{
    cout << "[ ";
    for (int i = 0; i != length; ++i) {
        cout << arr[i];
        if (i != length-1)
            cout << ", ";
    }
    cout << " ]" << endl;
}

