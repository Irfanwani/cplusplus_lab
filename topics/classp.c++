#include <iostream>
using namespace std;

class Student
{
public:
    int roll_no, age;
    string name;

    Student()
    {
        cout << "Enter your roll number: ";
        cin >> roll_no;
        cout << "Enter your age: ";
        cin >> age;
        cout << "Enter your name: ";
        cin >> name;
    }
};

int main()
{
    Student student;

    int *rptr = &student.roll_no, *ageptr = &student.age;
    string *nameptr = &student.name;

    cout << "Your roll number is: " << *rptr << endl;
    cout << "Your age is: " << *ageptr << endl;
    cout << "Your name is: " << *nameptr << endl;

    return 0;
}