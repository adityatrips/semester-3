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

class SubClass : public BaseClass {
 public:
  SubClass() {
    cout << "SubClass init called!" << endl;
  }
};

int main() {
  BaseClass base;
  SubClass sub;

  base.setX(10);
  cout << "X changed from BaseClass: " << base.getX() << endl;

  sub.setX(20);
  cout << "X changed from SubClass: " << sub.getX() << endl;

  return 0;
}