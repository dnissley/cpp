#include <iostream>
#define MY_NAME "dylan"

using namespace std;

void writeMultipleLines()
{
    cout << "hello first!" << endl << "hello second!" << endl << 
    "hello third!" << endl << "hello " <<  MY_NAME << "!" << endl;
}

int readNumber()
{
    int n;
    cin >> n;
    return n;
}

int add(int n1, int n2)
{
    return n1 + n2;
}

int main()
{
    writeMultipleLines();

    cout << "Give me a number: ";
    int a = readNumber();

    cout << "Give me another number: ";
    int b = readNumber();

    cout << "The numbers added up equal: " << add(a, b) << "!" << endl;

    return 0;
}

