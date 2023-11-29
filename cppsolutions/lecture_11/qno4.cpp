// You are using GCC
#include <iostream>
using namespace std;

int findMaxElement(int r, int c)
{
    int max = 0;
    int *arr = new int[r * c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> *(arr + i * c + j);
            int inp = *(arr + i * c + j);
            if (inp > max)
            {
                max = inp;
            }
        }
    }

    return max;
}

int main()
{
    int rows, columns, i, j;
    cin >> rows >> columns;

    int res = findMaxElement(rows, columns);
    cout << res << endl;
    return 0;
}