#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> elems = {1, 2, 3, 4, 5, 6, 7};

    for (auto it = elems.begin(); it != elems.end(); ++it)
        *it = (*it % 2) ? (*it)*2 : *it;

    for (auto n : elems)
        cout << n << endl;
}

