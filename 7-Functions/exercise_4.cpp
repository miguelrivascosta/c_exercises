/*
Exercise 1.

Initialize three variables with different types (int, double, string). Write a function 
"variableType" and overload it two times. Each three overloaded functions should take as
an argument different type of variable eg. variableType(int), variableType(double),
variableType(string). Send the variables created in the beginning to the variableType
function with corresponding type of argument and print out in the screen information
about what type of variable was used.

eg.
Output:
2 - this variable was an integer
0.123 - this variable was a double
"What a beautiful day" - this variable was a string
*/
#include <iostream>
void variableType(int);
void variableType(double);
void variableType(float);
void variableType(std::string);
int main() {
    int i = 0;
    float f = 0.1;
    double d = 0.5; 
    std::string s = "What a beautiful day";

    variableType(i);
    variableType(f);
    variableType(d);
    variableType(s);
    return 0;
}

void variableType(int a){
    std::cout << a << " - This variable is an int"<<std::endl;
}

void variableType(float a){
    std::cout << a << " - This variable is a float"<<std::endl;
}

void variableType(double a){
    std::cout << a << " - This variable is a double"<<std::endl;
}

void variableType(std::string a){
    std::cout << a << " - This variable is a string"<<std::endl;
}