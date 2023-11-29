// You are using GCC
#include <iostream>
#include <iomanip>
using namespace std;

template <typename T>
class Area {
    T totalarea;
    public:
    Area() {
        totalarea = 0;
    }
    void circleArea(T r) {
        totalarea += 3.14159 * r * r;
    }
    
    void sqArea(T s) {
        totalarea += s*s;
    }
    
    void triArea(T b, T h) {
        totalarea += (b*h)/2;
    }
    
    T getTotal() {
        return totalarea;
    }
};

int main() {
    string name = "";
    float x = 0, y = 0;
    Area<float> totalarea;

    getline(cin, name);
    cin >> x;
    totalarea.circleArea(x);
    cin.ignore();
    getline(cin, name);
    cin >> x;
    totalarea.sqArea(x);
    cin.ignore();
    getline(cin, name);
    cin >> x >> y;
    totalarea.triArea(x, y);
    
    float total = totalarea.getTotal();
    cout << fixed << setprecision(2) << "Total area of all shapes: " << total << endl;
    
    return 0;
}