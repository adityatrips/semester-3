#include <iostream>
using namespace std;

class BaseClass {
 public:
  BaseClass() : baseValue(20) {}
  BaseClass(int aValue) : baseValue(aValue) {}
  int baseValue;
};

class DerivedClass : public BaseClass {
 public:
  DerivedClass() : derivedValue(10) {}
  DerivedClass(int aDerivedValue) : BaseClass(15), derivedValue(aDerivedValue) {}
  int getDerivedValue() { return derivedValue; }

 private:
  int derivedValue;
};

int main() {
  BaseClass base;
  DerivedClass child(5);

  cout << base.baseValue << endl;
  cout << child.baseValue << endl;
  cout << child.getDerivedValue() << endl;

  return 0;
}