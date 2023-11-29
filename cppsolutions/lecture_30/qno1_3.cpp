// You are using GCC
#include <iostream>
using namespace std;

class Person
{
    string name;

public:
    Person(string name)
    {
        this->name = name;
        cout << "Base class Person constructor called: " << name << endl;
    }
    ~Person()
    {
        cout << "Base class Person destructor called: " << this->name << endl;
    }
};

class Student : public virtual Person
{
    string name;

public:
    Student(string name) : Person(name)
    {
        this->name = name;
        cout << "Derived class Student constructor called: " << this->name << endl;
    }

    ~Student()
    {
        cout << "Derived class Student destructor called: " << this->name << endl;
    }
};

class Teacher : public Person
{
    string name;

public:
    Teacher(string name) : Person(name)
    {
        this->name = name;
        cout << "Derived class Teacher constructor called: " << this->name << endl;
    }
    ~Teacher()
    {
        cout << "Derived class Teacher destructor called: " << this->name << endl;
    }
};

double av(double a, double b)
{
    b = b ? b : 1;
    double res = a / b;
    return res;
}

int main()
{
    double totalstAge = 0, numstudents = 0;
    double totalTAge = 0, numteachers = 0;

    bool isStudent = true;

    string name;
    double age;
    while (true)
    {
        cin >> name;
        if (name == "q")
        {
            if (isStudent)
            {
                isStudent = false;
                continue;
            }
            else
            {
                break;
            }
        }
        cin >> age;
        if (isStudent)
        {
            Student s(name);
            totalstAge += age;
            numstudents++;
        }
        else
        {
            Teacher t(name);
            totalTAge += age;
            numteachers++;
        }
    }

    cout << "Average Student Age: " << av(totalstAge, numstudents) << endl;
    cout << "Average Teacher Age: " << av(totalTAge, numteachers) << endl;

    return 0;
}