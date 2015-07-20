#include <iostream>
#include <string>

struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main()
{
    Sales_data sd;

    sd.bookNo = "123ABC";
    sd.units_sold = 3;
    sd.revenue = 2.99;

    std::cout << "Book Number: " << sd.bookNo << std::endl
        << "Units Sold: " << sd.units_sold << std::endl
        << "Revenue: " << sd.revenue << std::endl;

    return 0;
}

