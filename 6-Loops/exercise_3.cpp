/*
Exercise 1.

Write a program that asks the user to input a PIN code for the first time. Then using
the while (or do while) loop ask the user to input the PIN code again. If the PIN code is 
wrong, the user should input it again (until the number is correct).


eg.

User inputted:
PIN: 3333
CHECKPIN: 3341

Output:
Input your pin: 

eg.

User inputted:
PIN: 3412
CHECKPIN: 3412

Output:
Correct PIN !
*/

#include <iostream>
using namespace std;

int main() {
    int pin,check_pin;
    cout<<"Write your pin: ";
    cin>>pin;

    do{
        cout<<"Checkpin: ";
        cin>>check_pin;
    }while(pin!=check_pin);
    cout<<"Correct pin";
    return 0;
}