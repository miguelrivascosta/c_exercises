#ifndef BOOK_H
#define BOOK_H

#include <iostream>
class Book{
    private:
        std::string author;
        std::string title;
        int publicationYear;
        int idNum;
    public:
        static int nBooks;
        Book();
        Book(std::string, std::string, int);
        ~Book();
        static int numOfCreatedBooks;

    std::string getAuthor() const;
    std::string getTitle() const;
    int getPublicationYear() const;
    int getIdNum() const;


};

#endif