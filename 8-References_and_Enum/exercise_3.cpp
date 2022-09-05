/*

Exercise 2.

Write a function called "checkIfTheSame" that will take two integer arguments. Then the 
function checks the sent arguments for:
a) equality
b) if the two arguments are completely the same (values and addresses are the same)
c) if the values are the same but the addresses are different
d) if they are completely different. 
Each condition if satisfied should print out in the screen the info about the variables. Declare 4 variables a, b, c and d. 
Variables a and b should have different values, c should be equal to a and d should be a
reference to 'a'. Then sent those variables in different combinations to the "checkIfTheSame"
function (a and b, a and c, a and d).

*/

#include <iostream>
using namespace std;

void checkIfTheSame(int &,int &);

int main() {
    int a = 10;
    int b = 5;
    int c = a;
    int &d = a;

    checkIfTheSame(a,b);
    checkIfTheSame(a,c);
    checkIfTheSame(a,d);
}

void checkIfTheSame(int &var1, int &var2){
    if(var1 == var2 && &var1 == &var2) {
        cout<< "The variables are the same"<<endl;
    }else if(var1 == var2 && &var1 != &var2){
        cout<<"The value of the variables is the same but the address is different"<<endl;
    }else{
        cout<<"The variables are different"<<endl;
    }
}