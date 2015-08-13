#include <cstddef>
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::size_t;
using std::string;

int main(int argc, char **argv)
{
    cout << "The arguments provided to this program were:" << endl;

    for (size_t i = 1; i != argc; ++i)
        cout << argv[i] << endl;
}

