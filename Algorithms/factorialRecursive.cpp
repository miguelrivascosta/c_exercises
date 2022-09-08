/*
Factorial recursive
*/

#include <iostream>
using namespace std;


int factorial(int);
int main() {

    int number;
    cout<<"Write a number to compute factorial: ";
    cin>>number;
    cout<<factorial(number)<<endl;
    return 0;
}

int factorial(int number) {
    
    if(number == 0 ) {
        return 1;
    }else{
        return number*factorial(number-1);
    }

    
}