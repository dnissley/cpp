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

    grade_index = (grade_index < 0) ? 0 : (grade_index > 4) ? 4 : grade_index;

    string grade = grades[grade_index];

    grade += (grade == "F") ? "" : signs[sign_index];

    cout << "The grade for a score of " << score << " is " << grade << endl;
}

