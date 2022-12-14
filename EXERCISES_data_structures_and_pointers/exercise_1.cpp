/*
Exercise 1.

Create a structure of data called "book" containing three properties: title, author,
publication year. In the main function declare three variables with the "book" type.

Exercise 2.

Modify the program from exercise 1. Create a function that will set (fill) values of each
propery of every book type variable created in the exercise 1. Values should be taken from
the user input.

Exercise 3.

Modify the program from exercise 2. Create a function that will print out in the console the
values of properties of the book sent as the argument of the function.
*/

#include <iostream>
using namespace std;


struct book
{
    string title;
    string author;
    int publicationYear;
};

void fill(book *);
void print(book);

int main() {
    book book;
    fill(&book);
    print(book);
}

void print(book book){
    cout<<book.title<<endl;
    cout<<book.author<<endl;
    cout<<book.publicationYear<<endl;
}
void fill(book * book){
    cout<<"Title: ";
    cin>> book->title;
    cout<<"author: ";
    cin>>book->author;
    cout<<"Publication year: ";
    cin>>book->publicationYear;

}