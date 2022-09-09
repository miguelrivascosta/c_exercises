/*
STEP 2 - Lecture #40 classes

In the first step, we have created a simple model of the library. If all the libraries in the
city were the same, we could leave our library the way it is at the moment. However, in reality
we would describe our library in more details. For example, one library can store more books than
the other. The limit on the number of the books is influenced by the size of the library building.
While the size was defined while CONSTRUCTION of the building.

GUIDE:
a) create a private member maxAmountOfBooks in the Library class
b) redesign the Library constructor so the array of Books is created dynamically with the
maxAmountOfBooks sent as the argument of the constructor
c) redesign the Library destructor to free the memory from the books in the dynamic array
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
    library.addBook(book);
    Book book2 = library.getBook(0);

    cout<<"Address of the first book: "<<&book<<endl;
    cout<<"Address of the second book: "<<&book2<<endl;
    cout<<endl;

    cout<<"maxAmountOfBooks: "<<library.getMaxAmountOfBooks()<<endl;
    cout<<"BOOK 2"<<endl;
    cout<<book2.author<<endl;
    cout<<book2.title<<endl;
    cout<<book2.publicationYear<<endl;
    return 0;
}