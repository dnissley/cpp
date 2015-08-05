#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    unsigned a = 0, e = 0, i = 0, o = 0, u = 0;
    char input;

    while (cin >> input) {
        switch (input) {
            case 'a':
            case 'A':
                ++a;
                break;
            case 'e':
            case 'E':
                ++e;
                break;
            case 'i':
            case 'I':
                ++i;
                break;
            case 'o':
            case 'O':
                ++o;
                break;
            case 'u':
            case 'U':
                ++u;
                break;
        }
    }

    cout << "a: " << a << endl;
    cout << "e: " << e << endl;
    cout << "i: " << i << endl;
    cout << "o: " << o << endl;
    cout << "u: " << u << endl;
}

