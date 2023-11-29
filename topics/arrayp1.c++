#include <iostream>
using namespace std;

int main()
{
    int arr[10], i;
    for (i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    cout << "Elements of the array are: " << endl;
    for (i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }

    cout << "Elements of the array in reverse order: " << endl;
    for (i = 9; i >= 0; i--)
    {
        cout << arr[i] << endl;
    }

    cout << "Elements at even positions: " << endl;

    for (i = 1; i < 10; i += 2)
    {
        cout << arr[i] << endl;
    }

    cout << "Elements at odd positions: " << endl;

    for (i = 0; i < 10; i += 2)
    {
        cout << arr[i] << endl;
    }

    cout << "Sum of all elements: ";
    int sum = 0;
    for (i = 0; i < 10; i++)
    {
        sum += arr[i];
    }

    cout << sum << endl;

    return 0;
}