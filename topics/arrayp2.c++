#include <iostream>
using namespace std;

int main()
{
    int mt1[3][3], mt2[3][3], i, j, sum[3][3];

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "Element for matrix 1 at position (" << i << "," << j << "): ";
            cin >> mt1[i][j];
            cout << "Element for matrix 2 at position (" << i << "," << j << "): ";
            cin >> mt2[i][j];

            sum[i][j] = mt1[i][j] + mt2[i][j]; // replace + with - to subtract the two matrices
        }
    }

    cout << "Elements of sum array are: " << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << sum[i][j] << endl;
        }
    }

    return 0;
}