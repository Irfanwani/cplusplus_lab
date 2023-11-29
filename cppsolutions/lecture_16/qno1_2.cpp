// You are using GCC
#include <iostream>
using namespace std;

class Box
{
public:
    double width, height, depth;

    Box()
    {
        this->width = 0;
        this->height = 0;
        this->depth = 0;
    }
    Box(double w, double h, double d)
    {
        this->width = w;
        this->height = h;
        this->depth = d;
    }
    Box(double len)
    {
        this->width = len;
        this->height = len;
        this->depth = len;
    }

    double volume()
    {
        return this->width * this->height * this->depth;
    }
};

int main()
{
    Box box;
    cout << "Volume of mybox1 is " << box.volume() << endl;

    double w, h, d, l;
    cin >> w >> h >> d;
    cin >> l;
    Box b2(w, h, d);
    cout << "Volume of mybox2 is " << b2.volume() << endl;

    Box b3(l);
    cout << "Volume of mycube is " << b3.volume() << endl;

    return 0;
}