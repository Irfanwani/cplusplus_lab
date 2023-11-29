// first question in lecture 10
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

class Point {
    public:
    float x, y;
    void distanceTo(float a, float b) {
        float distance = sqrt(pow(this->x - a, 2) + pow(this->y - b, 2));
        cout << fixed << setprecision(2) << distance << endl;
    }
};


int main() {
    Point point;
    int x = 0, y, i = 0;
    float *ptr = new float[4];
    while(cin >> *(ptr+i)) {
        if(i == 3) break;
        i++;
    }
    
    point.x = *(ptr);
    point.y = *(ptr + 1);
    
    point.distanceTo(*(ptr+2), *(ptr+3));
    
    
    
    return 0;
}