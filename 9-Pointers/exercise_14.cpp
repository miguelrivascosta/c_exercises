/*
Exercise 3.

Write a program that asks the user to input a number of characters he would like to input. Then
create a dynamic array of characters where the number inputted by the user stands for the size
of the array. Next the user should input as many characters as the size of the array. The characaters
should be stored in the dynamic array one by one. Print out in the console all of the characters 
in the array, thus creating a string of characters. Remember to free the memory.

eg.

User Inputted:
3
a
b
c

Output:
1 character: a
2 character: b
3 character: c
The inputted string of characters was: abc
*/

#include <iostream>
using namespace std;

int main() {
    int size;
    cout<<"Number of char to input: ";
    cin>>size;
    char * array = new char[size];

    for (size_t i = 0; i < size; i++)
    {
        cout<<"Write char: ";
        cin>>array[i];
    }
    
    cout<<"User output:"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<endl;
    }
    
    delete [] array;
    return 0;
}