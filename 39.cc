#include <iostream>
using namespace std;

class MyClass {
   public:
    void printAddress() {
        cout << "Address of this object: " << this << endl;
    }
};

int main() {
    MyClass obj1, obj2;
    obj1.printAddress();
    obj2.printAddress();
    return 0;
}
