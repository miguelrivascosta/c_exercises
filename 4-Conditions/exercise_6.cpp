/*
Exercise 3.

Write a program immitating a vending machine. The program should present the user 
with a choice of 6 products of your choice (Coke, Water, Chocolate Bar etc). Then allow 
the user to choose a product by entering a number 1-6. Add an exception for invalid input
if the user inputs a number which doesn't correspond to any choice.

eg.

1. Cola
2. Chocolate Bar
3. ...
4. ...
5. ...
6. ...

User inputted:
Choice: 2

Output:
Your have chosen a Chocolate Bar.

eg.

User inputted:
Choice: 7

Output:
Error. Invalid choice.
*/
#include <iostream>
using namespace std;

int main() {
    int option;
    cout << "0. Cocacola"<<endl;
    cout << "1. Kas"<<endl;
    cout << "2. Water"<<endl;
    cout << "3. Coffee"<<endl;
    cout << "4. Orange juice"<<endl;
    cout << "5. Lemon juice"<<endl;
    cout << "Choose an option: "<< endl;
    cin>>option;
    switch(option) {
        case 0:
            cout<<"Cocacola"<<endl;
            break;
        case 1:
            cout<<"Kas"<<endl;
            break;
        case 2:
            cout<<"Water"<<endl;
            break;
        case 3:
            cout<<"Coffee"<<endl;
            break;
        case 4:
            cout<<"Orange juice"<<endl;
            break;
        case 5:
            cout<<"Lemon juice"<<endl;
            break;
        default:
            cout<<"The chosen option is not correct"<<endl;
    }
    return 0;
}