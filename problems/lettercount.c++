#include <iostream>
#include <string>
using namespace std;

int main()
{
    class Occurence
    {
    private:
        string input;
        char ch;

    public:
        int countOccurence()
        {
            cin >> input;
            cin >> ch;

            int oc = 0, i;
            for (i = 0; i < input.length(); i++)
            {
                if (input[i] == ch)
                    oc++;
            }

            return oc;
        }
    };

    Occurence ct;
    int res = ct.countOccurence();
    cout << "Result is: " << res << endl;

    return 0;
}