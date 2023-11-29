// You are using GCC
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int num1, num2, sum;
    cin >> num1 >> num2;
    sum = num1 + num2;
    ofstream file;
    file.open("sum.txt");

    if (file.is_open())
    {
        file << sum;
        cout << "Sum successfully written to the file 'sum.txt'." << endl;
        cout << "Sum: " << sum << endl;
    }

    return 0;
}