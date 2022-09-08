/*
    Fibonacci recursive
*/

#include <iostream>
using namespace std;

int fibonnaci(int);
int main() {
    int n;
    cout<<"Write the fibonnaci number: ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cout<<i<<":"<<fibonnaci(i)<<endl;
    }
    
    return 0;
}



int fibonnaci(int n) {
    if(n == 0) {
        return 0;
    } else if ( n == 1)
    {
        return 1;
    }else{
        return fibonnaci(n-1)+fibonnaci(n-2);
    }
    
}
