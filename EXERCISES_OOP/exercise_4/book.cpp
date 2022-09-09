#include "book.h"
using namespace std;


int Book::nBooks = 0;

Book::Book(){}

Book::Book(string author, string title, int publicationYear){
    this->author = author;
    this->title = title;
    this->publicationYear = publicationYear;
    this->idNum = this->nBooks++;
    
}
Book::~Book(){}

string Book::getAuthor() const{
    return this->author;
}

string Book::getTitle() const{
    return this->title;
}

int Book::getPublicationYear() const{
    return this->publicationYear;
}

int Book::getIdNum() const{
    return this->idNum;
}