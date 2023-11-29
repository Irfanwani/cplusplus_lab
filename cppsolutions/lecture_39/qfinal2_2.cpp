// You are using GCC
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

template <typename T>
void calc(T arr[], int c)
{
    if (c < 2 || c > 3)
    {
        cout << "Invalid choice. Please enter 2 or 3." << endl;
    }
    else
    {
        double distance = sqrt(pow(arr[0] - arr[c], 2) + pow(arr[1] - arr[c + 1], 2) + (c == 2 ? 0 : pow(arr[2] - arr[c + 2], 2)));

        cout << "Distance between the points in " << (c == 2 ? "two" : "three") << "-dimensional space: " << fixed << setprecision(2) << distance << endl;
    }
}

int main()
{
    int choice;
    cin >> choice;
    int *arr = new int[choice * 2];
    for (int i = 0; i < choice * 2; i++)
    {
        cin >> *(arr + i);
    }

    calc(arr, choice);
    return 0;
}