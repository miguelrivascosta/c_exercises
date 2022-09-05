/*
Exercise 1.
Write a program that asks the user to input a value of length expressed in inches, convert
it to centimeters and print in the console.
*/

/*

*/
#include <iostream>
using namespace std;

int main() {
    float len1;
    string message1 = "inches";
    string message2 = "cm";
    cout << "Write  a length in "<< message1 <<": " << endl;
    cin >> len1;
    cout << "The lenght in " << message2 << " is: "<< (len1*2,54) << endl;
    return 0;
}