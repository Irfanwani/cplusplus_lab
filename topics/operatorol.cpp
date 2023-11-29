#include <iostream>
using namespace std;

// Unary operator overloading
class A
{
    int x, y;
    bool a;

public:
    A()
    {
        this->x = 0;
        this->y = 0;
        this->a = true;
    }
    friend void operator++(A);

    void operator--()
    {
        this->y--;
        cout << "Value of y: " << this->y << endl;
    }

    void operator!()
    {
        this->a = !this->a;
        cout << "Value of boolean: " << this->a << endl;
    }
};

void operator++(A a)
{
    a.x++;
}

// Binary operator overloading
class B
{
    int a, b;

public:
    B()
    {
        a = 0;
        b = 0;
    }

    B(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    friend void operator+(B, B);
};

void operator+(B obj, B obj1)
{

    obj1.a += obj.a;
    obj1.b += obj.b;
    cout << obj1.a << "+i" << obj1.b << endl;
}

int main()
{
    // Unary operator
    A obj;
    operator++(obj);
    --obj;
    !obj;

    // Binary operator
    B obj2(4, 5), obj3(6, 7);
    obj2 + obj3;
    return 0;
}