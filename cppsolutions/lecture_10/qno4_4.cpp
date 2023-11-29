#include <iostream>
#include <iomanip>
using namespace std;

class Student
{
public:
    char name[50];
    int subNum;
    float *marks;

    float getavg()
    {
        float total = 0;
        for (int i = 0; i < this->subNum; i++)
        {
            total += *(this->marks + i);
        }
        return total / (this->subNum * 1.0);
    }

    void getdetails()
    {
        float avg = getavg();
        cout << "Name: " << this->name << endl;
        cout << "Average marks: " << fixed << setprecision(2) << avg << endl;
    }
};

int main()
{
    int numStudent, i;
    cin >> numStudent;
    Student *student = new Student[numStudent];

    cout << "Student Details: " << endl;

    for (i = 0; i < numStudent; i++)
    {
        int x = 0;
        cin.ignore(50, '\n');
        cin.getline(student[i].name, 50);

        cin >> student[i].subNum;

        student[i].marks = new float[student[i].subNum];

        while (x < student[i].subNum && cin >> *(student[i].marks + x))
        {
            x++;
        }

        x = 0;

        student[i].getdetails();
    }
    return 0;
}
