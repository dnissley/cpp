#include <iostream>
#include <string>
#include "Sales_data.h"

using std::cin;
using std::cout;
using std::cerr;
using std::endl;

int main()
{
    Sales_data default_constructed;
    Sales_data partially_constructed("isbn123");
    Sales_data completely_constructed("isbn123", 5, 6.99);
    Sales_data istream_constructed(cin);
}

