#include <exception>
#include <iostream>

using namespace std;

class MyException : public exception {
   public:
    virtual const char* what() const throw() {
        return "My Exception occurred";
    }
};

class MyClass {
   public:
    void myMethod() {
        throw MyException();
    }
};

int main() {
    MyClass obj;
    try {
        obj.myMethod();
    } catch (MyException& e) {
        cout << "Caught " << e.what() << endl;
    } catch (exception& e) {
        cout << "Caught " << e.what() << endl;
    }
    return 0;
}
