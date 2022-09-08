/*
    input: 1234
    output: 4

*/

#include <iostream>
using namespace std;

int main() {
    int number, dig = 0;
    cout<<"Write an integer: "<<endl;
    cin>>number;
    
    do{
        number /= 10;
        dig++;
    }while(number!=0);
    cout<<"There are "<<dig<<" digits"<<endl;

    return 0;
}

