/*
Exercise 1.

Write a function called "setValue" which takes one integer argument. The function should
ask the user to input a value and set the value of the sent argument. Write a simple program
in which you should declare an integer variable and send it to the setValue function. Then
print out the value of the variable in the console.
*/

#include <iostream>
using namespace std;

void setValue(int &);

int main() {
    int x = 0;
    setValue(x);
    cout<<"The value of x is "<<x<<endl;

    return 0;
}

void setValue(int & v){
    cout<<"Input value: ";
    cin>>v;
}