#include <iostream>

using namespace std;

class Vehicle {
 public:
  Vehicle() { cout << "Vehicle constructor" << endl; }
};

class Car : public Vehicle {};
class Bus : public Vehicle {};

int main() {
  Vehicle v;
  Car c;
  Bus b;

  return 0;
}