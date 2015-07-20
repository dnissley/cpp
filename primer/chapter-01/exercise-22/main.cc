#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item sum;

    std::cout << "Enter transactions: " << std::endl;

    if (std::cin >> sum) {
        Sales_item input;
        while (std::cin >> input)
            sum += input;
    }

    std::cout << sum << std::endl;

    return 0;
}

