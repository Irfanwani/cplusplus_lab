// You are using GCC
#include <iostream>
using namespace std;

class multiplicationGame {
    bool johnwins = false;
    int p = 1, mult = 1;
    public:
    void game(int num) {
        while(this->p < num) {
            this->p *= mult;
            this->mult++;
            this->johnwins = !johnwins;
        }
        
        if(johnwins) {
            cout << num << " John wins" << endl;
        }else {
            cout << num << " Michael wins" << endl;
        }
    }   
};

int main() {
    multiplicationGame mg;
    int num;
    cin >> num;
    mg.game(num);
    
    return 0;
}