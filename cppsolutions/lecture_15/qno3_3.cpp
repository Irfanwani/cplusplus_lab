// You are using GCC
#include <iostream>
using namespace std;

class Person
{
    string name;
    int age;

public:
    Person()
    {
        cout << "Default constructor is called" << endl;
    }
    void display()
    {
        cout << "Name of current object: " << this->name << endl;
        cout << "Age of current object: " << this->age << endl;
    }

    void setName(string name)
    {
        this->name = name;
    }
    void setAge(int age)
    {
        this->age = age;
    }
};

int main()
{
    string name;
    int age;
    cin >> name;
    cin >> age;
    Person person;
    person.setName(name);
    person.setAge(age);
    person.display();

    return 0;
}