/*
Write a program that lists the months (January to December) from 1 to 12.It should ask the
user to input the number of the month. Then using switch the program answers how many days
there are in that month. In case of February, the user has to input the year (in order to
check leap year). Keep the code as short as possible !

The conditions to satisfy a leap year:

The year must be divisible by 4.
If the year is divisible by 100, then it is not a leap year.
EXCEPT if the year is divisible by 400, then it is a leap year.

eg.

User inputted:
1

Output:
This month has 31 days.

eg.

User inputted:
2

Output:
In which year ?

User Inputted:
2000

Output:
The month february has 29 days in year 2000
*/

#include <iostream>
using namespace std;

int main() {

    int option;
    cout << "0. January" << endl;
    cout << "1. February" << endl;
    cout << "2. March" << endl;
    cout << "3. April" << endl;
    cout << "4. May" << endl;
    cout << "5. June" << endl;
    cout << "6. July" << endl;
    cout << "7. August" << endl;
    cout << "8. September" << endl;
    cout << "9. October" << endl;
    cout << "10. November" << endl;
    cout << "11. December" << endl;
    cout << "Choose your option" << endl;

    cin >> option;
    switch(option){
        case 0:
            cout << "January - 31 days" << endl;
            break;
        case 1:
            cout << "February" << endl;
            cout << "Write the year: ";
            int year;
            cin >> year;
            if(((year%4==0) && !(year%100==0)) ||  ((year%4==0) && (year%100==0) && (year%400==0))){
                cout<<"Leap year 29 days"<<endl;
            }else{
                cout<<"Not leap year 28 days"<<endl; 
            }
            break;
        case 2:
            cout << "March - 31 days" << endl;
            break;
        case 3:
            cout << "April - 30 days" << endl;
            break;
        case 4:
            cout << "May - 31 days" << endl;
            break;
        case 5:
            cout << "June - 30 days" << endl;
            break;
        case 6:
            cout << "July - 31 days" << endl;
            break;
        case 7:
            cout << "August - 31 days" << endl;
            break;
        case 8:
            cout << "September - 30 days" << endl;
            break;
        case 9:
            cout << "October - 31 days" << endl;
            break;
        case 10:
            cout << "November - 30 days" << endl;
            break;
        case 11:
            cout << "December - 31 days" << endl;
            break;
        default:
            cout << "This option is not correct"<<endl;
    }
    return 0;
}