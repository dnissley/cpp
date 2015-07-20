#include <iostream>
#include <string>

using namespace std;

int main()
{
    string redacted = "This string is going to be redacted.";

    cout << "Before redaction: " << redacted << endl;

    // Defining c as a char means that the value of each character in redacted will be copied to it instead of referenced.
    for (char c : redacted)
        c = 'X';

    cout << "After redaction: " << redacted << endl;
}

