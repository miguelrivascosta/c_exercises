/*
    Fibonacci iterative
*/

#include <iostream>
using namespace std;

int main() {
    int n, fn, fn2 = 0, fn1 = 1;
    cout<<"n: ";
    cin>>n;


    for (int i = 0; i < n; i++)
    {
        if(i==0){
            cout<<i<<":"<<fn2<<" "<<endl;
        }else if (i==1)
        {
            cout<<i<<":"<<fn1<<" "<<endl;
        }else{
            
            fn = fn1+fn2;
            fn2 = fn1;
            fn1 = fn;
            cout<<i<<":"<<fn<<" "<<endl;
        }
        

    }
    return 0;
}

