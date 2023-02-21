#include <iostream>
#include <cstring>
using namespace std;
struct Books
{
    string title;
    string author;
    string subject;
    int book_id;
};
// This function accept pointer to structure as parameter.
void printBook(struct Books *book)
{
    cout << "Book title : " << book->title << endl;
    cout << "Book author : " << book->author << endl;
    cout << "Book subject : " << book->subject << endl;
    cout << "Book id : " << book->book_id << endl;
}
int main()
{
    struct Books Book1; // Declare Book1 of type Book
    struct Books Book2; // Declare Book2 of type Book
    // Book 1 specification

    Book1.title = "Learn C++ Programming";
    Book1.author="Chand Miyan";
    Book1.subject="C++ Programming";
    Book1.book_id = 6495407;
    // Book 2 specification
    Book2.title= "Telecom Billing";
    strcpy(Book2.author, "Yakit Singha");
    strcpy(Book2.subject, "Telecom");
    Book2.book_id = 6495700;
    // Print Book1 info, passing address of structure
    printBook(&Book1);
    // Print Book1 info, passing address of structure
    printBook(&Book2);
    return 0;
}