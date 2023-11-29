// You are using GCC
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int num, x = 0, temp;
    cin >> num;

    int arr[num];
    ofstream file;
    file.open("sample.dat");

    while (x < num && cin >> arr[x])
    {
        x++;
    }

    for (int i = 0; i < num - 1; i++)
    {
        for (int j = i + 1; j < num; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < num; i++)
    {
        file << arr[i] << " ";
        cout << arr[i] << " ";
    }

    return 0;
}