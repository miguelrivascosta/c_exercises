/*
Exercise 4.

Modify the program from the last three exercises in order to prevent situations where:
- values of x or y coordinates aren't in the interval <1;3>
- the inputted cell already has a 'X' or 'O' sign on it
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
    system("clear");

    while(true){
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                    cout<<plane[i][j]<<"     ";
            } 
            cout<<endl<<endl<<endl;
        }
        cout<<"Player "<<player+1<<" inputted:"<<endl;
        cout<<"x: ";
        cin>>x;
        if (x<1 || x>3){
            cout<<"This position is not valid"<<endl;
            continue;
        }
        cout<<"y: ";
        cin>>y;
        if(y<1 || y>3){
            cout<<"This position is not valid"<<endl;
            continue;
        }
        system("clear");
        x--;
        y--;
        if(plane[x][y] == 'x' || plane[x][y] == 'o'){
            cout<<"This position is not valid"<<endl;
            continue;
        }else{
            plane[x][y] = sym[player];
            player = player == 0? player = 1: player = 0;
        }
    }
    return 0;
}