#include <iostream>
using namespace std;

class Circle {
protected:
    float radius;
    
public:
    Circle(float r) {
        radius = r;
    }
    
    virtual float area() {
        float a;
        a = 3.14 * radius * radius;
        return a;
    }
};

class Cylinder : public Circle {
    float height;

public:
    Cylinder(float r, float h) : Circle(r) {
        height = h;
    }
    
    float area() {
        float a;
        a =  (2 * 3.14 * radius * radius);
        return a;
    }
};

int main() {
    Circle *cirPtr;
    Circle circle(8);
    Cylinder cylinder(8, 4);
    
    cirPtr = &circle;
    cout << endl << "Area of circle   : " << cirPtr->area();
    
    cirPtr = &cylinder;
    cout << endl << "Area of cylinder : " << cirPtr->area();
    
    return 0;
}