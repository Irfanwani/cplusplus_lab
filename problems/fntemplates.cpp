#include <iostream>
using namespace std;

template <class A>
A sum(int n, A &s)
{
    int x = 0;
    A *ptr = new A[n];
    while (x < n && cin >> *(ptr + 1))
    {
        s += *(ptr + 1);
        x++;
    }

    return s;
}

int main()
{
    int num;
    float s = 0;
    cin >> num;
    float res = sum(num, s);
    cout << res;
    return 0;
}