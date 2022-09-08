/*
    Write a number:
    Write the number of multiples:

    Ex.
    Write a number: 10
    Write the maximum number to search: 30

    Ouput: 0, 10, 20, 30

*/


#include <iostream>
using namespace std;

int main() {
    int number, nMult;
    cout<<"Write a number: ";
    cin>>number;

    cout<<"Maximum number: ";
    cin>>nMult;

    for (int i = 0; i <= nMult; i++)
    {   
        if(i % number == 0)
            cout<<i<<" ";
    }
    cout<<endl;

}