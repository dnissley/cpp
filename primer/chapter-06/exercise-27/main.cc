#include <iostream>
#include <initializer_list>

using std::cout;
using std::endl;
using std::initializer_list;

int sum(initializer_list<int> ns)
{
    int r = 0;
    for (int n : ns) 
        r += n;
    return r;
}

int main(int argc, char **argv)
{
    cout << "The sum of the numbers 1, 2, 3, 4, 5, 6, 7, 8, and 9 is " << sum({1, 2, 3, 4, 5, 6, 7, 8, 9}) << endl;
}

