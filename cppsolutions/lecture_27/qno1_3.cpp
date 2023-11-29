// You are using GCC
#include <iostream>
using namespace std;

class Parent
{
protected:
    int num;

public:
    void setNum(int num)
    {
        this->num = num;
    }
    void totalsum()
    {
        int sum = 0, fullnum = this->num / 10;
        while (this->num > 0)
        {
            while (fullnum > 0)
            {
                sum += (this->num % 10 + fullnum % 10);
                fullnum /= 10;
            }
            this->num /= 10;
            fullnum = this->num / 10;
        }

        cout << sum << endl;
    }
};

class Child : public Parent
{
public:
    Child(int num)
    {
        this->setNum(num);
        this->totalsum();
    };
};

int main()
{
    int num;
    cin >> num;
    Child child(num);
    return 0;
}