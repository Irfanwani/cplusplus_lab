// You are using GCC
#include <iostream>
using namespace std;

class Time {
  public:
  int hours, minutes;
  void getseconds() {
      int seconds = (this->hours * 3600) + (this->minutes * 60);
      cout << seconds << endl;
  }
};

int main() {
    Time tm;
    cin >> tm.hours >> tm.minutes;
    tm.getseconds();
    
    
    return 0;
}