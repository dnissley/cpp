#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int operation(int i, int j);

typedef decltype(operation) operation_func;

int main()
{
    vector<int (*)(int, int)> operations;
    vector<operation_func*> operations_using_decltype;
}

