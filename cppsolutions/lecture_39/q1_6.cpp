// You are using GCC
#include <iostream>
using namespace std;

template <typename T>
void concat(T arr[], int l)
{
    if (l > 3)
    {
        T res[l / 2];
        cout << "Concatenated array: ";
        for (int i = 0; i < l / 2; i++)
        {
            res[i] = arr[i] + arr[l / 2 + i];
            cout << res[i] << " ";
        }

        cout << "\n";
    }
    else
    {
        T res = arr[0] + arr[2] + arr[1];
        cout << "Concatenated string: " << res;
    }
}

int main()
{
    int arr[6];
    string s[3];
    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }

    concat(arr, 6);

    for (int i = 0; i < 3; i++)
    {
        cin >> s[i];
    }

    concat(s, 3);

    return 0;
}