/*
Exercise 1.

Write a program that prints out in the console the whole alphabet "abcdefghijklmnopqrstuvwxyz".
All of the characters from the alphabet should be stored in a 27 element array of chars and
printing out of each of those elements should be done with the use of the for loop.

eg.
Output:
abcdefghijklmnopqrstuvwxyz
*/

#include <iostream>
using namespace std;

int main() {

    char a = 'a';
    for (int i = 0; i < 26; i++)
    {
        cout<<static_cast<char>(a+i);
    }
    
    return 0;
}