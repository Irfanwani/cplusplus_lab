#include <iostream>
#include <iomanip>
using namespace std;

class Vehicle
{
public:
    float distance, time;
    Vehicle(float distance, float time)
    {
        this->distance = distance;
        this->time = time;
    }
};

class Car : Vehicle
{
public:
    Car(float d, float t) : Vehicle(d, t)
    {
        cout << fixed << setprecision(2) << d / t << " km/h" << endl;
    }
};

int main()
{
    float d, t;
    cin >> d >> t;
    Car car(d, t);
    return 0;
}