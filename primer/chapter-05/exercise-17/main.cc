#include <cstddef>
#include <iostream>
#include <vector>
#include <utility>

using std::size_t;
using std::cout;
using std::endl;
using std::vector;
using std::swap;

int main()
{
    vector<int> v1 {1, 2, 3};
    vector<int> v2 {1, 2, 3, 4, 5, 6, 7, 8};

    if (v1.size() > v2.size()) swap(v1, v2);

    bool prefix = true;
    for (size_t i = 0; i != v1.size(); ++i) {
        if (v1[i] != v2[i]) {
            prefix = false;
            break;
        }
    }

    cout << "One of these vectors " << (prefix ? "is" : "isn't") << " a prefix of the other." << endl;
}

