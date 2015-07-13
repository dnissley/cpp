#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

vector<vector<int> > StandardMultiply(vector<vector<int> > a, vector<vector<int> > b) 
{
    int n = a.size();
    vector<vector<int> > c(n, vector<int>(n));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    return c;
}

//vector<vector<int> > StrassenMultiply(vector<vector<int> > a, vector<vector<int> > b)
//{
//    // TODO
//}

void PrintMatrix(vector<vector<int> > m) 
{
    int n = m.size();

    vector<int> colwidth(n);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int digits = to_string(m[i][j]).length();
            if (colwidth[j] < digits)
                colwidth[j] = digits;
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << "| ";
        for (int j = 0; j < n; ++j) {
            cout << setw(colwidth[j]) << m[i][j] << " ";
        }
        cout << "|" << endl;
    }
}

int main() 
{
    vector<vector<int> > a(4, vector<int>(4));
    
    a[0][0] = 10;
    a[0][1] = 20;
    a[0][2] = 30;
    a[0][3] = 40;
    a[1][0] = 50;
    a[1][1] = 60;
    a[1][2] = 70;
    a[1][3] = 80;
    a[2][0] = 90;
    a[2][1] = 10;
    a[2][2] = 11;
    a[2][3] = 12;
    a[3][0] = 13;
    a[3][1] = 14;
    a[3][2] = 15;
    a[3][3] = 16;

    vector<vector<int> > b(2, vector<int>(2));

    b[0][0] = 6;
    b[0][1] = 8;
    b[1][0] = 7;
    b[1][1] = 5;
    
    vector<vector<int> > c = StandardMultiply(a, a);

    PrintMatrix(c);

    return 0;
}

