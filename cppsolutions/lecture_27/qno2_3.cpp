// You are using GCC
#include <iostream>
using namespace std;

class Vehicle
{
public:
    float distance, tm;
    Vehicle(float d, float t) : distance(d), tm(t){};
};

class Car : public Vehicle
{
public:
    Car(float distance, float tm) : Vehicle(distance, tm)
    {
        cout << "Speed of car: " << distance / tm << " km/hr" << endl;
    }
};

int main()
{
    float distance, tm;
    cin >> distance >> tm;
    Car car(distance, tm);
    return 0;
}