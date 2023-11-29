#include <iostream>
using namespace std;

class Result
{
    string examType, examStatus;

public:
    Result(string examType, string examStatus)
    {
        this->examType = examType;
        this->examStatus = examStatus;
    }
    void getResult()
    {
        cout << "Result details: " << this->examType << " " << this->examStatus << endl;
    }
};

class Student : public Result
{
    int regno, marks;
    string name;

public:
    Student(int regno, string name, int marks, string examType, string examStatus) : Result(examType, examStatus) // initilization list (e.g, `: Result(vals), another(vals), moreparams(new_ vals)`)
    {
        this->regno = regno;
        this->name = name;
        this->marks = marks;
    };
    void getStudentDetails()
    {
        cout << "Student details: Registration number: " << this->regno << " \nName: " << this->name << "\nMarks: " << this->marks << endl;
    }
};

int main()
{
    Student student(1, "Irfan", 40, "abc", "def");

    student.getResult();
    student.getStudentDetails();
    return 0;
}