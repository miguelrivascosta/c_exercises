#include <iostream>
#include <typeinfo>

/*
Let's assume that we are creating an application for a hotel management.  
At this stage of development we need to prepare variables for keeping most important information about rooms. 
Declare variables which will contain: 
room number, floor level, first name of person renting, last name of person renting, information about meals (if included, true or false). 
Choose proper variable type and use self descriptive names. 
*/

using namespace std;

int main() {
    
    int room_number,floor_level;
    string first_name, last_name; 
    bool meals;

    cout << typeid(room_number).name() << endl;
    cout << typeid(floor_level).name() << endl;
    cout << typeid(first_name).name() << endl;
    cout << typeid(last_name).name() << endl;
    cout << typeid(meals).name() << endl;
    return 0;
}
