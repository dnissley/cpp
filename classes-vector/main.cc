#include <iostream>
#include "Vector.h"

using namespace std;

int main()
{
    Vector v(6);
    v[0] = 100;
    v[1] = 200;
    cout << "made a vector with size " << v.size() << "\n";
    for (int x = 0; x < v.size(); ++x)
    {
        cout << "the vector has a value of " << v[x] << " at index " << x << "\n";
    }
}
