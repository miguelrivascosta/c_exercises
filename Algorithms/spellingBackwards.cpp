/*

    input: hello
    output: olleh

*/

#include <iostream>
using namespace std;

int main() {
    string word;
    cout<<"Write a word: ";
    cin>>word;

    cout<<"Len: "<<word.length()<<endl;

    for (int i = word.length()-1; i >=0; i--)
    {
        cout<<word[i];
    }
    
    return 0;
}