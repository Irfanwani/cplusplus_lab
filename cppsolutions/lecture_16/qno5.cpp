// You are using GCC
#include <iostream>
using namespace std;

class student
{
    int rollno;
    string name;
    double fee;

public:
    student(int, string, double);
    student(const student &s);
    void display();
};

student::student(const student &s)
{
    this->rollno = s.rollno;
    this->name = s.name;
    this->fee = s.fee;
};

student::student(int rollno, string name, double fee)
{
    this->rollno = rollno;
    this->name = name;
    this->fee = fee;
};

void student::display()
{
    cout << this->rollno << " " << this->name << " " << this->fee << endl;
};

int main()
{
    int rollno;
    string name;
    double fee;
    cin >> rollno;
    cin >> name;
    cin >> fee;

    cout << "Student Details:" << endl;
    student st(rollno, name, fee);
    st.display();
    cout << "Copied Student Details:" << endl;
    student st1(st);
    st1.display();

    return 0;
}