#include <iostream>
using namespace std;

class Box {
  int length, width;

 public:
  int getLength(void) {
    return length;
  }

  void setLength(int l) {
    length = l;
  }

  int getWidth(void) {
    return width;
  }

  void setWidth(int w) {
    width = w;
  }
};

int main() {
  Box box1;
  Box box2;

  box1.setLength(10);
  box1.setWidth(10);

  box2.setLength(20);
  box2.setWidth(20);

  cout << "Box 1 details: " << endl;
  cout << "\tLength: " << box1.getLength() << endl;
  cout << "\tWidth : " << box1.getWidth() << endl;

  cout << endl;

  cout << "Box 2 details: " << endl;
  cout << "\tLength: " << box2.getLength() << endl;
  cout << "\tWidth : " << box2.getWidth() << endl;

  return 0;
}