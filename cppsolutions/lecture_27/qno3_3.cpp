// You are using GCC
#include <iostream>
using namespace std;

class Parent
{
    void m1()
    {
        cout << "From parent m1()" << endl;
    }

    void m2(int a)
    {
        cout << a << endl;
    }

public:
    Parent(int a)
    {
        this->m1();
        this->m2(a);
    }
    void m1child()
    {
        cout << "From child m1()" << endl;
    }

    void m2child(int a)
    {
        cout << a << endl;
    }
};

class Child : private Parent
{
public:
    Child(int n, int a) : Parent(n)
    {
        this->m1child();
        this->m2child(a);
    }
};

int main()
{
    int a, b;
    cin >> a >> b;
    Child child(a, b);

    return 0;
}