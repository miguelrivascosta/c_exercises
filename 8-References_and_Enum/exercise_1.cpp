/*
Exercise 1.

Declare a string variable called "name", containing a name of your choice. For example
"Cassandra". Next declare three reference variables to "name" variable and name them
using the short version of the name you have chosen. Print out in the console all four
variables (name and its references) and their addresses.

eg.
var name = Cassandra
ref cassie = name
ref cassey = name
ref sandra = name

Output:
Cassandra 0x69fedc
Cassandra 0x69fedc
Cassandra 0x69fedc
Cassandra 0x69fedc
*/
#include <iostream>
using namespace std;

int main() {
    string name = "miguel";
    string &mig = name;
    string &gel = name;

    cout<<"name="<<name<<"address of name: "<<&name<<endl;
    cout<<"&mig="<<mig<<"address of name: "<<&mig<<endl;
    cout<<"&gel="<<gel<<"address of name: "<<&gel<<endl;
    return 0;
}
