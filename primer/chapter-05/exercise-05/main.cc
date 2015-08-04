#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    string grades[] = {"F", "D", "C", "B", "A"};
    string signs[] = {"-", "-", "-", "", "", "", "", "", "+", "+"};

    int score = 99;

    int grade_index = (score - 50) / 10;
    int sign_index = score % 10;

    if (grade_index < 0)
        grade_index = 0;
    else if (grade_index > 4)
        grade_index = 4;

    string grade = grades[grade_index];

    if (grade != "F")
        grade += signs[sign_index];

    cout << "The grade for a score of " << score << " is " << grade << endl;
}

