// You are using GCC
#include <iostream>
using namespace std;

template <class A, class B>
class Pair {
    A x;
    B y;
    public:
    Pair(A x, B y) {
        this->x = x;
        this->y = y;
        cout << "First: " << this->x << endl;
        cout << "Second: " << this->y << endl;
    }
};

int main() {
    float x;
    double y;
    cin >> x >> y;
    cout << "Values before swap:\n";
    Pair<float, double> p(x, y);
    
    cout << "Values after swap:" << endl;
    Pair<double, float> p2(y, x);
    return 0;
}
