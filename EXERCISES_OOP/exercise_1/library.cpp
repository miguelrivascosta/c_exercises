#include "library.h"
#include "book.h"
#include <iostream>

using namespace std;

Library::Library(){}
Library::~Library(){}


void Library::addBook(Book book){
    this->books[0] = book;
}

Book Library::getBook(int inx){
    return books[inx];
}

Book::Book(){}
Book::~Book(){}