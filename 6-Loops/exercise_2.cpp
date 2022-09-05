/*
Exercise 2.

Write a program that shows the user current sum of numbers (starting with 0). Then it asks if
the user wants to add next number (raising by 1 in an infinite loop). If the user inputs Y or y
it adds the said number. If the user inputs N or n the number is skipped and gets incremented
by 1 (continue). If the user inputs anything else then Y/y or N/n the loop closes (break).

eg.

Output:
The current sum is: 0.
Do you want to add 1 ? 

User inputted:
N/n

Output:
The current sum is: 0.
Do you want to add 2 ?

User inputted:
Y/y

Output:
The current sum is: 2.
Do you want to add 3 ?
*/

#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int ctd = 1;
    char choice;
    while(true) {
        cout << "The current sum is "<<sum<<endl;
        cout << "Do you want to add "<<ctd<<" ?"<<endl;
        cin >> choice;
        if(choice == 'y' || choice == 'Y'){
            sum+=ctd;
            ctd+=1;
        }else if(choice == 'n' || choice == 'N') {
            ctd += 1;
        } else {
            break;
        }
    }

    return 0;
}