#ifndef SHAPES_H
#define SHAPES_H

class Shape{
    public:
        Shape();
        virtual ~Shape();
        virtual void introduce() = 0;
        virtual double calculateArea() = 0;
        virtual double calculateCircumference() = 0;
};


class Rectangle : public Shape{
    protected:
        double l1;
        double l2;
    public:
        Rectangle(double, double);
        ~Rectangle();
        void introduce();
        double calculateCircumference();
        double calculateArea();

};

class Circle : public Shape {
    protected:
        double r;
    public:
        Circle(double);
        ~Circle();
        void introduce();
        double calculateCircumference();
        double calculateArea();
};
#endif