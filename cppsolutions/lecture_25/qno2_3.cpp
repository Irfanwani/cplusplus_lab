// You are using GCC
#include <iostream>
using namespace std;

class Grade
{
    int marks;
    string grade;

public:
    Grade(int marks)
    {
        this->marks = marks;
        float totalmarks = 500.0, percentage = (marks * 100) / totalmarks;

        if (percentage >= 90)
            this->grade = "A+";
        else if (percentage >= 80)
            this->grade = "A";
        else if (percentage >= 70)
            this->grade = "B";
        else if (percentage >= 60)
            this->grade = "C";
        else if (percentage >= 50)
            this->grade = "D";
        else
            this->grade = "F";
    }

    operator int()
    {
        return this->marks;
    }

    operator string()
    {
        return this->grade;
    }
};

int main()
{
    int num;
    cin >> num;
    Grade studentGrade(num);

    int marks = studentGrade;
    cout << "Marks: " << marks << endl;

    string grade = studentGrade;
    cout << "Grade: " << grade << endl;
    return 0;
}