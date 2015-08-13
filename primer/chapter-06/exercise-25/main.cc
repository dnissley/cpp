#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main(int argc, char **argv)
{
    if (argc != 3)
        cout << "This program takes exactly two arguments. No more. No less." << endl;
    else {
        string temp = string(argv[1]) + " " + argv[2];
        cout << temp << endl;
    }
}

