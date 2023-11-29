// You are using GCC
#include <iostream>
using namespace std;

class Demo
{
    int num1, num2;

public:
    Demo(int n1, int n2)
    {
        this->num1 = n1;
        this->num2 = n2;
        cout << "Inside Constructor" << endl;
    }

    ~Demo()
    {
        cout << "Inside Destructor" << endl;
    }

    void display()
    {
        cout << this->num1 << endl;
        cout << this->num2 << endl;
    }
};

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    Demo demo(n1, n2);
    demo.display();

    return 0;
}