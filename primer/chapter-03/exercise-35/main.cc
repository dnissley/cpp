#include <iostream>

using namespace std;

int main()
{
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "Values in the array:" << endl;

    for (int *p = numbers; p != (numbers + 10); ++p)
        cout << *p << endl;

    cout << endl;

    cout << "Zeroing out the array..." << endl;

    for (int *p = begin(numbers); p != end(numbers); ++p)
        *p = 0;

    cout << endl;

    cout << "Values in the array:" << endl;

    for (int *p = begin(numbers); p != end(numbers); ++p)
        cout << *p << endl;

    cout << endl;
}

