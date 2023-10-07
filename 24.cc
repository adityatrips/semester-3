#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "Show from base!" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Show from derived!" << endl;
    }
};

int main() {
    Base *bPtr;
    Derived obj;
    
    bPtr = &obj;
    bPtr->show();
}