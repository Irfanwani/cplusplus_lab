// You are using GCC
#include <iostream>
#include <vector>
using namespace std;

template <class T>
T dotproduct(int n)
{
    vector<T> v1, v2;
    T x, sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v1.push_back(x);
    }

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v2.push_back(x);
        sum += v1.at(i) * v2.at(i);
    }

    return sum;
}

int main()
{
    int n;
    cin >> n;
    cout << "Dot product of integer vectors: " << dotproduct<int>(n) << endl;
    cout << "Dot product of floating-point vectors: " << dotproduct<float>(n) << endl;
    return 0;
}