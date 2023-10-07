#include <cmath>
#include <iostream>
using namespace std;

class Shape {
   private:
    double radius;
    double length;
    double width;

   public:
    Shape() : radius(0), length(0), width(0) {}
    Shape(double r) : radius(r), length(0), width(0) {}
    Shape(double l, double w) : radius(0), length(l), width(w) {}

    ~Shape() {}

    double rectanglePerimeter() {
        return 2 * (length + width);
    }

    double circlePerimeter() {
        return 2 * M_PI * radius;
    }
};

int main() {
    Shape s1(5.0);
    Shape s2(3.0, 4.0);

    cout << "Rectangle perimeter: " << s2.rectanglePerimeter() << endl;
    cout << "Circle perimeter: " << s1.circlePerimeter() << endl;

    return 0;
}
