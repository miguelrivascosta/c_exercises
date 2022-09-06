/*
Exercise 6.

Using the functions created in exercises from 1 to 5 write a program that asks the user for 
the size of the array. Declare a dynamically allocated variable and assign to it the "createArray"
function with the inputted size as the argument. Using "fillArrayWithValues" fill the created
array. And show the user the numbers he/she inputted with "printArrayValues". Then ask the user
if the array should be sorted with ascending or descending (default: ascending) order and which
sorting algorithm should be used (default bubble).

eg.

Output: 
Input the size of the array to sort:

User Inputted:
10

Output/User Inputted: 
Enter 1 element: 3
Enter 2 element: 4
Enter 3 element: 123
Enter 4 element: 15
Enter 5 element: 35
Enter 6 element: 12324
Enter 7 element: 424
Enter 8 element: 8
Enter 9 element: 9
Enter 10 element: 10

Sort Ascending - 1, Descending - 2: 2
Bubble Sort - B or b, Selection Sort - S or s: B

Output:
Array[0] = 12324
Array[1] = 424
Array[2] = 123
Array[3] = 35
Array[4] = 15
Array[5] = 10
Array[6] = 9
Array[7] = 8
Array[8] = 4
Array[9] = 3
*/

#include <iostream>
using namespace std;

void fillArrayWithValues(int *, int);
void printArrayValues(int * array, int size);
void swapTwoValues(int *, int *);
void selectionSort(int *, int, bool);
void bubbleSort(int *, int, bool);

int main() {

    int size;
    cout<<"Write array size: ";
    cin>>size;

    int * array = new int[size];
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter element "<<i+1<<": ";
        cin>>array[i];
    }

    int mode;
    cout<<"Sort Ascending - 1, Descending - 2: ";
    cin>>mode;
    
    int fmode = mode==2?0:1;

    char alg;
    cout<<"Bubble Sort - B or b, Selection Sort - S or s: ";
    cin>>alg;

    switch (alg)
    {
    case 'b':
        bubbleSort(array, size, fmode);
        break;
    case 'B':
        bubbleSort(array, size, fmode);
        break;
    case 's':
        selectionSort(array, size, fmode);
        break;
    case 'S':
        selectionSort(array, size, fmode);
        break;    
    default:
        break;
    }
    printArrayValues(array,size);

    delete [] array;

    return 0;

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

void swapTwoValues(int * a, int * b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void selectionSort(int * array, int size, bool order){
    cout<<"Entering in selectionSort"<<endl;
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

void bubbleSort(int * array, int size, bool mode){
    cout<<"Entering in bubbleSort"<<endl;
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