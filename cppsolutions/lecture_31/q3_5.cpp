// You are using GCC
#include <iostream>
#include <cmath>
using namespace std;

class QuadraticEquation
{
    float a, b, c;

public:
    QuadraticEquation(float x, float y, float z) : a(x), b(y), c(z){};

    void solveAndDisplayRoots()
    {
        float d = pow(b, 2) - (4 * a * c), root1, root2;
        if (d >= 0)
        {
            root1 = (-b + sqrt(d)) / (2 * a);
            root2 = (-b - sqrt(d)) / (2 * a);
            if (root1 == root2)
            {
                cout << "Root: " << root1 << endl;
            }
            else
            {
                cout << "Root 1: " << root1 << endl;
                cout << "Root 2: " << root2 << endl;
            }
        }
        else
        {
            float q1, q2;
            q1 = -b / (2 * a);
            q2 = sqrt(-1 * d) / (2 * a);

            cout << "Root 1: " << q1 << " + " << q2 << "i" << endl;
            cout << "Root 2: " << q1 << " - " << q2 << "i" << endl;
        }
    }
};

int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    QuadraticEquation *ptr = new QuadraticEquation(a, b, c);
    ptr->solveAndDisplayRoots();

    delete ptr;

    return 0;
}