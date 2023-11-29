// test cases not passing
// You are using GCC
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class PopulationApproximation
{
    double apprx;

public:
    PopulationApproximation(float t0, float ipop, float growthrate, float steps, float tf)
    {
        this->apprx = ipop;
        while (t0 < tf)
        {

            this->apprx += growthrate * this->apprx * steps;
            t0 += steps;
        }
    }

    float getEstimation()
    {
        return this->apprx;
    }
};

class ApproximatePopulation
{
    float apprxpop;

public:
    ApproximatePopulation(float x)
    {
        this->apprxpop = x;
    }
    void operator<<(float t)
    {
        cout << "Approximate population: " << fixed << setprecision(4) << this->apprxpop << " at time " << t << endl;
    }
};

class TimeRange
{
public:
    float t0, t1;
    TimeRange(float t0, float t1)
    {
        this->t0 = t0;
        this->t1 = t1;
    }
};

int main()
{
    float t0, ipop, growthrate, steps, tf;
    cin >> t0;
    cin >> ipop;
    cin >> growthrate;
    cin >> steps;
    cin >> tf;

    TimeRange timerange(t0, tf);

    PopulationApproximation pa(t0, ipop, growthrate, steps, tf);

    float approximatePopulation = pa.getEstimation();

    ApproximatePopulation approxPopObj(approximatePopulation);

    approxPopObj << timerange.t1;
}