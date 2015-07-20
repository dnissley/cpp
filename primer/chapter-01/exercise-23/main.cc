#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item sum;

    std::cout << "Enter transactions: " << std::endl;

    if (std::cin >> sum) {
        Sales_item input;
        while (std::cin >> input) {
            if (input.isbn() == sum.isbn())
                sum += input;
            else {
                std::cout << "Total for isbn " << sum.isbn() << ": " << sum << std::endl;
                sum = input;
            }
        }
    }

    std::cout << "Total for isbn " << sum.isbn() << ": " << sum << std::endl;

    return 0;
}

