#include <iostream>
#include <vector>

using namespace std;

vector<int> Merge(vector<int> as, vector<int> bs)
{
    int a = 0, b = 0;

    vector<int> cs(as.size() + bs.size());

    for (int c = 0; c < cs.size(); ++c) {
        if (a == as.size()) {
            cs[c] = bs[b];
            ++b;
        }
        else if (b == bs.size()) {
            cs[c] = as[a];
            ++a;
        }
        else if (as[a] <= bs[b]) {
            cs[c] = as[a];
            ++a;
        }
        else {
            cs[c] = bs[b];
            ++b;
        }
    }

    return cs;
}

vector<int> Take(vector<int> elems, int qty)
{
    vector<int> taken(elems.begin(), elems.begin() + qty);

    return taken;
}

vector<int> Drop(vector<int> elems, int qty)
{
    vector<int> leftover(elems.begin() + qty, elems.end());

    return leftover;
}

vector<int> Sort(vector<int> elems)
{
    if (elems.size() <= 1)
        return elems;

    vector<int> left = Sort(Take(elems, elems.size() / 2));
    vector<int> right = Sort(Drop(elems, elems.size() / 2));

    return Merge(left, right);
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
    vector<int> elems = { 4, 6, 1, 8, 7, 2, 5, 3 };

    cout << "Before sorting:" << endl << endl;

    PrintVector(elems);

    cout << endl << "After sorting:" << endl << endl;

    vector<int> sorted = Sort(elems);

    PrintVector(sorted);
}

