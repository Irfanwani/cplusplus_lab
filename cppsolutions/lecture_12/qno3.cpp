// You are using GCC
#include <iostream>
using namespace std;

class Book
{
    char title[40], author[40];
    int year;

public:
    void displayBooks()
    {
        cout << "Title: " << this->title << endl;
        cout << "Author: " << this->author << endl;
        cout << "Publication Year: " << this->year << endl;
    }

    void getvals()
    {
        cin.ignore(40, '\n');
        cin.getline(this->title, 40);
        cin.getline(this->author, 40);
        cin >> this->year;
    }
};

int main()
{
    int bookscount;
    cin >> bookscount;

    cout << "Book Information:" << endl;

    Book books[bookscount];

    for (int i = 0; i < bookscount; i++)
    {
        books[i].getvals();

        cout << "Book " << i + 1 << ":" << endl;
        books[i].displayBooks();
    }

    return 0;
}