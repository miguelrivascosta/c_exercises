/*
Exercise 7.

Write a program that asks the user to input 5 floating point numbers (stored in a 5 element
array of doubles). Write two functions "minValue" and "maxValue" that take into argument 
an array of doubles and returns a double. "minValue" should return the minimum value of the array
and "maxValue" should return the maximum value of the array.

eg.

User inputted:
3
2.31
2.32
17
19

Output:
The minimum value was: 2.31 - minValue(array)
The maximum value was:   19 - maxValue(array)
*/

#include <iostream>
double minValue(double [], int);
double maxValue(double [], int);

int main() {
    double a[5] = {0,1,4,3,2};
    std::cout<<"The minimum value is: "<<minValue(a,5)<<std::endl;
    std::cout<<"The maximum value is: "<<maxValue(a,5)<<std::endl;
    return 0;
}

double minValue(double *array,int size) {

    int min = array[0];
    for (int i = 1; i < size; i++)
    {
        min = min<=array[i]?min:array[i];
    }
    
    return min;
}

double maxValue(double *array,int size) {

    int max = array[0];
    for (int i = 1; i < size; i++)
    {
        max = max>=array[i]?max:array[i];
    }
    
    return max;
}