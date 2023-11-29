// You are using GCC
#include <iostream>
#include <cmath>
using namespace std;

template <typename T>
class Shape
{
public:
    virtual void calc(T d) = 0;
};

template <typename T>
class Cube : public Shape<T>
{
public:
    void calc(T d)
    {
        cout << "Cube Details:\n";
        cout << "Cube with side length: " << d << endl;
        cout << "Surface area: " << 6 * d * d << endl;
    }
};

template <typename T>
class Circle : public Shape<T>
{
public:
    void calc(T d)
    {
        cout << "Circle Details:\n";
        cout << "Circle with radius: " << d << endl;
        cout << "Area: " << M_PI * d * d << endl;
    }
};

int main()
{
    int choice;
    cin >> choice;
    if (choice == 1)
    {
        Circle<float> circle;
        float r;
        cin >> r;
        circle.calc(r);
    }
    else if (choice == 2)
    {
        Cube<float> cube;
        float side;
        cin >> side;
        cube.calc(side);
    }
    else
    {
        cout << "Invalid shape type selected." << endl;
        return 0;
    }
    return 0;
}