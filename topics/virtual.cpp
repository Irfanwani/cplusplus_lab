#include <iostream>
using namespace std;

class Base {
    public:
    Base() {
        cout << "Base constructor called!" << endl;
    }

    virtual void display() {
        cout << "base class display" << endl;
    }

    virtual ~Base() {
        cout << "Base destructor called" << endl;
    }
};

class Child: public Base {
    public:
    Child() {
        cout << "Child constructor called" << endl;
    }


    void display() {
        cout << "child class display" << endl;
    }

    ~Child() {
        cout << "Child destructor called" << endl;
    }
};
int main() {
    Base* b = new Child;
    b->display();
    delete b;
    return 0;
}