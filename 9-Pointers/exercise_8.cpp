/*
Exercise 5.

Create a function "selectionSort". The function should take three arguments, array and its
size and order of sorting. Depending on the third parameter the function should either sort
the array with ascending or descending) order, the default argument should be set as ascending.
Use the "swapTwoValues" function to simplify the algorithm and "printArrayValues" function
to print the values of the sorted array after the procedure is done.

Concerning the workflow of the selection sort algorithm please visit the websites below.
However, try to develop the code on your own. Use the "swapTwoValues" function to simplify the
algorithm and "printArrayValues" function to print the values of the sorted array after the
procedure is done.

https://en.wikipedia.org/wiki/Selection_sort
https://www.tutorialspoint.com/data_structures_algorithms/selection_sort_algorithm.htm
*/

#include <iostream>
using namespace std;

void selectionSort(int*,int,bool);
void swapTwoValues(int*,int*);
void printArrayValues(int *, int);

int main() {
    int array[] = {5,2,1,0,3};
    selectionSort(array,5,false);
    printArrayValues(array,5);
    return 0;
}

void swapTwoValues(int * a, int * b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void printArrayValues(int * array, int size){
    for (int i = 0; i < size; i++)
    {
        cout<<*(array+i)<<endl;
    }
}

void selectionSort(int * array, int size, bool order){
    if(order) {
        cout<<"Ascending order"<<endl;
        int * dir_min;
        for (int i = 0; i < size; i++)
        {
            dir_min = &array[i];
            for (int j = i+1; j < size; j++)
            {
                if(*dir_min > array[j]){
                    dir_min = &array[j];
                }
            }
            swapTwoValues(&array[i],dir_min);
            
        }
        
    }else {
        cout<<"Descend order"<<endl;
        int * dir_max;
        for (int i = 0; i < size; i++)
        {
            dir_max = &array[i];
            for (int j = i+1; j < size; j++)
            {
                if(*dir_max < array[j]){
                    dir_max = &array[j];
                }
            }
            swapTwoValues(&array[i],dir_max);
            
        }
    }
}