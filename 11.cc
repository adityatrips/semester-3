#include <cstdlib>
#include <iostream>
using namespace std;

class BaseClass {
 public:
  int x;
  void setX(int X) {
    x = X;
  }

  int getX() {
    return x;
  }
};

class SubClass : private BaseClass {
 public:
  SubClass(int a) {
    cout << "SubClass init called!" << endl;
    this->setX(a);
    cout << "X changed from SubClass: " << this->getX() << endl;
  }
};

int main() {
  BaseClass base;
  base.setX(10);
  cout << "X changed from BaseClass: " << base.getX() << endl;

  SubClass sub(15);
  return 0;
}