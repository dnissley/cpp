#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char c1[] = "12345";
    char c2[] = "67890";
    char c3[11];

    strcpy(c3, c1);
    strcat(c3, c2);

    cout << c3 << endl;
}

