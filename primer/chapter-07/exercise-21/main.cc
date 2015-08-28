#include <iostream>
#include <string>
#include "Sales_data.h"

using std::cin;
using std::cout;
using std::cerr;
using std::endl;

int main()
{
    Sales_data total(cin);         // variable to hold the running sum
    Sales_data trans;     // variable to hold data for the next transaction
    while(read(cin, trans)) {      //  read the remaining transactions
        if (total.isbn() == trans.isbn())   // check the isbns
            total.combine(trans);  // update the running total
        else {
            print(cout, total) << endl;  // print the results
            total = trans;               // process the next book
        }
    }
    print(cout, total) << endl;          // print the last transaction
}

