#include <iostream>
#include <string>

using namespace std;

int main()
{
    string redacted = "This string is going to be redacted.";

    cout << "Before redaction: " << redacted << endl;

    for (auto &c : redacted)
        c = 'X';

    cout << "After redaction: " << redacted << endl;
}

