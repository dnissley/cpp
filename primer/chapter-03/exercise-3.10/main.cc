#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string puncd = "We will, remove, the :truly; unecessary-- punctuation) from this string*";

    cout << "Before stripping punctuation: " << puncd << endl;

    cout << "After stripping punctuation: ";

    for (auto &c : puncd) {
        if (!ispunct(c))
            cout << c;
    }

    cout << endl;
}

