/*
Exercise 2.

Write a program similar to the one in the exercise 1. However, this time instead of using a 27
element array of chars use the string type. Printing out should be done the same way as in the 
exercise 1.

eg.
Output:
abcdefghijklmnopqrstuvwxyz
*/

#include <iostream>
using namespace std;

int main() {
    string word = "abcdefghijklmnñopqrstuvwxyz";
    for (int i = 0; i < 28; i++)
    {
        cout<<word[i];
    }
    
    return 0;
}