// You are using GCC
#include <iostream>
using namespace std;

class Parent
{
public:
    Parent()
    {
        cout << "Parent constructor" << endl;
    }

    ~Parent()
    {
        cout << "Parent destructor" << endl;
    }
};

class Child1 : public Parent
{
public:
    Child1(int num)
    {
        cout << "Child1 constructor: " << num << endl;
    }
    ~Child1()
    {
        cout << "Child1 destructor" << endl;
    }
};
class Child2 : public Parent
{
public:
    Child2(float num)
    {
        cout << "Child2 constructor: " << num << endl;
    }

    ~Child2()
    {
        cout << "Child2 destructor" << endl;
    }
};
class Child3 : public Parent
{
public:
    Child3(string a)
    {
        cout << "Child3 constructor: " << a << endl;
    }

    ~Child3()
    {
        cout << "Child3 destructor" << endl;
    }
};

int main()
{
    int a;
    float b;
    string c;

    cin >> a >> b >> c;

    Child1 c1(a);
    Child2 c2(b);
    Child3 c3(c);
    return 0;
}