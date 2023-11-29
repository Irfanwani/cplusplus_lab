// You are using GCC
#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    double rate;
    int hours;

    double getsalary()
    {
        double total = 0;
        total += this->hours * this->rate;
        if (this->hours > 40)
        {
            total += (this->hours - 40) * (this->rate * 1.5);
        }

        return total;
    }

    void getdetails()
    {
        cout << "Employee Name: " << this->name << endl;
        cout << "Salary: " << this->getsalary() << endl;
    }
};

int main()
{
    int empnum;
    cin >> empnum;

    Employee emp[empnum];

    cout << "Employee Information:" << endl;
    for (int i = 0; i < empnum; i++)
    {
        cin >> emp[i].name >> emp[i].rate >> emp[i].hours;
        emp[i].getdetails();
    }

    return 0;
}