#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<int> v1;

    cout << "v1.size = " << v1.size() << endl << endl;

    vector<int> v2(10);

    cout << "v2.size = " << v2.size() << ", values = {" << endl;
    for (int i : v2)
        cout << "    " << i << endl;
    cout << "}" << endl << endl;

    vector<int> v3(10, 42);

    cout << "v3.size = " << v3.size() << ", values = {" << endl;
    for (int i : v3)
        cout << "    " << i << endl;
    cout << "}" << endl << endl;

    vector<int> v4{10};

    cout << "v4.size = " << v4.size() << ", values = {" << endl;
    for (int i : v4)
        cout << "    " << i << endl;
    cout << "}" << endl << endl;

    vector<int> v5{10, 42};

    cout << "v5.size = " << v5.size() << ", values = {" << endl;
    for (int i : v5)
        cout << "    " << i << endl;
    cout << "}" << endl << endl;

    vector<string> v6{10};

    cout << "v6.size = " << v6.size() << ", values = {" << endl;
    for (string s : v6)
        cout << "    \"" << s << "\"" << endl;
    cout << "}" << endl << endl;

    vector<string> v7{10, "hi"};

    cout << "v7.size = " << v7.size() << ", values = {" << endl;
    for (string s : v7)
        cout << "    \"" << s << "\"" << endl;
    cout << "}" << endl << endl;
}

