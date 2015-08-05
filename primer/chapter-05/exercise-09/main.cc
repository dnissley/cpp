#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    unsigned a = 0, e = 0, i = 0, o = 0, u = 0;
    char input;

    while (cin >> input) {
        if (input == 'a')
            ++a;
        else if (input == 'e')
            ++e;
        else if (input == 'i')
            ++i;
        else if (input == 'o')
            ++o;
        else if (input == 'u')
            ++u;
    }

    cout << "a: " << a << endl;
    cout << "e: " << e << endl;
    cout << "i: " << i << endl;
    cout << "o: " << o << endl;
    cout << "u: " << u << endl;
}

