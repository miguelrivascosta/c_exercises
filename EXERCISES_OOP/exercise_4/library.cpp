#include "library.h"
#include "book.h"
#include <iostream>

using namespace std;

Library::Library(int maxAmountOfBooks){
    this->maxAmountOfBooks = maxAmountOfBooks;
    this->books = new Book[maxAmountOfBooks];
    this->currentAmountOfBooks = 0;
}
Library::~Library(){
    delete [] this->books;
}


void Library::addBook(Book book){
    this->books[this->currentAmountOfBooks] = book;
    this->currentAmountOfBooks += 1;
}

Book Library::getBook(int inx){
    if(inx > this->maxAmountOfBooks){
        return this->books[0];
    }else{
        return this->books[inx];
    }
    
}

int Library::getMaxAmountOfBooks(){
    return this->maxAmountOfBooks;
}

int Library::getCurrentAmountOfBooks() {
    return this->currentAmountOfBooks;
}

void Library::showBooks() {
    for (int i = 0; i < this->currentAmountOfBooks; i++)
    {
        cout<<i<<". "<<"Author: "+this->books[i].getAuthor()<<" "
        <<"Title: "+this->books[i].getTitle()<<" "<<"Publication year: "
        <<this->books[i].getPublicationYear()<<" ID: "<<this->books[i].getIdNum()<<endl;
    }
    
}