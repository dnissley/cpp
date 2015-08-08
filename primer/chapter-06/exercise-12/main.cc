#include <iostream>

using std::cout;
using std::endl;

void swap(int &i, int &j) 
{
    int temp = i;
    i = j;
    j = temp;
}

int main()
{
    int i1 = 19, i2 = 26;
    
    cout << "Before swap:\ni1 = " << i1 << "\ni2 = " << i2 << endl;

    swap(i1, i2);

    cout << "After swap:\ni1 = " << i1 << "\ni2 = " << i2 << endl;
}

