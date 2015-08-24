#include <iostream>
#include <string>
#include "Sales_data.h"

using std::cin;
using std::cout;
using std::cerr;
using std::endl;

int main()
{
    Sales_data total; // variable to hold data for the next transaction

    // read the first transaction and ensure that there are data to process
    if (read(cin, total)) {
        Sales_data trans; // variable to hold the running sum

        // read and process the remaining transactions
        while (read(cin, trans)) {
            // if we're still processing the same book
            if (total.bookNo == trans.bookNo)
                total.combine(trans);
            else {
                // print results for the previous book
                print(cout, total);
                total = trans;  // total now refers to the next book
            }
        }
        print(cout, total);
    } else {
        // no input! warn the user
        cerr << "No data?!" << endl;
        return -1;  // indicate failure
    }
    return 0;
}

