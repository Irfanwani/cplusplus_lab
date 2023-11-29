// You are using GCC
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class Vector
{
    float length;

public:
    Vector()
    {
        this->length = 0;
    }

    void magnitude(float x, float y, float z)
    {
        this->length = sqrt(x * x + y * y + z * z);
    }

    operator float()
    {
        return this->length;
    }
};

int main()
{
    float x, y, z;
    cin >> x;
    cin >> y;
    cin >> z;

    Vector vector;
    vector.magnitude(x, y, z);
    float magnitude = vector;
    cout << fixed << setprecision(2) << magnitude << endl;

    return 0;
}