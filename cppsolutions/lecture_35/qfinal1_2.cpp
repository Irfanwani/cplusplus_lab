// You are using GCC
#include <iostream>
using namespace std;

class Device
{
public:
    virtual int calc(int watts, int hours) = 0;
};

class Refrigerator : public Device
{
public:
    int calc(int watts, int hours)
    {
        cout << "Device Type: Refrigerator" << endl;
        return watts * hours;
    }
};

class AirConditioner : public Device
{
public:
    int calc(int watts, int hours)
    {
        cout << "Device Type: Air Conditioner" << endl;
        return watts * hours;
    }
};

int main()
{
    int num, total = 0;
    cin >> num;

    Refrigerator ref;
    AirConditioner ac;

    for (int i = 0; i < num; i++)
    {
        int type, watt, hours;
        cin >> type >> watt >> hours;
        if (type == 1)
        {
            total += ref.calc(watt, hours);
        }
        else
        {
            total += ac.calc(watt, hours);
        }
    }

    cout << "Total Energy Consumption: " << total << "watt-hours" << endl;

    return 0;
}