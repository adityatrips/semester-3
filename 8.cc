#include <iostream>
using namespace std;
class FriendClass {
    int privateValue = 0;
    friend class AnotherClass;

   public:
    void setValue(int value) { privateValue = value; }
    int getValue() { return privateValue; }
};

class AnotherClass {
   public:
    void modifyValue(FriendClass &fc, int newValue) { fc.privateValue = newValue; }
};

int main() {
    FriendClass fc;
    fc.setValue(42);
    AnotherClass().modifyValue(fc, 100);

    cout << "Value after modification: " << fc.getValue() << endl;

    return 0;
}