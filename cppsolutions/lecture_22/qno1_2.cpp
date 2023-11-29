// You are using GCC
#include <iostream>
#include <vector>
using namespace std;

class PopulationMatrix
{
    int num;
    int *arr;

public:
    PopulationMatrix(){};
    PopulationMatrix(int num)
    {
        this->num = num;
        arr = new int[num * num];
        for (int i = 0; i < num; i++)
        {
            int x = 0;
            while (x < num && cin >> *(arr + i * num + x))
                x++;
        }
    }

    void operator++()
    {
        cout << "Matrix after incrementing each element by 1:" << endl;
        for (int i = 0; i < this->num; i++)
        {
            for (int j = 0; j < this->num; j++)
            {
                *(arr + i * num + j) += 1;
                cout << *(arr + i * num + j) << " ";
            }

            cout << '\n';
        }
    }

    void operator--()
    {
        cout << "Matrix after decrementing each element by 1:" << endl;
        for (int i = 0; i < this->num; i++)
        {
            for (int j = 0; j < this->num; j++)
            {
                *(arr + i * num + j) -= 2;
                cout << *(arr + i * num + j) << " ";
            }
            cout << '\n';
        }
    }
};

int main()
{
    int num;
    cin >> num;
    PopulationMatrix matrix(num);
    ++matrix;
    --matrix;

    return 0;
}