// You are using GCC
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Employee
{
public:
    string name;
    vector<string> projects;
    Employee(string name)
    {
        this->name = name;
        cout << "Creating employee: " << name << endl;
    }

    virtual ~Employee()
    {
        cout << "Destroying employee: " << this->name << endl;
    }
};

class Manager : public Employee
{
public:
    Manager(string name) : Employee(name)
    {
        cout << "Creating manager: " << name << endl;
    }

    ~Manager()
    {
        cout << "Destroying manager: " << name << endl;
    }
};

class Engineer : public Employee
{
public:
    Engineer(string name) : Employee(name)
    {
        cout << "Creating engineer: " << name << endl;
    }

    ~Engineer()
    {
        cout << "Destroying engineer: " << name << endl;
    }
};

class Technician : public Employee
{
public:
    Technician(string name) : Employee(name)
    {
        cout << "Creating technician: " << name << endl;
    }

    ~Technician()
    {
        cout << "Destroying technician: " << name << endl;
    }
};

int main()
{
    int numEmp, numProjects, projAssigned = 0;
    cin >> numEmp >> numProjects;

    string projects[numProjects], emp, des;
    char isAssigned;

    Employee *ptr = nullptr;

    vector<Employee *> employees;

    for (int i = 0; i < numProjects; i++)
    {
        cin >> projects[i];
    }

    for (int i = 0; i < numEmp; i++)
    {
        cin >> emp;
        cin >> des;

        if (des == "Manager")
        {
            ptr = new Manager(emp);
        }
        else if (des == "Engineer")
        {
            ptr = new Engineer(emp);
        }
        else if (des == "Technician")
        {
            ptr = new Technician(emp);
        }
        else
        {
            cout << "Invalid designation. Skipping employee." << endl;
            continue;
        }

        employees.push_back(ptr);

        for (int i = 0; i < numProjects; i++)
        {
            cin >> isAssigned;
            if (isAssigned == 'y' || isAssigned == 'Y')
            {
                ptr->projects.push_back(projects[i]);
            }
        }
    }
    cout << "\nProject Details:" << endl;
    for (int i = 0; i < numProjects; i++)
    {
        cout << "Project: " << projects[i] << endl;
        cout << "Assigned Employees:" << endl;
        int count = 0;
        for (const auto &employee : employees)
        {
            if (find(employee->projects.begin(), employee->projects.end(), projects[i]) != employee->projects.end())
            {
                count++;
                cout << "- " << employee->name << endl;
            }
        }
        cout << "Number of Employees Assigned: " << count << endl;
        cout << '\n';
    }

    for (auto &employee : employees)
    {
        delete (employee);
    }
    return 0;
}