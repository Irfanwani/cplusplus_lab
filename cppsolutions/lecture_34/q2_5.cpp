// You are using GCC
#include <iostream>
using namespace std;

class Vehicle
{
private:
    int numOfWheels;
    float maxSpeed;

public:
    Vehicle()
    {
        this->numOfWheels = 0;
        this->maxSpeed = 0;
    }

    virtual void setNumOfWheels(int wheels)
    {
        this->numOfWheels = wheels;
    };
    virtual void setMaxSpeed(float speed)
    {
        this->maxSpeed = speed;
    }

    virtual int getNumOfWheels()
    {
        return this->numOfWheels;
    }

    virtual float getMaxSpeed()
    {
        return this->maxSpeed;
    }

    virtual void timeToTravel(float distance) = 0;
};

class Car : public Vehicle
{
public:
    void timeToTravel(float distance)
    {
        cout << "Car has " << this->getNumOfWheels() << " wheels and can go up to " << this->getMaxSpeed() << " mph. It would take " << distance / this->getMaxSpeed() << " hours to travel " << distance << " miles at maximum speed." << endl;
    }
};

class Bicycle : public Vehicle
{
public:
    void timeToTravel(float distance)
    {
        cout << "Bicycle has " << this->getNumOfWheels() << " wheels and can go up to " << this->getMaxSpeed() << " mph. It would take " << distance / this->getMaxSpeed() << " hours to travel " << distance << " miles at maximum speed." << endl;
    }
};

class Boat : public Vehicle
{
public:
    void timeToTravel(float distance)
    {
        cout << "Boat has " << this->getNumOfWheels() << " wheels and can go up to " << this->getMaxSpeed() << " knots. It would take " << distance / (this->getMaxSpeed() * 1.151) << " hours to travel " << distance << " miles at maximum speed." << endl;
    }
};

int main()
{
    int a, b, c;
    float x, y, z;

    cin >> a >> x;
    cin >> b >> y;
    cin >> z;
    cin >> c;

    cout << "Vehicle Details:\n";

    Car car;
    car.setNumOfWheels(a);
    car.setMaxSpeed(x);
    car.timeToTravel(c);

    Bicycle bicycle;
    bicycle.setNumOfWheels(b);
    bicycle.setMaxSpeed(y);
    bicycle.timeToTravel(c);

    Boat boat;
    boat.setMaxSpeed(z);
    boat.timeToTravel(c);

    return 0;
}