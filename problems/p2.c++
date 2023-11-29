//  PRINT ALL PRIME NUMBERS LESS THAN THE GIVEN NUMBER
#include <iostream>
using namespace std;

int main()
{
    int limit, i, fc = 1, j;
    cout << "Enter the limit: ";
    cin >> limit;

    cout << "Prime numbers upto " << limit << " are: " << endl;
    for (i = 2; i <= limit; i++)
    {
        for (j = 1; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                if (fc > 2)
                    break;
                fc++;
            }
        }
        if (fc == 2)
            cout << i << endl;

        fc = 1;
    }
    return 0;
}