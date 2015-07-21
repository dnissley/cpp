#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<int> v1;

    cout << "v1.size = " << v1.size() << ", values = {" << endl;
    for (auto it = v1.begin(); it != v1.end(); ++it)
        cout << "    " << *it << endl;
    cout << "}" << endl << endl;

    vector<int> v2(10);

    cout << "v2.size = " << v2.size() << ", values = {" << endl;
    for (auto it = v2.begin(); it != v2.end(); ++it)
        cout << "    " << *it << endl;
    cout << "}" << endl << endl;

    vector<int> v3(10, 42);

    cout << "v3.size = " << v3.size() << ", values = {" << endl;
    for (auto it = v3.begin(); it != v3.end(); ++it)
        cout << "    " << *it << endl;
    cout << "}" << endl << endl;

    vector<int> v4{10};

    cout << "v4.size = " << v4.size() << ", values = {" << endl;
    for (auto it = v4.begin(); it != v4.end(); ++it)
        cout << "    " << *it << endl;
    cout << "}" << endl << endl;

    vector<int> v5{10, 42};

    cout << "v5.size = " << v5.size() << ", values = {" << endl;
    for (auto it = v5.begin(); it != v5.end(); ++it)
        cout << "    " << *it << endl;
    cout << "}" << endl << endl;

    vector<string> v6{10};

    cout << "v6.size = " << v6.size() << ", values = {" << endl;
    for (auto it = v6.begin(); it != v6.end(); ++it)
        cout << "    \"" << *it << "\"" << endl;
    cout << "}" << endl << endl;

    vector<string> v7{10, "hi"};

    cout << "v7.size = " << v7.size() << ", values = {" << endl;
    for (auto it = v7.begin(); it != v7.end(); ++it)
        cout << "    \"" << *it << "\"" << endl;
    cout << "}" << endl << endl;
}

