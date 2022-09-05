/*
Exercise 2.

Write a program that asks the user to input the size of the dynamic array of integers. 
Using the pointer and its incrementation instead of array notation, fill the array with
any integer numbers. Print all of the elements out in the console. All of the conditions
of the loops should work with the size of the array inputted by the user.

eg.

User inputted:
Input the size of the dynamic array you want to create: 4
Input 1 number: 12
Input 2 number: 14
Input 3 number: 15
Input 4 number: 16

Output:
Number 1: 12
Number 2: 14
Number 3: 15
Number 4: 16
*/

#include <iostream>
using namespace std;

int main() {
    int array_size;
    cout<<"Input of array: ";
    cin>>array_size;

    int * array = new int[array_size];

    for (int i = 0; i < array_size; i++)
    {
        cout<<"Input "<<(i+1)<<": ";
        cin >> *(array+i); 
    }
    
    for (int i = 0; i < array_size; i++)
    {
        cout<<"Output "<<(i+1)<<": "<<*(array+i)<<endl;
    }
    

    delete [] array;
    return 0;
}