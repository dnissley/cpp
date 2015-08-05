#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string input;
    string last_input;
    bool repeated = false;

    while (cin >> input) {
        if (input == last_input) {
            repeated = true;
            break;
        }
        last_input = input;
    }

    if (repeated)
        cout << "There was a repetition of the word '" << input << "'" << endl;
    else
        cout << "There was no repetition of any words." << endl;
}

