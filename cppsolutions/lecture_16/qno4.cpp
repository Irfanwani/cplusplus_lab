// You are using GCC
#include <iostream>
using namespace std;

class Base {
    int x;
    public:
    Base() {
        cout << "Base Class Constructor" << endl;
    }
    void setValue(int x) {
        this->x = x;
    }
};

class InitilizerList {
    Base b;
    public:
    InitilizerList(int x) {
        b.setValue(x);
        cout << "Value set: " << x << endl;
        cout << "InitilizerList's Constructor" << endl;
    }
};

int main() {
    int num;
    cin >> num;
    InitilizerList inl(num);
    return 0;
}