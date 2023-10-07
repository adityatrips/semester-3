#include <stdlib.h>

#include <iostream>

using namespace std;

class AreaCalculator {
 public:
  class Rectangle {
   public:
    Rectangle(int w, int h) : width(w), height(h) {}
    int getArea() {
      return width * height;
    }

   private:
    int width;
    int height;
  };
  class Circle {
   public:
    Circle(int r) : radius(r) {}
    int getArea() {
      return 3.14 * radius * radius;
    }

   private:
    int radius;
  };
  class Triangle {
   public:
    Triangle(int b, int h) : base(b), height(h) {}
    int getArea() {
      return 0.5 * base * height;
    }

   private:
    int base;
    int height;
  };
  int getArea(Rectangle r) {
    return r.getArea();
  }
  int getArea(Circle c) {
    return c.getArea();
  }
  int getArea(Triangle t) {
    return t.getArea();
  }
};

int main() {
  AreaCalculator ac;
  AreaCalculator::Rectangle r(3, 4);
  AreaCalculator::Circle c(5);
  AreaCalculator::Triangle t(3, 4);

  cout << "Area of the rectangle (w=3, h=4) : " << ac.getArea(r) << endl;
  cout << "Area of the circle    (rad=5)    : " << ac.getArea(c) << endl;
  cout << "Area of the triangle  (b=3, h=4) : " << ac.getArea(t) << endl;

  return 0;
}