#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <utility>
#include <math.h>

using namespace std;

string VectorNumberToString(vector<int> digits)
{
    stringstream s;

    for (int i = 0; i < digits.size(); ++i)
        s << digits[i];

    return s.str();
}

vector<int> IntToVectorNumber(int i)
{
    vector<int> digits;

    for (char d : to_string(i)) {
        digits.push_back(d-'0');
    }

    return digits;
}

vector<int> GradeSchoolAdd(vector<int> a, vector<int> b)
{
    int diff = a.size() - b.size();
    if (diff < 0) {
        swap(a, b);
        diff *= -1;
    }

    b.insert(b.begin(), diff, 0);

    vector<int> sum(a.size());
    
    int carried = 0;
    for (int i = a.size() - 1; i >= 0; --i) {
        sum[i] = a[i] + b[i] + carried;
        carried = sum[i] / 10;
        sum[i] = sum[i] % 10;
    }

    if (carried > 0)
        sum.insert(sum.begin(), carried);

    return sum;
}

vector<int> GradeSchoolMultiply(int i, vector<int> a)
{
    vector<int> product;
    int carried = 0;

    for (int j = a.size() - 1; j >= 0; --j) {
        int temp = i * a[j] + carried;
        carried = temp / 10;
        product.push_back(temp % 10);
    }

    if (carried > 0)
        product.push_back(carried);

    // We've been buliding the number backwards so put it down flip it and...
    reverse(product.begin(), product.end());
    // it

    return product;
}

vector<int> GradeSchoolMultiply(vector<int> a, vector<int> b) 
{
    vector<int> sum { 0 };

    for (int i = 0; i < a.size(); ++i) {
        vector<int> product = GradeSchoolMultiply(a[i], b);
        product.insert(product.end(), a.size() - i - 1, 0);
        sum = GradeSchoolAdd(product, sum);
    }

    return sum;
}

int main()
{
    vector<int> a = IntToVectorNumber(1234);
    vector<int> b = IntToVectorNumber(5678);
    vector<int> c = IntToVectorNumber(9999);

    vector<int> calculation = GradeSchoolMultiply(a, b);

    cout << VectorNumberToString(a) << " * " << VectorNumberToString(b) << " = " << VectorNumberToString(calculation) << endl;

    return 0;
}

