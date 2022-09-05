/*
Exercise 3.

Create functions "fillArrayWithValues" and "printArrayValues". Both of the functions should
take the array and its size as the arguments. First function should fill the array with values,
the second should print all values of the array.
*/

#include <iostream>
using namespace std;

void fillArrayWithValues(int *, int);
void printArrayValues(int *, int);


int main() {
    int size = 5, array[size];
    fillArrayWithValues(array,size);
    printArrayValues(array,size);
}

void fillArrayWithValues(int * array, int size){
    for (int i = 0; i < size; i++)
    {
        *(array+i) = i;
    }
    
}

void printArrayValues(int * array, int size){
    for (int i = 0; i < size; i++)
    {
        cout<<*(array+i)<<endl;
    }
    

}