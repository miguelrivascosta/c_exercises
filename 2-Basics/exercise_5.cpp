#include <iostream>

/*
Write a program that asks the user to input three different line of text (3 strings) 
then using cout print the combination of the three in the console.
*/

using namespace std;
int main() {
    string name1,name2,name3;
    cout << "Enter line 1 of text:"<<endl;
    cin >> name1;

    cout << "Enter line 2 of text:"<<endl;
    cin >> name2;

    cout << "Enter line 3 of text:"<<endl;
    cin >> name3;

    cout << "Name1 = " << name1 << endl;
    cout << "Name2 = " << name2 << endl; 
    cout << "Name3 = " << name3 << endl;

    return 0;
}