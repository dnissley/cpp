#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    bool keep_going;
    do {
        cout << "Give me two strings: ";

        string s1, s2;
        cin >> s1 >> s2;

        if (s1 < s2)
            cout << s1 << " < " << s2 << endl;
        else
            cout << s1 << " >= " << s2 << endl;

        cout << "Do it again? (y/n) ";
        cin >> s1;

        if (s1 == "y" || s1 == "Y" || s1 == "yes" || s1 == "Yes" || s1 == "YES")
            keep_going = true;
        else
            keep_going = false;

    } while (keep_going);
}

