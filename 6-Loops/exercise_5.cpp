/*
Exercise 1.

Write a program that asks the user to input an integer number. Then starting from that
number the program prints out in the console next 100 numbers.

eg.

User inputted:
11

Output:
12
13
14
15
...
...
111
*/

#include <iostream>
using namespace std;

int main() {
    int number;
    cout<<"User inputted: ";
    cin>>number;

    for (int i = number+1; i <= number+100; i++)
    {
        cout<<i<<endl;
    }
    
    return 0;
}