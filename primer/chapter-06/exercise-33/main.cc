#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

void print_vector(const vector<int>::iterator it, const vector<int>::iterator done)
{
    if (it == done)
        return;
    
    cout << *it << endl;
    print_vector(it+1, done);
}

void print_vector(vector<int> v)
{
    print_vector(v.begin(), v.end());
}

int main()
{
    vector<int> v = {6, 7, 8, 9};
    print_vector(v);
}

