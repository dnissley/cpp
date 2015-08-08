#include <iostream>

using std::cout;
using std::endl;

void reset(int &i)
{
    i = 0;
}

int main()
{
    int i = 99;

    cout << "Before reset i = " << i << endl;

    reset(i);
    
    cout << "After reset i = " << i << endl;
}

