#include <iostream>

using namespace std;

/*
Basing on the knowledge of logical operators try to modify the exercise from the lecture. 
Write a program that asks the user to input three integer numbers. The first two should 
represent the minimum and maximum value of the interval respectively. Then the program 
should check if the third number is contained within the interval. The result should be 
expressed with sentence and logical resulting boolean type variable.

eg.
User inputted:
Minimum value: 2
Maximum value: 5
Value to check: 3

Output:

Is the number 3 contained in the interval from 2 to 5 ? Because it's true print out: 1 (True)
*/
int main(){
    int a, b, c;

    cout << "a = " << endl;
    cin >> a;
    cout << "b = " << endl;
    cin >> b;
    cout << "c = " << endl;
    cin >> c;    
    
    if(c>=a && c<=b) {
        cout<<"1"<<endl;
    }else{
        cout<<"0"<<endl;
    }
    return 0;
} 