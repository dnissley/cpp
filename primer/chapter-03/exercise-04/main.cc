#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1, str2;

    cout << "Input two strings separated by a space and hit enter." << endl;

    cin >> str1 >> str2;

    cout << endl << "WHICH STRING IS 'BIGGER'?" << endl;
    
    if (str1 > str2)
        cout << "The first string is 'bigger' than the second." << endl;
    else if (str2 > str1)
        cout << "The second string is 'bigger' than the first." << endl;
    else
        cout << "The strings are equal." << endl;

    cout << endl << "WHICH STRING IS LONGER?" << endl;

    if (str1.size() > str2.size())
        cout << "The first string is longer." << endl;
    else if (str1.size() < str2.size())
        cout << "The second string is longer." << endl;
    else
        cout << "The strings are the same length." << endl;

}

