// You are using GCC
#include <iostream>
using namespace std;

class Student;

class Course
{
    string name;
    int grade;
    Student *student;

public:
    Course(){};
    Course(string name, int grade, Student *student)
    {
        this->name = name;
        this->grade = grade;
        this->student = student;
    }

    int getGrades()
    {
        return grade;
    }

    string getName()
    {
        return name;
    }
};

class Student
{
public:
    string name;
    Course *courses;
    Student(){};
    Student(string name, int cnum)
    {
        this->name = name;
        courses = new Course[cnum];
    }
    void enroll(Course &course, int i)
    {
        courses[i] = course;
    }
};

int main()
{
    string sname, cname;
    int subnum, grades;
    getline(cin, sname);
    cin >> subnum;

    Student *st = new Student(sname, subnum);
    Course *courses = new Course[subnum];

    for (int i = 0; i < subnum; i++)
    {
        cin >> cname >> grades;
        courses[i] = Course(cname, grades, st);
        st->enroll(courses[i], i);
    }

    cout << "Name: " << st->name << endl;
    cout << "Courses:\n";
    int x = 0;
    while (x < subnum)
    {
        cout << st->courses[x].getName() << ": " << st->courses[x].getGrades() << endl;
        x++;
    }
    return 0;
}