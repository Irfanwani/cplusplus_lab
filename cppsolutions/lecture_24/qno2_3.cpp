// You are using GCC
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class Statistics
{

public:
    float mean(float *arr, int num)
    {
        float sum = 0;
        for (int i = 0; i < num; i++)
        {
            sum += *(arr + i);
        }

        return sum / num;
    }

    float stdDeviation(float *arr, int num)
    {
        float m = mean(arr, num), sum = 0;
        for (int i = 0; i < num; i++)
        {
            sum += pow((*(arr + i) - m), 2);
        }

        return sqrt(sum / num);
    }
};

int main()
{
    int num, x = 0;
    cin >> num;

    float *arr = new float[num];

    while (x < num && cin >> *(arr + x))
        x++;

    Statistics st;
    float stats = st.stdDeviation(arr, num);
    double standardDeviation = stats;

    cout << fixed << setprecision(2) << standardDeviation << endl;

    return 0;
}