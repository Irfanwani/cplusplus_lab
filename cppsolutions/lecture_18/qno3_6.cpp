// You are using GCC
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int num, sum = 0, x = 0, val;
    cin >> num;

    ofstream file;
    file.open("sample.txt");

    while (x < num && cin >> val)
    {
        sum += val;
        file << val << " ";
        x++;
    }

    cout << sum << endl;
    return 0;
}