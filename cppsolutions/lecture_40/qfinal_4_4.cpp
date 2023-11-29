// You are using GCC
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

bool isComposite(int i) {
    if(i <= 2) return true;
    for(int x = 2; x <= i / 2; x++) {
        if(i%x == 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int n;
    cin >> n;
    if(n < 1 || n > 15) {
        cout << "-1";
        return 0;
    }
    
    vector<int> v;
    int x;
    for(int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }
    
    vector<int> v2(15);
    remove_copy_if(v.begin(), v.end(), v2.begin(), isComposite);
    
    vector<int>::iterator it;
    cout << "Composite numbers: ";
    for(it = v2.begin(); it != v2.end(); it++) {
        if(*it > 0) cout << *it << " ";
    }
    
    return 0;
}
