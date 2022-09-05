/*
Exercise 2.

Modify exercise 1 in order to stop the program if the PIN code was entered wrongly 5 times.
The user should be informed how many tries are left.

eg.

User inputted:
PIN: 3333
CHECKPIN: 3412

Output:
Input your pin (4 tries left): 


User inputted:
PIN: 3333
CHECKPIN: (wrong number 5 times)

Output:
You have entered a wrong PIN code for 5 times !
*/

#include <iostream>
using namespace std;


int main() {
    int pin,check_pin,number_tries = 5;
    cout<<"Write your pin: ";
    cin>>pin;


    do{
        cout<<"Input your pin ( "<<number_tries<<" tries left): ";
        cin>>check_pin;
        number_tries--;
        if(check_pin == pin) {
            cout<<"Correct pin!";
            break;
        }else if(number_tries==0) {
            cout<<"You have entered a wrong PIN code for 5 times !";
            break;
        }else{

            continue;
        }
    }while(true);
    
    return 0;
}