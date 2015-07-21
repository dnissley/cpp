#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numbers;
    int input;

    while (cin >> input)
        numbers.push_back(input);

    cout << endl << "Sums of adjacent elements: " << endl << endl;

    for (auto it = numbers.begin() + 1; it != numbers.end(); it += 1)
        cout << "The sum of elements ? and ? is " << *(it-1) + *it << endl;

    cout << endl << "Sums of opposing elements: " << endl << endl;

    auto first = numbers.begin();
    auto last = numbers.end() - 1;
    auto end = first + ((numbers.end() - first) / 2);
    for (auto it = first; it != end; it += 1)
        cout << "The sum of elements ? and ? is " << *it + *(first + (last - it)) << endl;
    if (numbers.size() % 2 == 1)
        cout << "The middle element ? is " << *end << " which added to itself is " << 2*(*end) << endl;
}

