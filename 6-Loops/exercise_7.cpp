/*
Exercise 3.

Write a program that asks the user to input any number (integer or floating point) and
the n-th power (integer) the number should be raised to. Then calculate the result of the
exponentiation of this number to the said power.

eg.

User inputted:
Number: 2
N-th power: 5

Output:
The number 2 to the power of 5 is equal to 32.
*/
#include <iostream>
using namespace std;

int main() {
    float number,tmp;
    int exponent;
    cout<<"Write the base (int/float): ";
    cin>>number;
    cout<<"Write the exponent (int): ";
    cin>>exponent;

    tmp = number;
    for (int i = 0; i < exponent-1; i++)
    {
        tmp*=number;
    }
    cout<<"Result: "<<tmp<<endl;
    return 0;
}