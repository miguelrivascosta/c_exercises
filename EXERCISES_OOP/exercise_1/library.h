#ifndef LIBRARY_H
#define LIBRARY_H
#include "book.h"

class Library{
    protected:
        Book books[5];
    public:
        Library();
        ~Library();
        Book getBook(int);
        void addBook(Book);
};
#endif