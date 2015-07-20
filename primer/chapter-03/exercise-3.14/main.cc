#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> storage;
    int input;

    while (cin >> input)
        storage.push_back(input);

    for (auto i : storage)
        cout << i << endl;
}

