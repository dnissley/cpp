#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int fact(int i) {
    if (i > 1)
        return i * fact(i - 1);
    else
        return 1;
}

void ask_fact() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The factorial of that number is "  << fact(num) << endl;
}

int main()
{
    ask_fact();
}

