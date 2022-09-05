/*
Exercise 1.

Create a structure of data called "book" containing three properties: title, author,
publication year. In the main function declare three variables with the "book" type.

Exercise 2.

Modify the program from exercise 1. Create a function that will set (fill) values of each
propery of every book type variable created in the exercise 1. Values should be taken from
the user input.

Exercise 3.

Modify the program from exercise 2. Create a function that will print out in the console the
values of properties of the book sent as the argument of the function.
*/
#include <iostream>
using namespace std;

struct Book {
    string title;
    string author;
    int publication_year;
};

Book fillBook();
void fillBook(Book &book);
void printBook(Book book);

int main() {
    Book book1, book3;
    book1.author = "miguel";
    book1.title = "mi vida";
    book1.publication_year = 1997;

    Book book2 = fillBook();
    printBook(book2);
    
    fillBook(book3);
    printBook(book3);
    return 0;
}

void printBook(Book book) {
    cout<< "Book information"<<endl;
    cout << "Title: "<<book.title<<endl;
    cout << "Publication year: "<<book.publication_year<<endl;
    cout << "Author: "<<book.author;
}

Book fillBook()  {
    Book book;
    cout << "Write author name: ";
    cin>>book.author;
    cout << "Write title: ";
    cin>>book.title;
    cout << "Write publication year: ";
    cin>>book.publication_year;
    return book;
}

void fillBook(Book &book) {
    cout << "Write author name: ";
    cin>>book.author;
    cout << "Write title: ";
    cin>>book.title;
    cout << "Write publication year: ";
    cin>>book.publication_year;  
}