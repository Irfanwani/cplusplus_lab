// You are using GCC
#include <iostream>
using namespace std;

class Vehicle
{
public:
    void move(string s)
    {
        cout << s << endl;
    }
};

class MotorBike : public Vehicle
{
public:
    void move(string s)
    {
        cout << s << endl;
    }
};

int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    MotorBike mb;
    mb.Vehicle::move(s1);
    mb.move(s2);
    return 0;
}