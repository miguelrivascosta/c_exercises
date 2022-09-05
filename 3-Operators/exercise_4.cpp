#include <iostream>
using namespace std;

/*
Exercise 2.
Write a program that asks the user to input a temperature in celsius degrees. The result
should be the temperature expressed in Fahrenheit and Kelvin scales. Find the conversion 
formulas on the web.
*/
int main() {
    float celsius;
    string message1 = "celsius";
    string message2 = "Fahrenheit";
    string message3 = "Kelvin";
    cout << "Write  a temperature in "<< message1 <<": " << endl;
    cin >> celsius;
    cout << "The lenght in " << message2 << " is: "<< ((celsius*9/5)+32) << endl;
    cout << "The lenght in " << message3 << " is: "<< (celsius+273.15) << endl;
    return 0;
}