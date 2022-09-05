/*
Exercise 1.

Basing on the knowledge about conditional statements, once again
modify the exercise from the lecture about logical and relational operators.
Write a program that asks the user to input three integer numbers. 
The first two should represent the minimum and maximum value of the interval 
respectively. Then the program should check if the third number is contained within the interval. 
The user should be informed if the number belongs or if it doesn't belong to the interval.

eg.

User inputted:
Minimum value: 5
Maximum value: 9
Value to check: 2

Output:
The number 2 doesn't belong to the interval from 5 to 9.
*/

#include <iostream>
using namespace std;

int main() {
    int min,max,num;

    cout<<"Write min: "<<endl;
    cin >> min;
    cout<<"Write max: "<<endl;
    cin >> max;
    cout<<"Write number: "<<endl;
    cin >> num;

    if (num<min || num > max)
    {
        cout<<"The number does not belong the the interval!"<<endl;
    }else{
        cout<<"The number belongs to the interval!"<<endl;
    }
    

    return 0;
}