// You are using GCC
#include <iostream>
using namespace std;

class Base
{
public:
    void game();
};

class Derive : virtual public Base
{
    int total;

public:
    Derive()
    {
        this->total = 0;
    }
    void game()
    {
        char c[4];
        int x = 0;
        while (x < 4 && cin >> c[x])
            x++;

        for (int i = 0; i < 4; i++)
        {
            int x = c[i];
            if (x >= 'A' && x <= 'Z')
                this->total += 10;
            else
                this->total -= 5;
        }
        cout << "Score : " << this->total << endl;
    }
};

int main()
{
    Derive d;
    d.game();

    return 0;
}