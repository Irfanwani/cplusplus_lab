#include <iostream>
#include <cmath>
using namespace std;

class Poly
{
public:
    int degree, *arr;
    Poly(int d) : degree(d)
    {
        arr = new int[d + 1]();
    }

    void displaypol()
    {
        for (int i = 0; i <= degree; i++)
        {
            int deg = degree - i;
            int val = *(arr + i);
            if (val != 0)
                cout << (i != 0 ? (val > 0 ? " + " : " - ") : "") << abs(val) << (deg > 0 ? (deg == 1 ? "x" : "x^" + to_string(deg)) : "");
        }

        cout << '\n';
    }

    void calc(int xval)
    {
        int res = 0;
        for (int i = 0; i <= degree; i++)
        {
            res += *(arr + i) * pow(xval, degree - i);
        }

        cout << res << endl;
    }

    int *sumdiff(int *ptr, int d, bool sum)
    {
        int deg = degree, temp = d;
        int *t = arr;
        int *s = ptr;
        if (deg < d)
        {
            deg = d;
            temp = degree;
            t = ptr;
            s = arr;
        }

        int *res = new int[deg + 1]();
        while (deg >= 0)
        {
            if (temp < 0)
                *(s + temp) = 0;
            if (sum)
                res[deg] = *(t + deg) + *(s + temp);
            else
            {
                int x = *(t + deg) - *(s + temp);
                res[deg] = degree < d ? -x : x;
            }
            deg--;
            temp--;
        }

        return res;
    }
};

int main()
{
    int d1, d2, x = 0, xval;
    cin >> d1;

    Poly p1(d1);
    while (x <= d1 && cin >> *(p1.arr + x))
        x++;
    x = 0;
    p1.displaypol();

    cin >> d2;
    Poly p2(d2);
    while (x <= d2 && cin >> *(p2.arr + x))
        x++;
    p2.displaypol();

    cin >> xval;

    p1.calc(xval);
    p2.calc(xval);

    Poly p3(d1 >= d2 ? d1 : d2);

    int *res = p1.sumdiff(p2.arr, d2, true);
    for (int i = 0; i <= p3.degree; i++)
    {
        p3.arr[i] = res[i];
    }
    delete[] res;
    p3.displaypol();

    int *res2 = p1.sumdiff(p2.arr, d2, false);
    for (int i = 0; i <= p3.degree; i++)
    {
        p3.arr[i] = res2[i];
    }
    delete[] res2;
    p3.displaypol();

    return 0;
}
