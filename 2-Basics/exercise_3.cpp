#include <iostream>

/*
Initialize the variables from the first exercise with values of your own choice. 
Use cout (console output) to print out the values and their addresses in console (each should be on different line)
*/

using std::cout;
using std::endl;

int main() {
    char a = 'a';
    short b = 10;
    int c = -10;
    float d = 10.1;
    double e = 10.5;

    cout << "char a: " << a << " address of a: " << static_cast<const void *>(&a) << endl;
    cout << "short b: " << b << " address of b: " << &b << endl;
    cout << "int c: " << c << " address of c: " << &c << endl;
    cout << "float d: " << d << " address of d: " << &d << endl;
    cout << "double e: " << e << " address of e: " << &e << endl;

    return 0;
}