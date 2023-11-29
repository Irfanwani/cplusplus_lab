// You are using GCC
#include <iostream>
using namespace std;

class Arithmetic
{
    float a, b;

public:
    Arithmetic()
    {
        a = 0;
        b = 0;
    };

    Arithmetic(float a, float b)
    {
        this->a = a;
        this->b = b;
    }

    void operator+(Arithmetic y)
    {
        float x = a + y.a;
        float z = b + y.b;
        cout << x << (z < 0 ? " - " : " + ") << (z < 0 ? -1 * z : z) << "i" << endl;
    }

    void operator-(Arithmetic y)
    {
        float x = a - y.a;
        float z = b - y.b;
        cout << x << (z < 0 ? " - " : " + ") << (z < 0 ? -1 * z : z) << "i" << endl;
    }
};

int main()
{
    float a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;

    Arithmetic art(a, b), art2(c, d);

    art + art2;
    art - art2;

    return 0;
}