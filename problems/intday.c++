#include <iostream>
using namespace std;

int main()
{
    class dayofweek
    {
    public:
        void getday(int d)
        {

            string days[8] = {
                "Weekend",
                "Sunday",
                "Monday",
                "Tuesday",
                "Wednesday",
                "Thursday",
                "Friday",
                "Saturday"};

            if (d >= 0 && d <= 7)
            {
                cout << days[d] << endl;
            }
            else
            {
                cout << "Invalid";
            }
        }
    };

    dayofweek dw;
    int num;
    cout
        << "Enter a number: ";
    cin >> num;

    dw.getday(num);

    return 0;
}