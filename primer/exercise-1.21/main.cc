#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item first;
    Sales_item second;
    
    std::cin >> first;
    std::cin >> second;

    std::cout << first + second << std::endl;

    return 0;
}

