/*
Exercise 2.

Write a program that prints out in the console all upper case and lower case letters from
the alphabet (A-Z).

eg.

Output:
A a B b C c D d E e F f G g H h I i J j K k L l M m N n O o P p Q q R r S s T t U u V v W w X x Y y Z z

*/
#include <iostream>
using namespace std;
int main() {
    for (int i = 65; i <= 90; i++)
    {
        cout<<static_cast<char>(i)<<" "<<static_cast<char>(i+32)<<" ";
    }
    return 0;
}