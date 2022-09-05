/*
Exercise 2.

Write a program that asks the user how many values should get added together (from 2 to 5).
Then the user should input those numbers. Write a function "addition" that takes two double
parameters and adds them together, printing out in the console the calculation. Furthermore
overload the "addition" function 3 times so it takes three parameters, four parameters and
five parameters adding those parameters in each case. Prepare a switch that uses the version
of addition function with as many parameters as the user inputted at the beginning.

eg.

User inputted:
3

Output:
Input 1 Number.
Input 2 Number.
Input 3 Number.

User inputted:
2
3
4

Output:
2 + 3 + 4 = 9

PS Keep in mind that this exercise can be solved better than the given solution when you have more knowledge of C++.
 Better solution will be shown in future lessons.
*/
#include <iostream>
using namespace std;


double addition(double, double);
double addition(double, double, double);
double addition(double, double, double, double);
double addition(double, double, double, double, double);

bool validateNumber(int a);

int main() {

    int option;
    while(true) {
        cout<<"Choose an option between 2-5: ";
        cin>>option;
        if(validateNumber(option)) {
            break;
        }
        cout<<"The option is not in the interval [2,5]"<<endl;
    }

    double * array = new double[option];
    for (int i = 0; i < option; i++)
    {
        cin>>array[i];
    }
    
    switch (option)
    {
    case 2:
        addition(array[0],array[1]);
        break;
    case 3:
        addition(array[0],array[1],array[2]);
        break;
    case 4:
        addition(array[0],array[1],array[2],array[3]);
        break;
    case 5:
        addition(array[0],array[1],array[2],array[3],array[4]);
        break;
    default:
        break;
    }
    delete [] array;
    return 0;
}


bool validateNumber(int a) {
    if(a<2 || a>5) {
        cout<<"This option is not correct, choose again!";
        return false;
    }else{
        return true;
    }
}

double addition(double n1, double n2){
    cout<<n1<<" + "<<n2<<" = "<<(n1+n2)<<endl;
    return n1+n2;
}

double addition(double n1, double n2, double n3) {
    cout<<n1<<" + "<<n2<<" + "<<n3<<" = "<<(n1+n2+n3)<<endl;
    return n1+n2+n3;
}

double addition(double n1, double n2, double n3, double n4) {
    cout<<n1<<" + "<<n2<<" + "<<n3<<" + "<<"n4"<<" = "<<(n1+n2+n3+n4)<<endl;
    return n1+n2+n3+n4;
}

double addition(double n1, double n2, double n3, double n4, double n5) {
    cout<<n1<<" + "<<n2<<" + "<<n3<<" + "<<n4<<" + "<<n5<<" = "<<(n1+n2+n3+n4)<<endl;
    return n1+n2+n3+n4+n5;
}
