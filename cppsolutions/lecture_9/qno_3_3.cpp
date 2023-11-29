#include <iostream>
using namespace std;

int findSmallestDifference(int num, int *arr)
{

    int i, j, min = -1;
    for (i = 0; i < num - 1; i++)
    {
        for (j = i + 1; j < num; j++)
        {
            int diff = *(arr + i) - *(arr + j);
            if (diff < 0)
                diff *= -1;
            if (min < 0 || diff < min)
                min = diff;
        }
    }

    return min;
};

int main()
{
    int num, *ptr, i = 0, j, min;
    cin >> num;
    ptr = new int[num];

    while (cin >> *(ptr + i))
    {
        if (i == 4)
            break;
        i++;
    }

    min = findSmallestDifference(num, ptr);

    cout << min << endl;

    return 0;
}