// You are using GCC
#include <iostream>
using namespace std;

class Fruit
{
public:
    virtual void getTaste() = 0;
};

class Apple
{
public:
    void getTaste()
    {
        cout << "Sweet" << endl;
    }
};

class Banana
{
public:
    void getTaste()
    {
        cout << "Creamy" << endl;
    }
};

class Orange
{
public:
    void getTaste()
    {
        cout << "Tangy" << endl;
    }
};

class Grape
{
public:
    void getTaste()
    {
        cout << "Juicy" << endl;
    }
};

class Pineapple
{
public:
    void getTaste()
    {
        cout << "Sweet and Sour" << endl;
    }
};

int main()
{
    int n;
    cin >> n;

    if (n > 5)
    {
        cout << "Invalid choice, defaulting to generic fruit." << endl;
    }

    cout << "The taste of the fruit is: ";

    if (n == 1)
    {
        Apple a;
        a.getTaste();
    }
    else if (n == 2)
    {
        Banana b;
        b.getTaste();
    }
    else if (n == 3)
    {
        Orange o;
        o.getTaste();
    }
    else if (n == 4)
    {
        Grape g;
        g.getTaste();
    }
    else if (n == 5)
    {
        Pineapple p;
        p.getTaste();
    }
    else
    {
        cout << "Generic fruit taste" << endl;
    }

    return 0;
}