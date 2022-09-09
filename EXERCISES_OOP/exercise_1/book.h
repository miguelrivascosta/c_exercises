#ifndef BOOK_H
#define BOOK_H

#include <iostream>
class Book{
    public:
        Book();
        ~Book();
        std::string author;
        std::string title;
        int publicationYear;

};

#endif