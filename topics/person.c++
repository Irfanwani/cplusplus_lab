#include <iostream>
#include <string>
using namespace std;

int main()
{
    class Person
    {
    private:
        string name, gender;
        int age;

    public:
        void setname()
        {
            cout << "Enter your name: ";
            cin >> name;
        }
        void setage()
        {

            cout << "Enter your age: ";
            cin >> age;
        }
        void setgender()
        {
            cout << "Enter your gender: ";
            cin >> gender;
        }
        void showname()
        {
            transform(name.begin(), name.end(), name.begin(), ::toupper);
            cout
                << "Name: " << name << endl;
        }

        void showgender()
        {
            transform(gender.begin(), gender.end(), gender.begin(), ::toupper);
            cout << "Gender: " << gender << endl;
        }

        void showage()
        {
            cout << "Age: " << age << endl;
        }
    };

    Person person;
    person.setname();
    person.setgender();
    person.setage();

    person.showname();
    person.showgender();
    person.showage();
    return 0;
}