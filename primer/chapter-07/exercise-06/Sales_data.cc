#include <string>
#include <iostream>
#include <istream>
#include <ostream>
#include "Sales_data.h"

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

double Sales_data::avg_price() const
{
    if (units_sold > 0)
        return revenue / units_sold;
    else
        return 0;
}

std::istream& read(std::istream &is, Sales_data &item)
{
    is >> item.bookNo >> item.units_sold >> item.revenue;
    item.revenue *= item.units_sold;
    return is;
}

std::ostream& print(std::ostream &os, const Sales_data &item)
{
    os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avg_price() << std::endl;
    return os;
}

Sales_data add(const Sales_data &rhs, const Sales_data &lhs)
{
    Sales_data sum = rhs;
    sum.combine(lhs);
    return sum;
}

