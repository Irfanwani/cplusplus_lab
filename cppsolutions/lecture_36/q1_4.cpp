// You are using GCC
#include <iostream>
using namespace std;

class DecimalToBinaryConverter
{
    int num;
    string res;

public:
    DecimalToBinaryConverter()
    {
        res = "";
        cin >> num;
        while (num > 0)
        {
            res += to_string(num % 2);
            num /= 2;
        }

        for (int i = res.length() - 1; i >= 0; i--)
        {
            cout << res[i];
        }
    }
};

int main()
{
    DecimalToBinaryConverter converter;

    return 0;
}