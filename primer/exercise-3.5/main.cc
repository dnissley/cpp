#include <iostream>
#include <string>

using namespace std;

int main()
{
    string together, input;
    while (cin >> input)
        together += input + " ";

    cout << endl << "ALL INPUT:" << endl << together << endl;
}

