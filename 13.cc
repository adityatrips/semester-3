#include <iostream>
using namespace std;

class Box {
 public:
  static int objectCount;

  Box() {
    cout << "Constructor called." << endl;
    objectCount++;
  }
};

int Box::objectCount = 0;

int main() {
  Box box1;
  Box box2;

  cout << "Total count of Box's objects: " << Box::objectCount;

  return 0;
}