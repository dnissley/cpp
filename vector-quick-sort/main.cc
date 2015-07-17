#include <iostream>
#include <vector>
#include <cstdlib>
#include <time.h>
#include <utility>

using namespace std;

int RandomPivot(int l, int r)
{
    return l + (rand() % (r - l + 1));
}

int Partition(vector<int> &elems, int l, int r)
{
    int p = RandomPivot(l, r);

    swap(elems[l], elems[p]);

    int i = l + 1;

    for (int j = i; j <= r; ++j) {
        if (elems[j] < elems[l]) {
            swap(elems[i], elems[j]);
            ++i;
        }
    }

    swap(elems[l], elems[i - 1]);

    return i - 1;
}

void QuickSort(vector<int> &elems, int l, int r)
{
    if (l >= r) 
        return;

    int p = Partition(elems, l, r);

    QuickSort(elems, l, p - 1);
    QuickSort(elems, p + 1, r);
}

void QuickSort(vector<int> &elems)
{
    QuickSort(elems, 0, elems.size() - 1);
}

void PrintVector(vector<int> elems)
{
    for (int i = 0; i < elems.size(); ++i) {
        cout << elems[i];
        if (i + 1 != elems.size())
            cout << ", ";
    }
    cout << endl;
}

int main()
{
    srand(time(0));

    vector<int> elems = { 4, 6, 1, 8, 7, 2, 5, 3 };

    cout << "Before sorting:" << endl << endl;

    PrintVector(elems);

    QuickSort(elems);

    cout << endl << "After sorting:" << endl << endl;

    PrintVector(elems);
}

