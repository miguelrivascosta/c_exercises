#include "shapes.h"
#include <cmath>
#include <iostream>

using namespace std;


Shape::Shape(){}
Shape::~Shape(){
    cout<<"I am a Shape destructor"<<endl;
}

Rectangle::Rectangle(double l1, double l2){
    this->l1 = l1;
    this->l2 = l2;
}
Rectangle::~Rectangle(){
    cout<<"I am in rectangle destructor"<<endl;
}

double Rectangle::calculateCircumference(){
    return 2*this->l1+2*this->l2;
}

double Rectangle::calculateArea(){
    return this->l1*this->l2;
}

void Rectangle::introduce(){
    cout<<"Hello I'am a rectangle!"<<endl;
}


Circle::Circle(double r){
    this->r = r;
}
Circle::~Circle(){
    cout<<"I am in circle destructor"<<endl;
}
double Circle::calculateCircumference(){
    return 2*M_PI*this->r;
}

double Circle::calculateArea() {
    return M_PI*this->r*this->r;
}

void Circle::introduce() {
    cout<<"Hello I'am a circle!"<<endl;
}