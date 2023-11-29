// You are using GCC
#include <iostream>
using namespace std;

class Cube
{
    double length, breadth, height;

public:
    void setLen(double l)
    {
        this->length = l;
    }

    void setBreadth(double b)
    {
        this->breadth = b;
    }

    void setHeight(double h)
    {
        this->height = h;
    }

    double getVolume()
    {
        return this->breadth * this->length * this->height;
    }
};

int main()
{
    double arr[3];
    int x = 0;
    while (x < 3 && cin >> arr[x])
        x++;

    Cube cube;
    cube.setLen(arr[0]);
    cube.setBreadth(arr[1]);
    cube.setHeight(arr[2]);

    double res = cube.getVolume();

    cout << res << endl;

    return 0;
}