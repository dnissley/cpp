#include <iostream>

int main()
{
    long result, input;
    unsigned u = 10, u2 = 42;
    int i = 10, i2 = 42;
    
    std::cout << "We have unsigned variables u = 10 and u2 = 42." << std::endl;
    std::cout << "We also have regular int variables i = 10 and i2 = 42." << std::endl;

    std::cout << "What do you think the value of u2 - u will be? ";
    std::cin >> input;

    result = u2 - u;
    if (result == input)
        std::cout << "Correct!" << std::endl;
    else
        std::cout << "Incorrect." << std::endl;

    std::cout << "(Hint for the next one. The max value of an unsigned integer on this machine is " << u - 11 << ".)" << std::endl;
    std::cout << "What do you think the value of u - u2 will be? ";
    std::cin >> input;

    result = u - u2;
    if (result == input)
        std::cout << "Correct!" << std::endl;
    else
        std::cout << "Incorrect." << std::endl;

    std::cout << "What do you think the value of i2 - i will be? ";
    std::cin >> input;

    result = i2 - i;
    if (result == input)
        std::cout << "Correct!" << std::endl;
    else
        std::cout << "Incorrect." << std::endl;

    std::cout << "What do you think the value of i - i2 will be? ";
    std::cin >> input;

    result = i - i2;
    if (result == input)
        std::cout << "Correct!" << std::endl;
    else
        std::cout << "Incorrect." << std::endl;

    std::cout << "What do you think the value of i - u will be? ";
    std::cin >> input;

    if (0 == input)
        std::cout << "Correct!" << std::endl;
    else
        std::cout << "Incorrect." << std::endl;

    std::cout << "What do you think the value of u - i will be? ";
    std::cin >> input;

    if (0 == input)
        std::cout << "Correct!" << std::endl;
    else
        std::cout << "Incorrect." << std::endl;

    return 0;
}

