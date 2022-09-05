/*
Exercise 1.

Write a function "addition". When the function gets invoked - addition(); - the user is
asked to input any two numbers which are added together. The calculation is printed out
in the console.

Exercise 2.

Write a function "subtraction". When the function gets invoked - subtraction(); - the user
is asked to input any two numbers: the one to subtract from and the one to subtract with.
The calculation is printed out in the console.

Exercise 3.

Write a function "multiplication". When the function gets invoked - multiplication(); - the
user is asked to input any two numbers: the one to multiply and the one to multiply with.
The calculation is printed out in the console.

Exercise 4.

Write a function "division". When the function gets invoked - division(); - the user is
asked to input any two numbers: the one to divide and the one to divide by. The calculation
is printed out in the console.

Exercise 5.

Write a function "exponentiation". When the function gets invoked - exponentiation(); - the user
is asked to input any two numbers: the base and the exponent (n-th power). The calculation is
printed out in the console.


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

int main() {

    addition();
    substraction();
    multiplication();
    division();
    exponentiation();
    return 0;
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