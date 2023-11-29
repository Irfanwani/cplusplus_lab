// You are using GCC
#include <iostream>
using namespace std;

class A
{
public:
    void func(int &num)
    {
        num *= 2;
    }
};

class B
{
public:
    void func(int &num)
    {
        num *= 3;
    }
};

class C
{
public:
    void func(int &num)
    {
        num *= 5;
    }
};

class D : public A, public B, public C
{
    int n, a, b, c;

public:
    D()
    {
        this->n = 1.0;
        this->a = 0;
        this->b = 0;
        this->c = 0;
    }
    void update_val(int &num)
    {
        cout << "Value = " << num << endl;
        while (n < num)
        {
            int x = num / n;
            if (x % 5 == 0)
            {
                C::func(n);
                c++;
                x = num / n;
            }
            if (x % 3 == 0)
            {
                B::func(n);
                b++;
                x = num / n;
            }
            if (x % 2 == 0)
            {
                A::func(n);
                a++;
                x = num / n;
            }
        }

        cout << "A's func called " << a << " times" << endl;
        cout << "B's func called " << b << " times" << endl;
        cout << "C's func called " << c << " times" << endl;
    }
};

int main()
{
    int num;
    cin >> num;

    D d;
    d.update_val(num);

    return 0;
}