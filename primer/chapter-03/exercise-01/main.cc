#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::cerr;

struct Sales_data {
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main()
{
    Sales_data total; // variable to hold data for the next transaction
    // read the first transaction and ensure that there are data to process
    double price = 0.0;
    if (cin >> total.bookNo >> total.units_sold >> price) {
        total.revenue = total.units_sold * price;
        Sales_data trans; // variable to hold the running sum
        // read and process the remaining transactions
        while (cin >> trans.bookNo >> trans.units_sold >> price) {
            trans.revenue = trans.units_sold * price;
            // if we're still processing the same book
            if (total.bookNo == trans.bookNo) {
                total.units_sold += trans.units_sold;
                total.revenue += trans.revenue; // update the running total
            }
            else {
                // print results for the previous book
                cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " " << total.revenue / total.units_sold << endl;
                total = trans;  // total now refers to the next book
            }
        }
        cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " " << total.revenue / total.units_sold << endl; // print the last transaction
    } else {
        // no input! warn the user
        cerr << "No data?!" << endl;
        return -1;  // indicate failure
    }
    return 0;
}
