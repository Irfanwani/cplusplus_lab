// You are using GCC
#include <iostream>
#include <cmath>
using namespace std;

class Demo
{
    int n;

public:
    Demo(int n)
    {
        cout << "Inside Constructor" << endl;
        this->n = n;
    }

    void display()
    {
        int sq = n * n, cube = n * n * n;
        float sqr = sqrt(n), cr = cbrt(n);
        cout << "square = " << sq << endl;
        cout << "square root = " << sqr << endl;
        cout << "cube = " << cube << endl;
        cout << "cube root = " << cr << endl;
    }

    ~Demo()
    {
        cout << "Inside Destructor" << endl;
    }
};

int main()
{
    int n;
    cin >> n;

    Demo demo(n);
    demo.display();

    return 0;
}