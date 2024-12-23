
#include <iostream>
#include <cmath>
const double PI=3.141592653589793;
using namespace std;

class Shape {
public:
    virtual double getArea() const = 0;
    virtual ~Shape() {}
};

class Rectangle : public Shape {
    double length, breadth;
public:
    Rectangle(double l, double b) : length(l), breadth(b) {}
    double getArea() const override { return length * breadth; }
};

class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}
    double getArea() const override { 
        return PI * radius * radius; }
};

class Triangle : public Shape {
    double base, height;
public:
    Triangle(double b, double h) : base(b), height(h) {}
    double getArea() const override { return 0.5 * base * height; }
};

int main() {
    Shape* shapes[] = {
        new Rectangle(10, 5),
        new Circle(7),
        new Triangle(6, 4)
    };
    for (Shape* shape : shapes) {
        cout << "Area: " << shape->getArea() << "\n";
        delete shape;}
    return 0;
}
