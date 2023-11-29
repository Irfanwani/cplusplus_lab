// You are using GCC
#include <iostream>
using namespace std;

class Bicycle
{
    int gears, speed;

public:
    Bicycle(int g, int s)
    {
        this->gears = g;
        this->speed = s;

        cout << this->gears << " " << this->speed << endl;
    }
};

class MountainBike : public Bicycle
{
    int seatheight;

public:
    MountainBike(int g, int s, int sh) : Bicycle(g, s), seatheight(sh)
    {
        cout << this->seatheight;
    }
};

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    MountainBike mb(a, b, c);

    return 0;
}