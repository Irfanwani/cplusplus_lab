// You are using GCC
#include <iostream>
using namespace std;

class Matrix
{
public:
    Matrix(int r, int c)
    {
        int sum = 0, x = 0, val;
        for (int i = 0; i < r; i++)
        {
            while (x < c && cin >> val)
            {
                sum += val;
                x++;
            };
            x = 0;
        }

        cout << sum << endl;
    }
};

int main()
{
    int r, c;
    cin >> r >> c;
    Matrix matrix(r, c);
    return 0;
}