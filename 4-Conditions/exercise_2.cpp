/*Exercise 2.

Write an application that asks the user to input the points he achieved on an exam. 
If the number of points was higher than 50 the user should be notified that he/she passed
the exam - use the conditional operator. The number of points which a student was able to
achieve from the exam was from 0 - 100 hence, if the user inputs a number which doesn't
belong to this interval the output should be an error message.

eg.

User inputted:
30

Output:
You didn't pass the exam !

eg.

User inputted:
101

Output:
ERROR. The number of points is invalid ! 
*/

#include <iostream>
using namespace std;

int main(){

    int grad;
    cout<<"Write your puntuation in the exam"<<endl;
    cin>>grad;
    if(grad>=0 && grad <50){
        cout<<"You did not pass the exam!"<<endl;
    }else if (grad>=50 && grad<=100)
    {
       cout<<"You did pass the exam!"<<endl;
    }else{
        cout<<"ERROR. The number of points is invalid!"<<endl;
    }
    
    return 0;
}