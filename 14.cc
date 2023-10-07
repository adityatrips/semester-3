#include <iostream>

using namespace std;

class Vehicle {
 public:
  Vehicle() {
    cout << "Vehicle constructor" << endl;
  }
};

class FourWheelVehicle : public Vehicle {
 public:
  FourWheelVehicle() {
    cout << "FourWheelVehicle constructor" << endl;
  }
};

class Car : public FourWheelVehicle {};

int main() {
  Car car;

  return 0;
}