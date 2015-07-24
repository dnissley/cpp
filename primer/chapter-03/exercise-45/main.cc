#include <iostream>
#include <cstddef>

using std::size_t;
using std::cout;
using std::endl;
using std::begin;
using std::end;

int main()
{
    int ia[3][4] = {    // three elements; each element is an array of size 4
        {0, 1, 2, 3},   // initializers for the row indexed by 0
        {4, 5, 6, 7},   // initializers for the row indexed by 1
        {8, 9, 10, 11}  // initializers for the row indexed by 2
    };

    cout << "Using a range for:" << endl;
    for (auto &row : ia) {
        for (auto &col : row)
            cout << col << " . ";
        cout << endl;
    }
    cout << endl;
    
    cout << "Using subscripts:" << endl;
    for (auto i = 0; i != 3; ++i) {
        for (auto j = 0; j != 4; ++j)
            cout << ia[i][j] << " . ";
        cout << endl;
    }
    cout << endl;

    cout << "Using pointers:" << endl;
    for (auto *p = begin(ia); p != end(ia); ++p) {
        for (auto q = begin(*p); q != end(*p); ++q)
            cout << *q << " . ";
        cout << endl;
    }
}

