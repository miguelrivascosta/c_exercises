#include <iostream>

using namespace std;

/*
Using the console input write a program that asks the user to input two integer numbers. 
After that, swap (exchange) the values inputted and print them in the console.
For example if:
a = 5;
b = 10;
at the end of your program
a = 10;
b = 5;
*/

int main() {
    int a, b;
    cout << "a = "<< endl;
    cin >> a;
    cout << "b = "<< endl;
    cin >> b;
    cout << "b = "<< b<<endl;
    cout << "a = "<< a<<endl;
    return 0;
}