#include <iostream>
#include <stdexcept>

using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;

int main()
{
beginning:
    try {
        float f1, f2;
        cin >> f1 >> f2;

        if (f2 == 0)
            throw runtime_error("You can't divide by zero.");

        cout << f1 / f2 << endl;
    }
    catch(runtime_error e) {
        cout << e.what() << endl << endl
             << "Try again? (y/n): " << endl;

        char try_again;
        cin >> try_again;

        if (try_again == 'y')
            goto beginning;
    }
}

