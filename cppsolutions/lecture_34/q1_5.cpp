// You are using GCC
#include <iostream>
using namespace std;

class Color
{
public:
    virtual void paint() = 0;
};

class RedPaint : public Color
{
public:
    void paint()
    {
        cout << "I'm Painting with Red Color." << endl;
    }
};

class BluePaint : public Color
{
public:
    void paint()
    {
        cout << "I'm Painting with Blue Color." << endl;
    }
};

int main()
{
    char inp;
    cin >> inp;
    Color *ptr;
    if (inp == 'R' || inp == 'r')
    {
        ptr = new RedPaint;
        ptr->paint();
    }
    else if (inp == 'B' || inp == 'b')
    {
        ptr = new BluePaint;
        ptr->paint();
    }
    else
    {
        cout << "Invalid choice!" << endl;
    }
    return 0;
}