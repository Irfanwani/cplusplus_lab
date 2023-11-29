// You are using GCC
#include <iostream>
using namespace std;

template <class T>
class PrintOdd
{
public:
    void print(T arr[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                cout << arr[i] << " ";
        }
        cout << '\n';
    }
};

int main()
{
    int n;
    int *arr = new int[n];
    string *sarr = new string[n];

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> *(arr + i);
    }

    for (int i = 0; i < n; i++)
    {
        cin >> *(sarr + i);
    }

    PrintOdd<int> p;
    p.print(arr, n);

    PrintOdd<string> p2;
    p2.print(sarr, n);
    return 0;
}