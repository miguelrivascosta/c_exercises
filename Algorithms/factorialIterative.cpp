/*
    FACTORIAL ITERATIVE

*/

#include <iostream>
using namespace std;

int main() {

    int number, result;
    cout<<"Write a number to compute factorial: ";
    cin>>number;
    result = number;
    for (int i = number-1; i > 0; i--)
    {
        result *=i;
    }
    
    cout<<"Result: "<<result<<endl;
    return 0;
}