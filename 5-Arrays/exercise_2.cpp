/*
Exercise 1.
Create a two dimensional 3x3 array of integers that holds some numbers of your choice (each array cell should be
initialised in program).

Write a program that asks the user to input x and y numbers (from 1 to 3). The program prints out
in the console the value that is stored in the array cell numbered by x, y coordinates. 
Take into consideration that coordinates starts counting from ONE when array starts counting from ZERO.

eg.

User inputted:
x: 2
y: 2

Output:
cout << array[1][1];
*/
#include <iostream>
using namespace std;

int main() {
    int array[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Write number in cell ("<<i+1<<","<<j+1<<"): ";
            cin>>array[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}