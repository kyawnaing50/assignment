#include <iostream>
#include <cstring>
using namespace std;

struct Book
{
    string title;
    string author;
    string subject;
    int book_id;
} myBook[5];

void printBook(int i)
{
    cout << "Book title : " << myBook[i].title << endl;
    cout << "Book author : " << myBook[i].author << endl;
    cout << "Book subject : " << myBook[i].subject << endl;
    cout << "Book id : " << myBook[i].book_id << endl;
}
int main()
{
    // book 2 specification
    myBook[0].title = "Learn C++ Programming";
    myBook[0].author = "Chand Miyan";
    myBook[0].subject = "C++ Programming";
    myBook[0].book_id = 6495407;

    // book 2 specification
    myBook[1].title = "Learn C++ Programming";
    myBook[1].author = "Chand Miyan";
    myBook[1].subject = "C++ Programming";
    myBook[1].book_id = 6495407;

    // Print Book1 info
    printBook(0);
    // Print Book2 info
    cout << endl;
    printBook(1);
    cout << endl;
    printBook(2);
    cout << endl;
    printBook(3);
    cout << endl;
    printBook(4);

    return 0;
}