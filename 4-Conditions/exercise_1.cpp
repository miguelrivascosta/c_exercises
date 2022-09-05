/*
Exercise 1.

Write an application that asks the user to input his age. Then using the conditional
operator (ternary operator) check if the user age is higher or equal to 18. 

eg.

User inputted:
14

Output:
Your are not an adult !
*/

#include <iostream>
using namespace std;

int main() {
    int age;
    cout<<"Write your age: "<<endl;
    cin>>age;
    string var = age>=18?"You are an adult":"You are not an adult!";
    cout<<var<<endl;
    return 0;
}
