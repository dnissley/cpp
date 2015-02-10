#include <iostream>

using namespace std;

int A(int x, int y, int indent);
void print_indent(int s);

int main()
{
    cout << "A(1, 10) = " << A(1, 10, 0) << endl << endl;
    cout << "A(2, 4) = " << A(2, 4, 0) << endl << endl;
    cout << "A(3, 3) = " << A(3, 3, 0) << endl << endl;
    
    return 0;
}

int A(int x, int y, int indent)
{
    print_indent(indent);
    cout << "A(" << x << ", " << y << ")" << endl;

    if (y == 0)
    {
        print_indent(indent+1);
        cout << "0" << endl;
        return 0;
    }
    else if (x == 0)
    {
        print_indent(indent+1);
        cout << "2 * " << y << endl;
        return 2*y;
    }
    else if (y == 1)
    {
        print_indent(indent+1);
        cout << "2" << endl;
        return 2;
    }
    else
    {
        print_indent(indent+1);
        cout << "A(" << (x-1) << ", A(" << x << ", " << (y-1) << "))" << endl;
        return A(x-1, A(x, y-1, indent+1), indent+1);
    }
}

void print_indent(int s)
{
    for (int i = 0; i < s; i++)
    {
        cout << "    ";
    }
}
