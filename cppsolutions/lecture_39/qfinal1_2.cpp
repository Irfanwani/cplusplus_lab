// You are using GCC
#include <iostream>
using namespace std;

template <typename T>
class TwoMax
{
public:
    TwoMax(T arr[], int n)
    {
        T temp;

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] > arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        cout << arr[n - 1] << " " << arr[n - 2] << endl;
    }
};

int main()
{
    int s;
    cin >> s;

    int *arr = new int[s];
    float *farr = new float[s];

    for (int i = 0; i < s; i++)
    {
        cin >> *(arr + i);
    }

    for (int i = 0; i < s; i++)
    {
        cin >> *(farr + i);
    }

    TwoMax<int> tm(arr, s);
    TwoMax<float> tm2(farr, s);
    return 0;
}