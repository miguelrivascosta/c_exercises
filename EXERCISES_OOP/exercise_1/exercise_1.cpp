/*
STEP 1 - Lecture #40 classes

First of all we would like to create a library. In the object oriented programming we are designing
classes which are a "form" (mold, pattern) to create objects. If you think about it, the library
itself can be the main program. However, what if we wanted to have more libraries? 

The best way is to treat the library like object in our program. Next, what is the purpose of the library? The first idea that comes to mind is: "to store the books". Correct, Library should store and contain books. But what is the book in our program ? Yes, It can be another object! But if we create a book object it will not be associated with the library. However, the library should be able to add and show a book to/from its collection.

GUIDE:
a) change the book structure from "Data structures and pointers" exercises into a Book class
b) create a book object inside of the main function and set its fields (author, title, publication year)
c) create the Library class 
d) create a member variable of Book type and make it an array of 5 elements
e) create addBook method which adds an existing book to the array inside the Library object
f) create getBook method that will return a book requested from the book array inside the Library object
g) create a library object inside of the main function
h) use addBook method to add the book object created before library object
i) use getBook method to get info about the added book
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

    Library library;
    library.addBook(book);
    Book book2 = library.getBook(0);

    cout<<"Address of the first book: "<<&book<<endl;
    cout<<"Address of the second book: "<<&book2<<endl;

    cout<<"BOOK 2"<<endl;
    cout<<book2.author<<endl;
    cout<<book2.title<<endl;
    cout<<book2.publicationYear<<endl;
    return 0;
}