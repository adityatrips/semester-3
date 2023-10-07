#include <iostream>
using namespace std;

class Area {
   public:
    float AREA(int r) {
        return 3.14 * r * r;
    }

    float AREA(int l, int b) {
        return l * b;
    }

    float AREA(float b, float h) {
        return 0.5 * b * h;
    }
};

int main() {
    Area a;
    int r, l, b, h;

    cout << "Enter radius of circle: ";
    cin >> r;
    cout << "Area of circle: " << a.AREA(r) << endl;

    cout << "Enter length and breadth of rectangle: ";
    cin >> l >> b;
    cout << "Area of rectangle: " << a.AREA(l, b) << endl;

    cout << "Enter base and height of triangle: ";
    cin >> b >> h;
    cout << "Area of triangle: " << a.AREA((float)b, (float)h) << endl;

    return 0;
}
