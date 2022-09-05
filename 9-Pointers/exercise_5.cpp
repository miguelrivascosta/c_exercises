/*
Exercise 2.

Create a function "swapTwoValues" that swaps the value of one variable with the value of 
the second variable. Both variables should be sent as the arguments. Instead of using
references use pointers. 
*/

#include <iostream>
using namespace std;

void swapTwoValues(int *, int *);
int main() {
    int a = 5, b=10;
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    cout<<endl;
    swapTwoValues(&a,&b);
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;    
    return 0;
}

void swapTwoValues(int * a, int * b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}