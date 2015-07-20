#include <iostream>

int main() 
{
    // Syntax Error
    std::cout << "This string is missing a closing quote << std::endl;

    // Type Error (in g++ you gotta comment out the error above and below before the compile time error will be shown)
    int str = "You can't do that";

    // Declaration Error
    i = 0;
    int i;

    return 0;
}

