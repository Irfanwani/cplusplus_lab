// You are using GCC
#include <iostream>
using namespace std;

class Demo
{
    int num1, num2;

public:
    Demo(int n1, int n2) : num1(n1), num2(n2)
    {
        cout << "Inside Demo Constructor" << endl;
    };
    int getNum1()
    {
        return num1;
    }

    int getNum2()
    {
        return num2;
    }

    virtual void display() = 0;

    ~Demo()
    {
        cout << "Inside Demo Destructor" << endl;
    }
};

class Derived : public Demo
{
public:
    Derived(int n1, int n2) : Demo(n1, n2)
    {
        cout << "Inside Derived Constructor" << endl;
    }

    void display()
    {
        cout << "Derived - Number 1: " << getNum1() << endl;
        cout << "Derived - Number 2: " << getNum2() << endl;
    }

    ~Derived()
    {
        cout << "Inside Derived Destructor" << endl;
    }
};

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    Derived d(n1, n2);
    d.display();

    return 0;
}