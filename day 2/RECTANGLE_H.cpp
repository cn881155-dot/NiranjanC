#infndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
    private:
     double length;
     double width;
     
    public:
     Rectangle();
     Rectangle(double 1,double w);
     void setDimensions(double 1,double w);
     double area();
     double perimeter();
     void display();
};

#endif
#include"Rectangle.h"
#include <iostream>
using namespace std;
Rectangle::Rectangle() {
    length=0;
    width=0;
}
Rectangle::Rectangle(double 1,double w) {
    length l;
    width w;
}
void Rectangle::setDimensions(double 1,double w) {
    length=l;
    width=w;
}
double Rectangle::area() {
    return length*width;
}
double Rectangle::perimeter() {
    return 2*(length+width);
}
void Rectangle::display() {
    cout<<"Rectangle:"<<length<<"x"<<width<<endl;
    cout<<"Area:"<<area()<<",perimeter"<<perimeter()<<endl;
}