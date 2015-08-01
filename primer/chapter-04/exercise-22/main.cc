#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::vector;
using std::string; 

int main()
{
    vector<int> grades = {50, 60, 70, 80, 90, 100};

    cout << "If version:" << endl;

    for (auto g : grades) {
        string status = "fail";

        if (g > 90) status = "high pass";
        else if (g > 75) status = "pass";
        else if (g >= 60) status = "low pass";

        cout << "A grade of " << g << " results in a " << status << endl;
    }

    cout << endl;

    cout << "Conditional operator version:" << endl;

    for (auto g : grades) {
        string status = (g < 60) ? "fail" : (g < 76) ? "low pass" : (g < 91) ? "pass" : "high pass";
        cout << "A grade of " << g << " results in a " << status << endl;
    }

    cout << endl;
}

