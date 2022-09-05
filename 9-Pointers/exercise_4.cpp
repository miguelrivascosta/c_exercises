/*
Exercise 1.

Create a function "createArray" that initializes a dynamically allocated array of integers
with the size of the array sent as the argument of the function. The function should return
the array it creates so it can be assigned to any dynamically allocated variable in other
functions.
*/

#include <iostream>
using namespace std;

int * createArray(int arraySize);
int main() {
    int arraySize = 5;
    int * array = new int[arraySize];
    delete [] array;
    return 0;
}

int * createArray(int arraySize){
    int * array = new int[arraySize];
    return array;
}