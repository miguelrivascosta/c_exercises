/*
STEP 5 - Lecture #45 copy constructor and Lecture #46 convert constructor

Talking more about the book, let's think about the way that books are created. You take the original copy of the book and reprint it in much more copies. But this way, all of the books will have exactly the same "UNIQUE" identification number. It would be good idea to implement inside of our printer a section that is unique to each of the copies printed. Now the library can register all of its books with corresponding identification number.

GUIDE:
a) update the showBooks method so it prints the unique id of the book 
b) create another two books same as book3 using copy constructor and add them into the library
c) use the showBooks to see the outcome

THINK WHY THE BOOKS 3,4,5 have the same "UNIQUE" id ?

d) redefine the copy constructor for book class
e) use references to pass the actual book (not a copy) in order to preserve the UNIQUE ID given during creation.
*/
#include "library.h"
#include "book.h"
#include <iostream>

using namespace std;

int main() {


    Book book1("Miguel","Las aventuras de Miguel",1997);
    Book book2("Aroa","Las aventuras de Aroa",1997); 
    Book book3("Daniel","Las aventuras de Daniel",1996);
    Book book4 = book3, book5 = book3;

    Library library(10);
    library.addBook(book1);
    library.addBook(book2);
    library.addBook(book3);
    library.addBook(book4);
    library.addBook(book5);
    library.showBooks();

    return 0;
}