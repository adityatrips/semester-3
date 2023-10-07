#include <iostream>
using namespace std;

class Point {
    int x;
public:
    void setX(int a) {
        cout << "X = " << a << endl;
    }
};

int main() {
    Point p1;
    Point *p;
    p = &p1;
    p->setX(10);
}