/*
Exercise 1.

Write a program that prints out in the console a simple representation of 3x3 plane. The plane
should be filled with numbers from 1 to 9 (stored in 3x3 array representing x,y coordinates of
the plane).



    1     2     3



    4     5     6



    7     8     9


The value from coordinate (1, 1) is 1 (array[0][0]).
*/
#include <iostream>
using namespace std;
int main() {

    int plane[3][3];
    
    for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 3; j++)
       {
            plane[i][j] = j+1+i*3;
            cout<<plane[i][j]<<"     ";
       } 
       cout<<endl<<endl<<endl;
    }
    
    
    return 0;
}