/*
    Find the maximum value in an array
*/

#include <iostream>
#include <algorithm>
using namespace std;

int * maximum(int*,int);

int main() {

    int array[] = {1,2,3,4};
    cout<<*maximum(array,4)<<endl;

    return 0;
}

int * maximum(int * array, int size){
    
    int * max = array;
    for (int i = 1; i < size; i++)
    {
        if(*max<*(array+i)){
            max = array+i;
        }
    }
    
    return max;
}