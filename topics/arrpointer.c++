#include <iostream>
using namespace std;

int main()
{
    int x, *arr = new int[x], i, min, max;
    float avg = 0;
    cout << "Enter the size of the array: ";
    cin >> x;

    cout << "Enter the elements of the array: " << endl;

    for (i = 0; i < x; i++)
    {
        cin >> arr[i];
        avg += *(arr + i);
    }

    avg /= x;

    cout << "Average of the array elements is: " << avg << endl;

    min = *arr;
    max = *arr;

    for (i = 0; i < x; i++)
    {
        int el = *(arr + i);
        if (el < min)
        {
            min = el;
        }

        if (el > max)
        {
            max = el;
        }
    }

    cout << "Minimum number in the array is: " << min << endl;
    cout << "Maximum number in the array is: " << max << endl;

    return 0;
}