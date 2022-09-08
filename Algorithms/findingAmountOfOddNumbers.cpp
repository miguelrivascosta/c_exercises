/*
    EXERCISE
    1) Check if a number is odd
    2) Write as many odd numbers the user writes
        User input: 7
        Output: 1 3 5 7 9 11 13 
    3) Number the odd numbers
        1. 1
        2. 3
        3. 5
        ...
*/
#include <iostream>
using namespace std;

int main() {
    int size;
    cout<<"Write how many odd numbers do you want: ";
    cin>>size;

    int * array = new int[size];

    for (int i = 0; i < size; i++)
    {
        cout<<i+1<<": "<<2*i+1<<endl;
    }
    
    delete [] array;
    return 0;
}