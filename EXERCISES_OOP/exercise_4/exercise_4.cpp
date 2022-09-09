/*
STEP 4 -  Lecture #41 static variables and functions and #42 constant classes and methods

We have talked much about the library class. Now we should spend some time to think in more
detail about the book. When the library lends you a book it expects you to return exactly 
the same book you have rented. For example, we can provide a book with an unique identification
number during the creation of the book. In my opinion the book should also be an object
which cannot be changed! Because how can a book change its title/autor/publicationYear?

GUIDE:
Expand the book class:
a) add static field that represents the number of books that were already created
b) make all of the property fields private (except static field) and get methods for all of them
c) redefine the constructor so it initializes the book parameters (title, author, publication year)
and using the static field from a) give each of the book an unique ID number 
d) in the main function initialize all of the three books created in earlier steps with the use
of the redefined constructor
f) all of the book objects should be constant
g) user should be able to use the get methods on the book objects
*/
#include "library.h"
#include "book.h"
#include <iostream>

using namespace std;

int main() {


    Book book1("Miguel","Las aventuras de Miguel",1997);
    Book book2("Aroa","Las aventuras de Aroa",1997); 
    Book book3("Daniel","Las aventuras de Daniel",1996);
    
    Library library(10);
    library.addBook(book1);
    library.addBook(book2);
    library.addBook(book3);
    library.showBooks();

    return 0;
}