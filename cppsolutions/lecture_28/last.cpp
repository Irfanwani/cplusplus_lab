// You are using GCC
#include <iostream>
using namespace std;

class Marks
{
    int rollno;
    string name;

public:
    inline static int marks = 0;
    inline static float totalmarks = 0;
    Marks(){};
    Marks(int rn, string n) : rollno(rn), name(n)
    {
        cout << "Roll Number: " << this->rollno << endl;
        cout << "Name: " << this->name << endl;
    }

    Marks(int m)
    {
        marks += m;
        totalmarks += m;
    }

    void gettotalmarks()
    {
        cout << "Total marks: " << marks << "\n"
             << endl;
        marks = 0;
    }
};

class Physics : public Marks
{
public:
    Physics() {}
    Physics(int m) : Marks(m) {}
};
class Chemistry : public Marks
{
public:
    Chemistry() {}
    Chemistry(int m) : Marks(m){};
};
class Maths : public Marks
{
public:
    Maths() {}
    Maths(int m) : Marks(m){};
};

int main()
{
    int num, a, b, x;
    string name;

    cin >> num;

    Marks *stds = new Marks[num];
    Physics *p = new Physics[num];
    Chemistry *c = new Chemistry[num];
    Maths *m = new Maths[num];

    for (int i = 0; i < num; i++)
    {
        cin >> name >> a >> b >> x;
        stds[i] = Marks(i + 1, name);
        p[i] = Physics(a);
        c[i] = Chemistry(b);
        m[i] = Maths(x);

        stds[i].gettotalmarks();
    }

    cout << "Total marks of the class is: " << Marks::totalmarks << endl;
    cout << "The average marks of the class is: " << Marks::totalmarks / num << endl;
    return 0;
}