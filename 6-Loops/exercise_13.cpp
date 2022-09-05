/*
Exercise 3.

Working on the program from the exercises 1 and 2 modify the code in order to let the user
place 'X' and 'O' signs (like in tick-tack-toe game). The signs should be placed in turns
(alternately, once X, once O to simulate two players playing).


eg.

    1     2     3



    4     5     6



    7     8     9


Player 1 inputted:
x: 2
y: 3

Output:

    1     2     3



    4     5     6



    7     X     9

Player 2 inputted:
x: 1
y: 1

Output:

    O     2     3



    4     5     6



    7     X     9

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
    int x,y,player=0;
    char sym[2] = {'x','o'};
    while(true){
        
        cout<<"Player "<<player+1<<" inputted:"<<endl;
        cout<<"x: ";
        cin>>x;
        cout<<"y: ";
        cin>>y;
        x--;
        y--;
        system("clear");
        plane[x][y] = sym[player];

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                    cout<<plane[i][j]<<"     ";
            } 
            cout<<endl<<endl<<endl;
        }
        player = player == 0? player = 1: player = 0;

    }
    return 0;
}