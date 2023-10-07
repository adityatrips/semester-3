#include <iostream>
using namespace std;

void callByValue(int x) {
    x = x + 10;
    cout << "Inside callByValue function: x = " << x << endl;
}

void callByReference(int &x) {
    x = x + 10;
    cout << "Inside callByReference function: x = " << x << endl;
}

int main() {
    int num = 5;

    cout << "Before callByValue function: num = " << num << endl;
    callByValue(num);
    cout << "After callByValue function: num = " << num << endl;

    cout << "Before callByReference function: num = " << num << endl;
    callByReference(num);
    cout << "After callByReference function: num = " << num << endl;

    return 0;
}
