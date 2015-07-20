#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> storage;
    string input;

    while (cin >> input)
        storage.push_back(input);

    for (auto str : storage)
        cout << str << endl;
}

