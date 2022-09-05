/*
Exercise 5.

Write a program that asks the user to input an integer number. Then the program should print out
in the console the inputted number of asterisks (*). Furthermore, it should break the line (endl)
every 5 asterisks printed.

eg.

User inputted:
20

Output:
*****
*****
*****
*****
*/

#include <iostream>
using namespace std;

int main() {
    int number, rows, remaind;
    cout<<"Input a number: ";
    cin>>number;
    rows = number/5;
    remaind = number%5;
    for (int i = 0; i < rows; i++)
    {
        cout<<"* * * * *"<<endl;
    }
    if(number%5 != 0 ){
        for (int i = 0; i < remaind; i++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return  0;
}