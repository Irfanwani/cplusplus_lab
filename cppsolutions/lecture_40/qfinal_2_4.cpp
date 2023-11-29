// You are using GCC
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n < 1 || n > 15)
    {
        cout << "-1";
        return 0;
    }

    vector<int> marks;
    vector<int> pos;
    vector<int>::iterator j, k;
    int x;
    cout << "Input Array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        marks.push_back(x);
        cout << x << " ";
    }

    cout << "\nConverted Array: ";
    for (j = marks.begin(); j != marks.end(); j++)
    {
        int r = 0;
        for (k = marks.begin(); k != marks.end(); k++)
        {
            if (*j > *k)
                r++;
        }

        int res = r;
        while (true)
        {
            if (find(pos.begin(), pos.end(), res) != pos.end())
            {
                res++;
            }
            else
                break;
        }
        pos.push_back(res);
        cout << res << " ";
    }
    return 0;
}