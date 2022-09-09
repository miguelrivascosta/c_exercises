#ifndef LIBRARY_H
#define LIBRARY_H
#include "book.h"

class Library{
    protected:
        Book * books;
        int maxAmountOfBooks;
        int currentAmountOfBooks;
    public:
        Library(int);
        ~Library();
        Book getBook(int);
        void addBook(Book);
        int getMaxAmountOfBooks();
        int getCurrentAmountOfBooks();
        void showBooks();
};
#endif