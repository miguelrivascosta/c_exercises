/*
Exercise 6.

Copy the functions and their declarations created in the exercises from 1 to 5 and write sixth
function "chooseOperation". The "chooseOperation" function should take one char parameter. The
body of the function should contain a switch for the choice parameter which depending on the
user input should invoke the corresponding mathematical functions from the exercises 1 to 5.

Write a simple calculator program that asks the user to choose a mathematical operation to perform
by inputting an operator symbol: '+' - addition, '-' - subtraction, '*' - multiplication,
'/' - division, '^' - exponentiation. The mathematical symbol is used as the parameter for
chooseOperation function. The calculator should work in an infinite loop.

eg.

User inputted:
+

Output:
The result of addition function
*/


#include <iostream>
using namespace std;

void addition();
void substraction();
void multiplication();
void division();
void exponentiation();
void chooseOperation(char);

int main() {
    char option;
    cout<<"Choose an operation: ";
    cin>>option;
    chooseOperation(option);
    return 0;
}

void chooseOperation(char option) {

    switch (option)
    {
    case '+':
        addition();
        break;
    case '-':
        substraction();
        break;
    case '*':
        multiplication();
        break;
    case '/':
        division();
        break;
    case '^':
        exponentiation();
        break;
    default:
        break;
    }
}
void addition(){
    int a,b;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    cout<<"Result = "<<(a+b)<<endl;
}
void substraction(){
    int a,b;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    cout<<"Result = "<<(a-b)<<endl;
}
void multiplication(){
    int a,b;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    cout<<"Result = "<<(a*b)<<endl;
}
void division(){
    int a,b;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    cout<<"Result = "<<(a/b)<<endl;
}
void exponentiation(){
    int a,b,tmp;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    tmp = a;
    for (int i = 0; i < b-1; i++)
    {
       tmp *= a;
    }
    
    cout<<"Result = "<<tmp<<endl;
}