/*
EXERCISE - STEP2

Redefine the Shape, Rectangle and Circle classes destructors. Add inside of them simple message:
Shape - "Shape destructor!", Rectangle - "Rectangle destructor!", Circle - "Circle destructor!".
And build the program to check when the destructors get invoked.

eg.
I AM A RECTANGLE !
My area is: 10, my circumference is: 14

I AM A CIRCLE !
My area is: 28.26, my circumference is: 18.84

Circle destructor !
Shape destructor !
Rectangle destructor !
Shape destructor !

Next, allocate the memory dynamically to create the rectangle and circle object. However, 
they should be allocated as Shape* pointers eg: (Shape* rectangle1 = new Rectangle(2,3)).
Remember to free the allocated addresses at the end of the main and look at the output:

eg.
I AM A RECTANGLE !
My area is: 10, my circumference is: 14

I AM A CIRCLE !
My area is: 28.26, my circumference is: 18.84

Shape destructor !
Shape destructor !

As you can see in the example presented, only the Shape destructor was invoked ! But we have
reserved the memory for a Rectangle and a Cricle. Now all the memory that was allocated for
additional member variables and member functions from Rectangle and Circle will not be deallocated
and you have a leak in your program. Create a virtual destructor for the Shape class to free
all of the memory allocated.

eg.

I AM A RECTANGLE !
My area is: 10, my circumference is: 14

I AM A CIRCLE !
My area is: 28.26, my circumference is: 18.84

Rectangle destructor !
Shape destructor !
Circle destructor !
Shape destructor !
*/

#include <iostream>
#include "shapes.h"
using namespace std;

void introduceShape(Shape *);
double calculateShapeArea(Shape *);
double calculateShapeCircumference(Shape *);
int main() {
    Shape * circle = new Circle(3.5);
    Shape * rectangle = new Rectangle(2,4);

    introduceShape(circle);
    cout<<"My area is "<<calculateShapeArea(circle)<<". "<<"My circumference is "<<calculateShapeCircumference(circle)<<endl;

    introduceShape(rectangle);
    cout<<"My area is "<<calculateShapeArea(rectangle)<<". "<<"My circumference is "<<calculateShapeCircumference(rectangle)<<endl;

    delete circle;
    delete rectangle;
    
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
