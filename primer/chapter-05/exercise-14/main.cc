#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    string most_repeated_word;
    unsigned most_repeated_times = 1;

    string input;
    string last_input;
    unsigned repeated_times = 1;

    while (cin >> input) {
        if (input == last_input)
            ++repeated_times;
        else {
            if (repeated_times > most_repeated_times) {
                most_repeated_word = last_input;
                most_repeated_times = repeated_times;
            }
            repeated_times = 1;
        }

        last_input = input;
    }

    cout << "The most repeated word was '" << most_repeated_word << "'. It was repeated " << most_repeated_times << " times." << endl;
}

