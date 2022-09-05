/*
Exercise 2.

Modify the program from exercise 1 so that the user can now place an 'X' sign on desired cell
of the plane. After printing out the 1 to 9 on the plane, the user is asked to input x and y
coordinate to put 'X'. The plane is printed again with the modified value on the inputted
coordinates. Using system("cls") clear the screen so there is only one plane printed in the console.
If you use mac check this topic: http://stackoverflow.com/questions/27616522/cannot-use-systemcls-in-xcode-in-mac
The program should work in an infinite loop so the user can fill whole plane with 'X'-s.

eg.

    1     2     3



    4     5     6



    7     8     9


The value from coordinate (1, 3) is 7 (array[2][0]).

User inputted: 
x: 3
y: 3

Output:

    1     2     3



    4     5     6



    7     8     X


User inputted:
x: 2
y: 3

Output:

    1     2     3



    4     5     6



    7     X     X
*/

#include <iostream>
using namespace std;
int main() {

    char plane[3][3];
    
    for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 3; j++)
       {
            plane[i][j] = j+1+i*3+48;
            cout<<plane[i][j]<<"     ";
       } 
       cout<<endl<<endl<<endl;
    }
    int x,y;
    while(true){
        
        cout<<"User inputted:"<<endl;
        cout<<"x: ";
        cin>>x;
        cout<<"y: ";
        cin>>y;
        x--;
        y--;
        system("clear");
        plane[x][y] = 'x';

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                    cout<<plane[i][j]<<"     ";
            } 
            cout<<endl<<endl<<endl;
        }        
    }
    return 0;
}