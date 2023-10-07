#include <stdlib.h>

#include <iostream>

using namespace std;

class OuterClass {
 public:
  class InnerClass {
   public:
    void print() {
      cout << "InnerClass" << endl;
    }
  };
  void print() {
    cout << "OuterClass" << endl;
  }
};

int main() {
  OuterClass outer;
  OuterClass::InnerClass inner;

  outer.print();
  inner.print();

  return 0;
}