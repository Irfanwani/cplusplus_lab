// You are using GCC
#include <iostream>
#include <iomanip>
using namespace std;

class WeatherData
{
    float val;

public:
    WeatherData() {}
    WeatherData(float a)
    {
        this->val = a;
    }

    void operator+()
    {
        val = (val * (9.0 / 5.0)) + 32;
        cout << fixed << setprecision(1) << val << "°F" << endl;
    }

    void operator-()
    {
        val = -(val * (9.0 / 5.0)) + 32;
        cout << fixed << setprecision(1) << val << "°F" << endl;
    }
};

int main()
{
    float num;
    cin >> num;
    WeatherData wd(num);
    +wd;
    -wd;

    return 0;
}