#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

int main()
{
    unsigned a = 0, e = 0, i = 0, o = 0, u = 0;
    unsigned tabs = 0, spaces = 0, newlines = 0;
    string input;

    while (getline(cin, input)) {
        ++newlines;

        for (auto c : input) {
            switch (c) {
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
                case '\t':
                    ++tabs;
                    break;
                case ' ':
                    ++spaces;
                    break;
            }
        }
    }

    cout << "a: " << a << endl;
    cout << "e: " << e << endl;
    cout << "i: " << i << endl;
    cout << "o: " << o << endl;
    cout << "u: " << u << endl;
    cout << "tabs: " << tabs << endl;
    cout << "spaces: " << spaces << endl;
    cout << "newlines: " << newlines << endl;
}

