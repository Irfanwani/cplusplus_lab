// transpose of a matrix
#include <iostream>
using namespace std;

int main()
{
    int mt[3][3], i, j, tr[3][3];
    cout << "Enter the elements of matrix: ";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> mt[i][j];
            tr[j][i] = mt[i][j];
        }
    }

    cout << "Transpose of the matrix is: " << endl;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << tr[i][j] << "\t";
        }
        cout << '\n';
    }

    return 0;
}