// You are using GCC
#include <iostream>
#include <iomanip>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a){};

    virtual void display() = 0;
    virtual double calculateSalary() = 0;
};

class Faculty : public Person
{
    double hours, rate;

public:
    Faculty(string a, int b, float c, float d) : Person(a, b), hours(c), rate(d){};
    void display()
    {
        cout << "Faculty Information:" << endl;
        cout << "Name: " << this->name << endl;
        cout << "Age: " << this->age << endl;
        cout << "Teaching Hours: " << this->hours << endl;
        cout << "Salary: " << fixed << setprecision(2) << this->calculateSalary() << endl;
    }

    double calculateSalary()
    {
        return hours * rate;
    }
};

class Staff : public Person
{
    double salary;

public:
    Staff(string a, int b, float c) : Person(a, b), salary(c){};
    void display()
    {
        cout << "Staff Information:\n";
        cout << "Name: " << this->name << endl;
        cout << "Age: " << this->age << endl;
        cout << "Salary: " << fixed << setprecision(2) << this->calculateSalary() << endl;
    }

    double calculateSalary()
    {
        return salary;
    }
};

int main()
{
    string name;
    int age;
    float hours, rate, salary;
    cin >> name >> age >> hours >> rate;
    Faculty fac(name, age, hours, rate);
    fac.display();

    cin >> name >> age >> salary;
    Staff st(name, age, salary);
    st.display();

    return 0;
}