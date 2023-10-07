#include <iostream>
using namespace std;

class Box {
 public:
  int findArea(void);
  int length, width;
};

int Box::findArea() {
  return length * width;
}

int main() {
  Box box1;
  Box box2;

  box1.length = 10;
  box1.width = 10;

  box2.length = 20;
  box2.width = 20;

  cout << "Box 1 details: " << endl;
  cout << "\tLength: " << box1.length << endl;
  cout << "\tWidth : " << box1.length << endl;
  cout << "\tArea  : " << box1.findArea() << " sq. units" << endl;

  cout << endl;

  cout << "Box 2 details: " << endl;
  cout << "\tLength: " << box2.length << endl;
  cout << "\tWidth : " << box2.length << endl;
  cout << "\tArea  : " << box2.findArea() << " sq. units" << endl;

  return 0;
}