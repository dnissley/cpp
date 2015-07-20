#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    vector<string> words;
    string input;

    while (cin >> input)
        words.push_back(input);

    for (auto word : words) {
        for (auto &c : word) {
            c = toupper(c);
        }
    }

    for (int i = 0; i < words.size(); ++i) {
        cout << words[i] << " ";
        if ((i != 0 && i % 8 == 0) || i+1 == words.size())
            cout << endl;
    }
}

