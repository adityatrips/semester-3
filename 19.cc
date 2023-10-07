#include <iostream>

using namespace std;

class BaseClass {
 public:
  virtual void print() = 0;
};

class ChildClass : public BaseClass {
 public:
  void print() {
    cout << "BaseClass is abstract and can't be instantiated." << endl;
  }
};

int main() {
  ChildClass childClass;

  childClass.print();

  return 0;
}