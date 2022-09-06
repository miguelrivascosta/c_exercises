/*
Exercise 1.

Declare 5 element array of integers and a pointer to the first element of the array.
Use the pointer and its incrementation instead of array notation, fill the array with
any integer numbers. Print all of the elements out in the console.

*/

#include <iostream>
using namespace std;

int main() {
    int size = 5;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        *(array+i) = i;
    }

    for (int i = 0; i < size; i++)
    {
        cout<<*(array+i)<<endl;
    }
    
    
    return 0;
}