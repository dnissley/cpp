#include <iostream>
#include <string>

using namespace std;

int main()
{
    string redacted = "This string is going to be redacted.";

    cout << "Before redaction: " << redacted << endl;

    int i = 0;
    while (i < redacted.size()) {
        redacted[i] = 'X';
        ++i;
    }

    cout << "After while-based redaction: " << redacted << endl;

    for (int j = 0; j < redacted.size(); ++j)
        redacted[j] = 'Y';

    cout << "After for-based redaction: " << redacted << endl;
}

