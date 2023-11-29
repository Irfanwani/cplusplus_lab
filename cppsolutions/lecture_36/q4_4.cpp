#include <iostream>
using namespace std;

class Book
{
    string *title, author;
    int year;

public:
    Book(string t, string a, int o) : author(a), year(o)
    {
        title = new string(t);
    }

    void setter(string a, string t)
    {
        *title = t;
        author = a;
    }

    void updateyear(int newyear)
    {
        year = newyear;
        cout << "\nUpdated Year of Publication: " << year << endl;
    }

    void display()
    {
        cout << "Book Details:" << endl;
        cout << "Title: " << *title << endl;
        cout << "Author: " << author << endl;
        cout << "Year of Publication: " << year << endl;
    }

    ~Book()
    {
        delete title;
    }
};

int main()
{
    string title, author;
    int year1, year2;
    getline(cin, title);
    getline(cin, author);

    cin >> year1 >> year2;

    Book book(title, author, year1);
    book.display();
    book.updateyear(year2);

    return 0;
}