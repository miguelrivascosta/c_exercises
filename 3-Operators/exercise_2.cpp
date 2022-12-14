#include <iostream>
/*
ÂșExercise 1.

Write a program that asks the user to input three integer numbers. The first two should
represent the minimum and maximum value of the interval respectively. Then the program
should check if the third number is greater or equal to the minimum value and if it is 
lower or equal to the maximum value. The result should be expressed with two sentences 
and logical result using boolean type variable.

eg.

User inputted:
Minimum value: 2
Maximum value: 5
Value to check: 3

Output:
Is the value 3 greater or equal to min value ? 1 (True)
Is the value 3 lower or equal to max value ? 1 (True)
*/
using namespace std;


int main() {
    int min,max,c;

    cout << "min = " << endl;
    cin >> min;
    cout << "max = " << endl;
    cin >> max;
    cout << "Value to check = " << endl;
    cin >> c;

    bool greater_equal = c>=max ? 1 : 0;
    bool lower_equal = c<=min ? 1:0;

    if (greater_equal){
        cout << "Is the value " << c << " greater or equal to " << min << "  value ? "<< greater_equal << " (True)"<<endl;
    }else {
        cout << "Is the value " << c << " greater or equal to " << min << "  value ? "<< greater_equal << " (False)"<<endl;
    }

    if (lower_equal){
        cout << "Is the value " << c << " lower or equal to " << min << "  value ? "<< lower_equal << " (True)"<<endl;
    }else {
        cout << "Is the value " << c << " lower or equal to " << min << "  value ? "<< lower_equal << " (False)"<<endl;
    }
}