/*

EXERCISE - STEP1

Create an abstract class Shape with three virtual methods: introduce(), calculateArea()
calculateCircumference(). Create two classes: "Rectangle" and "Circle" that inherit from
the Shape class. Develop the implementation of the virtual methods from the Shape class so:

void introduce() - prints out in the console: "I am a Rectangle!" or "I am a Circle!"
double calculateArea() - returns the Area of the shape
double calculateCircumference() - returns the circumference of the shape

Think about the member variables needed for each of the derived classes.
In the main function create three functions: introduceShape(), calculateShapeArea() and
calculateShapeCircumference(). All three of those methods should take as the argument a 
polymorphic pointer to the Shape type and invoke the corresponding function from the sent
shape. Create at least one object for both Rectangle and Circle and send their addresses
to invoke those functions. Print out in the console the results like in example below:

eg.
I AM A RECTANGLE !
My area is: 10, my circumference is: 14

I AM A CIRCLE !
My area is: 28.26, my circumference is: 18.84

*/

#include <iostream>
#include "shapes.h"
using namespace std;

void introduceShape(Shape *);
double calculateShapeArea(Shape *);
double calculateShapeCircumference(Shape *);
int main() {
    Circle circle(3.5);
    Rectangle rectangle(2,4);

    introduceShape(&circle);
    cout<<"My area is "<<calculateShapeArea(&circle)<<". "<<"My circumference is "<<calculateShapeCircumference(&circle)<<endl;

    introduceShape(&rectangle);
    cout<<"My area is "<<calculateShapeArea(&rectangle)<<". "<<"My circumference is "<<calculateShapeCircumference(&rectangle)<<endl; 
    return 0;
}

void introduceShape(Shape * shape){
    shape->introduce();
}

double calculateShapeArea(Shape * shape) {
    return shape->calculateArea();
}

double calculateShapeCircumference(Shape * shape) {
    return shape->calculateCircumference();
}