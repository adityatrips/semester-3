#include <iostream>

using namespace std;

class BaseClass {
 public:
  virtual void print() {
    cout << "BaseClass" << endl;
  }
};

class ChildClass : public BaseClass {
 public:
  void print() {
    cout << "ChildClass" << endl;
  }
};

int main() {
  BaseClass baseClass;
  ChildClass childClass;

  baseClass.print();
  childClass.print();

  return 0;
}