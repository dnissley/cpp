#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    vector<string> text = {"Sentence 1.", "Sentence 2.", "Sentence 3.", "Sentence 4.", "", "Sentence 5.", "Sentence 6.", "..."};
    for (auto it = text.begin(); it != text.end() && !it->empty(); ++it) {
        for (auto it2 = it->begin(); it2 != it->end(); ++it2) {
            (*it2) = toupper(*it2);
        }
    }

    for (auto it = text.begin(); it != text.end(); ++it) {
        if (it->empty())
            cout << endl << endl;
        else
            cout << *it;
    }
    cout << endl << endl;
}

