#include <iostream>
#include <string>
using namespace std;

int main()
{

    char name[10];
    cout << "Enter Name: ";
    cin >> name;

    int i, j, ct = 0, l = strlen(name), track[10];

    for (i = 0; i < l; i++)
    {
        if (track[i] < 0)
            continue;
        for (j = i; j < l; j++)
        {
            if (name[i] == name[j])
            {

                ct++;
                track[i] = ct;
                if (i != j)
                    track[j] = -1;
            }
        }

        ct = 0;
    }

    for (i = 0; i < l; i++)
    {
        if (track[i] > 0)
            cout << track[i] << endl;
    }

    return 0;
}