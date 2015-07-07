#include <iostream>

using namespace std;

void printArray(int arr[], int size) {
  cout << "[";

  for (int i = 0; i < size; i++) {
    cout << arr[i];
    if (i != (size - 1))
      cout << ", ";
  }

  cout << "]" << endl;
}

void firstNSquares(int n) {
  int array [n];

  cout << "An array of the first " << n << " squares: ";

  for (int i = 0; i < n; i++) {
    array[i] = i * i;
  }

  printArray(array, n);
}

int main() {
  int a [3];

  cout << "Uninitialized array a: ";
  printArray(a, 3);

  a[0] = 1;
  a[1] = 2;
  a[2] = 3;

  cout << "Initialized array a: ";
  printArray(a, 3);

  int b [3] = { 1, 2, 3 };

  cout << "Pre-initialized array b: ";
  printArray(b, 3);

  firstNSquares(3);
  firstNSquares(6);
  firstNSquares(9);
  firstNSquares(12);

  return 0;
}
