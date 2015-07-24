#include <cstddef>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a1[] = {1, 2, 3, 4, 5};
    //int a2[] = {1, 2, 3};
    //int a2[] = {1, 2, 3, 4, 0};
    int a2[] = {1, 2, 3, 4, 5};
    
    auto a1len = end(a1) - begin(a1);
    auto a2len = end(a2) - begin(a2);

    if (a1len == a2len) {
        size_t i = 0;
        for (; i < a1len; ++i) {
            if (a1[i] != a2[i]) {
                cout << "There are elements of a1 and a2 that don't match. So they aren't equal." << endl;
                break;
            }
        }
        if (i == a1len)
            cout << "The arrays a1 and a2 are equal." << endl;
    }
    else
        cout << "The arrays a1 and a2 don't have the same length. So they aren't equal." << endl;
    
    vector<int> v1 = {1, 2, 3, 4, 5};
    //vector<int> v2 = {1, 2, 3};
    //vector<int> v2 = {1, 2, 3, 4, 0};
    vector<int> v2 = {1, 2, 3, 4, 5};

    if (v1.size() == v2.size()) {
        size_t i = 0;
        for (; i != v1.size(); ++i) {
            if (v1[i] != v2[i]) {
                cout << "There are elements of v1 and v2 that don't match. So they aren't equal." << endl;
                break;
            }
        }
        if (i == v1.size())
            cout << "The vectors v1 and v2 are equal." << endl;
    }
    else
        cout << "The vectors v1 and v2 don't have the same length. So they aren't equal." << endl;
}

