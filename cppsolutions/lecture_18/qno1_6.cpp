// You are using GCC
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int num, x = 0, max, min;
    cin >> num;
    int arr[num];
    ofstream file;
    file.open("sample.dat");

    while (x < num && cin >> arr[x])
    {
        if (x == 0)
        {
            max = arr[x];
            min = arr[x];
        }

        if (arr[x] > max)
            max = arr[x];
        if (arr[x] < min)
            min = arr[x];
        file << arr[x] << " ";
        x++;
    };

    cout << max << " " << min;
}