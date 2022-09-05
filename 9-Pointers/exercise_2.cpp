/*
Exercise 1.

Declare two integer variables, the first statically allocated and the second dynamically
allocated. To the statically allocated variable declare a pointer containing its address.
To both variables assign any integer values (in case of statically allocated variable use
its pointer). Print out in the console both values and addresses of the variables. 

Try to run the program few times and look at the addresses.

eg.

Output:
The value of the statically allocated variable: 10, and the address: 0x69fef4
The value of the dynamically allocated variable: 15, and the address: 0x7b56b0

Output:
The value of the statically allocated variable: 10, and the address: 0x69fef4
The value of the dynamically allocated variable: 15, and the address: 0x715760

Output:
The value of the statically allocated variable: 10, and the address: 0x69fef4
The value of the dynamically allocated variable: 15, and the address: 0x25730
*/

#include <iostream>
using namespace std;

int main() {
    int a;
    int * a_dir = &a;
    int *b = new int;
    *a_dir = 10;
    *b = 5;
    cout<<"The value of the statically allocated variable: "<<a<<", and the address: "<<a_dir<<endl;
    cout<<"The value of the dinamically allocated variable: "<<*b<<", and the address: "<<b<<endl;
    delete b;
    return 0;
}