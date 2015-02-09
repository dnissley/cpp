#include <iostream>

using namespace std;

int add_v1(int a, int b, int preceding_incs);
int add_v2(int a, int b);

int main()
{
    int result;

    cout << "add_v1(5,3)" << endl << endl;
    result = add_v1(5,3,0);
    cout << endl << "result: " << result << endl << endl;

    cout << "add_v2(5,3)" << endl << endl;
    result = add_v2(5,3);
    cout << endl << "result: " << result << endl;
}

void print_preceding_incs(int preceding_incs)
{
    for (int i = 0; i < preceding_incs; i++)
    {
        cout << "1 + ";
    }
}

int add_v1(int a, int b, int preceding_incs)
{
    print_preceding_incs(preceding_incs);

    int c;

    if (a == 0)
    {
        c = b;
        cout << b << endl;
    }
    else
    {
        cout << "1 + add_v1(" << (a - 1) << ", " << b << ")" << endl;

        c = 1 + add_v1(--a, b, ++preceding_incs);

        print_preceding_incs(--preceding_incs);
        cout << c << endl;
    }

    return c;
}

int add_v2(int a, int b)
{
    cout << "add_v2(" << a << ", " << b << ")" << endl;

    int c;

    if (a == 0)
        c = b;
    else
        c = add_v2(--a, ++b);

    return c;
}

