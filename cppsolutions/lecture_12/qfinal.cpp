// You are using GCC
#include <iostream>
using namespace std;

class Student {
  public:
  string name;
  int rollno, marks[5];
  
  int sum() {
    int total = 0;
    for(int i = 0; i < 5; i++) total += this->marks[i];
    
    return total;
  }
  
  
  void display() {
      cout << "Name: " << this->name << endl;
      cout << "Roll Number: " << this->rollno << endl;
      cout << "Total Marks: " << this->sum() << endl;
  }
};

int main() {
    int stnum, x = 0;
    cin >> stnum;
    
    Student students[stnum];
    
    cout << "Student Report Cards:" << endl;
    for(int i = 0; i < stnum; i++) {
        cin >> students[i].name >> students[i].rollno;
        while(x < 5 && (cin >> students[i].marks[x])) x++;
        x = 0;
        students[i].display();
    }
    
    
    
    return 0;
}