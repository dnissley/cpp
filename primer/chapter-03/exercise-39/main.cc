#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    string s1 = "hello";
    //string s2 = "asdf";
    string s2 = "hello";

    if (s1 == s2)
        cout << "The strings are equal." << endl;
    else
        cout << "The strings are not equal." << endl;

    char c1[] = "hello";
    //char c2[] = "asdf";
    char c2[] = "hello";

    if (strcmp(c1, c2) == 0)
        cout << "The c-style strings are equal." << endl;
    else
        cout << "The c-style strings are not equal." << endl;
}

