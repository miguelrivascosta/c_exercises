/*
Exercise 6.

Write a program that asks the user to input 5 integer numbers (store them in a 5 element array).
Then it checks if the inputted numbers were odd or even and prints that information out in the console.

eg.

User inputted:
1
2
3
4
5

Output:
The number 1 is odd.
The number 2 is even.
The number 3 is odd.
The number 4 is even.
The number 5 is odd.
*/

#include <iostream>
using namespace std;

int main() {
    int numbers[5];
    cout<<"User inputed: "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin>>numbers[i];
    }
    cout<<"The number ";
    cout<<"Output: "<<endl;
    for (int i = 0; i < 5; i++)
    {
        if(numbers[i]%2==0){
            cout<<"The number "<<numbers[i]<<" is even"<<endl;
        }else{
            cout<<"The number "<<numbers[i]<<" is odd"<<endl;
        }
    }
    
    return 0;
}