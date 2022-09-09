/*
STEP 3 - Lecture #40 classes

In the second step we said that our library can have some space inside to store its collection
of the books. We know that we can for example store 2000 books. However, if we add a book to
the collection we have less space. So how many more books can be added to our library? 
The library should count how many were already added! Also if you consider that the books 
are ordered from 0 to 2000 and each of the book has its own position on the shelve the newly
added book should go to the first free position on the shelve.

GUIDE:
a) create a private member currentAmountOfBooks
b) redesign addBook method so adds the book to the first free position on the shelve
c) check in the addbook method if the maxAmountOfbooks is exceeded
d) check in the getbook method if the index of the book doesn't exceed maxAmountOfbooks 
(if the maxAmountOfBooks is exceeded return, first book in the set by default)
e) create another two Book objects in the main function
f) add the newly created books into the Library object
g) inside of the Library class create the showBooks method it should print out in the console
all of the books inside of the library (as well as their positions)
*/
#include "library.h"
#include "book.h"
#include <iostream>

using namespace std;

int main() {

    Book book;
    book.author = "Miguel";
    book.title = "Adventures";
    book.publicationYear = 1997;


    int maxAmoutOfBooks;
    cout<<"Write the amount of books: ";
    cin>>maxAmoutOfBooks;
    Library library(maxAmoutOfBooks);

    cout<<"Current amount of books: "<<library.getCurrentAmountOfBooks()<<endl;
    library.addBook(book);
    cout<<"Current amount of books: "<<library.getCurrentAmountOfBooks()<<endl;

    Book book2, book3;

    cout<<"maxAmountOfBooks: "<<library.getMaxAmountOfBooks()<<endl;

    book2.author = "Daniel";
    book2.title = "Cine francés";
    book2.publicationYear = 1996;
    library.addBook(book2);

    book3.author = "Aroa";
    book3.title = "Periodista";
    book3.publicationYear = 1998;
    library.addBook(book3);

    library.showBooks();

    return 0;
}