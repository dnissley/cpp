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

    for (int i = 1; i < numbers.size(); ++i)
        cout << "The sum of elements " << i-1 << " and " << i << " is " << numbers[i-1] + numbers[i] << endl;

    cout << endl << "Sums of opposing elements: " << endl << endl;

    int n = numbers.size() / 2;
    int last = numbers.size() - 1;
    for (int i = 0; i < n; ++i)
        cout << "The sum of elements " << i << " and " << last-i << " is " << numbers[i] + numbers[last-i] << endl;
    if (numbers.size() % 2 == 1)
        cout << "The middle element " << n << " is " << numbers[n] << " which added to itself is " << 2*numbers[n] << endl;
}

