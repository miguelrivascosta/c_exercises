#include <iostream>
using namespace std;

/*
Exercise 3. 
Write a program that asks the user to input two numbers and calculates their sum (addition).
Print the result on in the console.

Exercise 4.
Write a program that asks the user to input two numbers and calculates their difference (subtraction).
Print the result in the console.

Exercise 5.
Write a program that asks the user to input two numbers and calculates their product (multiplication).
Print the result in the console.

Exercise 6.
Write a program that asks the user to input two numbers and calculates their quotient (divison).
Print the result in the console.

Exercise 7.
Write a program that asks the user to input two numbers and calculates the remainder of their divison
(modulo). Print the result in the console.
*/

int main() {
    float a,b;
    cout << "a = " << endl;
    cin >> a;

    cout << "b = " << endl;
    cin >> b;

    // Sum
    cout << "The sum of "<< a << " and " << b << " is: "<< (a+b) << endl;
    // Substraction
    cout << "The substraction of "<< a << " and " << b << " is: "<< (a-b) << endl;
    // Multiplication
    cout << "The multiplication of "<< a << " and " << b << " is: "<< (a*b) << endl;
    // Division
    cout << "The division of "<< a << " and " << b << " is: "<< (a/b) << endl;
    //Modulo
    cout << "The modulo of "<< a << " and " << b << " is: "<< ((int)a%(int)b) << endl;

    return 0;
}