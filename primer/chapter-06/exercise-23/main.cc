#include <iterator>
#include "print.h"

using std::begin;
using std::end;

int main()
{
    int i = 0, j[2] = {0, 1};
    print(&i, &i+1);
    print(&i, 1);
    print(begin(j), end(j));
    print(j, 2);
}

