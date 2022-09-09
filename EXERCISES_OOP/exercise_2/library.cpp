#include "library.h"
#include "book.h"
#include <iostream>

using namespace std;

Library::Library(int maxAmountOfBooks){
    this->maxAmountOfBooks = maxAmountOfBooks;
    this->books = new Book[maxAmountOfBooks];
}
Library::~Library(){
    delete [] books;
}


void Library::addBook(Book book){
    this->books[0] = book;
}

Book Library::getBook(int inx){
    return books[inx];
}

int Library::getMaxAmountOfBooks(){
    return this->maxAmountOfBooks;
}


Book::Book(){}
Book::~Book(){}