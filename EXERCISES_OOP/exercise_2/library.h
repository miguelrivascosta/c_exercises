#ifndef LIBRARY_H
#define LIBRARY_H
#include "book.h"

class Library{
    protected:
        Book * books;
        int maxAmountOfBooks;
    public:
        Library(int);
        ~Library();
        Book getBook(int);
        void addBook(Book);
        int getMaxAmountOfBooks();
};
#endif