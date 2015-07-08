#include <iostream>

int main()
{
    int i, j;
    
    std::cout << "Enter two numbers separated by a space and hit enter: ";
    std::cin >> i >> j;

    if (i > j) {
        int temp = i;
        i = j;
        j = temp;
    }

    while (i <= j) {
        std::cout << i << std::endl;
        ++i;
    }

    return 0;
}

