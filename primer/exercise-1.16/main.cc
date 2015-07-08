#include <iostream>

int main()
{
    int value, sum = 0, count = 0;

    for (; std::cin >> value; ++count)
        sum += value;

    std::cout << "The sum of the numbers entered is " << sum << std::endl;

    std::cout << "The average of the numbers entered is " << sum / count << std::endl;

    return 0;
}

