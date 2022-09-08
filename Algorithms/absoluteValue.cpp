/*
EXERCISE:
    make the absolute value with the library cmath and with programming
*/

#include <iostream>
using namespace std;

int main() {

    double x,abs_x;
    cout<<"x=";
    cin>>x;

    abs_x = x>0?x:-1*x;
    cout<<"|x| with programming"<<endl;
    cout<<"|x|="<<abs_x<<endl;
 
    cout<<"|x| with cmath"<<endl;
    cout<<"|x|="<<abs(x)<<endl;
    return 0;
}