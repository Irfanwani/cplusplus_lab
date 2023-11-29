// You are using GCC
#include <iostream>
using namespace std;

class Professor
{
    int id, salary;
    string name;

public:
    Professor() {}
    Professor(int id, int salary, string name)
    {
        this->id = id;
        this->salary = salary;
        this->name = name;
    }
    void display()
    {
        if (this->salary >= 20000)
        {
            cout << this->id << " " << this->name << " " << this->salary << endl;
        }
    }
};

int main()
{
    int num;
    cin >> num;
    Professor *prof = new Professor[num];
    int id, salary;
    string name;

    for (int i = 0; i < num; i++)
    {
        cin >> id >> name >> salary;
        prof[i] = Professor(id, salary, name);
        prof[i].display();
    }
    return 0;
}