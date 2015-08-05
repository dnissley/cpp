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
    unsigned ff = 0, fl = 0, fi = 0;
    string input;

    while (getline(cin, input)) {
        ++newlines;

        bool previous_f = false;

        for (auto c : input) {
            if (previous_f) {
                switch(c) {
                    case 'f':
                        ++ff;
                        break;
                    case 'i':
                        ++fi;
                        break;
                    case 'l':
                        ++fl;
                        break;
                }
            }

            switch (c) {
                case 'f':
                    previous_f = !previous_f;
                    break;
                default:
                    previous_f = false;
                    break;
            }

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
    cout << "ff: " << ff << endl;
    cout << "fi: " << fi << endl;
    cout << "fl: " << fl << endl;
}

