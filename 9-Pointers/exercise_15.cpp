/*
Exercise 1.

Declare a variable "a" and initialize it with any value. Then create a pointer variable "p" 
containing the address of the variable "a". Print out in the console the value and address
of the variable "a" using both variable "a" and pointer "p".

eg.
Output:

Value of the variable a is equal to: 5
The address of the variable a is equal to: 0x69fef8
The value stored in the pointer p is equal to: 0x69fef8
To get the value of the variable a using pointer p one has to point to the address in the pointer p, *p = 5
*/

#include <iostream>
using namespace std;

int main() {

    int a = 5;
    int * p = &a;

    cout<<"Value of the variable a is equal to: "<<a<<endl;
    cout<<"The address of the variable a is equal to: "<<&a<<endl;
    cout<<"The value stored in the pointer p is equal to: "<<p<<endl;
    cout<<"To get the value of the variable a using pointer p one has to point to the address in the pointer p, *p = "<<*p<<endl;

    return 0;
}