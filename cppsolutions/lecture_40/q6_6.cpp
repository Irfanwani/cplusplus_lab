// You are using GCC
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
    list<int> li;
    int num, x, sum = 0;
    cin >> num;

    if (num > 15)
    {
        cout << -1;
        return 0;
    }

    for (int i = 0; i < num; i++)
    {
        cin >> x;
        if (find(li.begin(), li.end(), x) == li.end())
        {
            li.push_back(x);
            sum += x;
        }
    }

    cout << "Sum of unique elements: " << sum << endl;
    return 0;
}