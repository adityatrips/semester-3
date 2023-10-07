#include <iostream>
using namespace std;

class Distance {
 public:
  int distOne;
  int distTwo;

  int addDistances() {
    return distOne + distTwo;
  }
};

int main() {
  Distance d1;

  d1.distOne = 10;
  d1.distTwo = 16;

  cout << "Added distances: " << d1.distOne << " units + " << d1.distTwo << " units = " << d1.distOne + d1.distTwo << " units";

  return 0;
}