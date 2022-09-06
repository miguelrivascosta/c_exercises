/*
Exercise 4.

Create a function "bubbleSort". The function should take three arguments, array and its 
size and order of sorting. Depending on the third parameter the function should either sort
the array with ascending or descending order, the default argument should be set as ascending.


Concerning the workflow of the bubble sort algorithm please visit the websites below.
However, try to develop the code on your own. Use the "swapTwoValues" function to simplify the
algorithm and "printArrayValues" function to print the values of the sorted array after the
procedure is done.

https://en.wikipedia.org/wiki/Bubble_sort
http://www.go4expert.com/articles/bubble-sort-algorithm-absolute-beginners-t27883/
*/

#include <iostream>
using namespace std;

void bubbleSort(int *, int, bool);
void swapTwoValues(int *, int *);
void printArrayValues(int *, int);

int main() {
    int array[] = {3, 1, 2, 0, 9};
    bubbleSort(array,5,false);
    printArrayValues(array,5);
    return 0;
}



void swapTwoValues(int * a, int * b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void bubbleSort(int * array, int size, bool mode){
    if(mode)
    {
        cout<<"Ascending order"<<endl;
        for (int i = size; i > 0; i--){
            for (int j = 1; j < i; j++)
            {
                if(array[j-1]>array[j]){
                    swapTwoValues(&array[j-1],&array[j]);
                }
            }
        }
    }else{
        cout<<"Descending order"<<endl;
        for (int i = size; i > 0; i--){
            for (int j = 1; j < i; j++)
            {
                if(array[j-1]<array[j]){
                    swapTwoValues(&array[j-1],&array[j]);
                }
            }
        }
    }
}

void printArrayValues(int * array, int size){
    for (int i = 0; i < size; i++)
    {
        cout<<*(array+i)<<endl;
    }
}