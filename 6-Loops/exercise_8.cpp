/*
Exercise 4.

Write a program that asks the user to input any integer number n. Then calculate the result
of the factorial operation (n! - 1*2*3*...*n). Print in the console result of the n factorial
as well as the factorial of numbers before n.

eg.

User inputted:
4

Output:
1! = 1
2! = 2
3! = 6
4! = 24
*/

#include <iostream>
using namespace std;

int main() {
    int number;
    cout<<"Write a number: ";
    cin>>number;
    
    for (int i = number-1; i > 0; i--)
    {
        number*=i;
    }
    cout<<"Factorial = "<<number<<endl;
    return 0;
}

