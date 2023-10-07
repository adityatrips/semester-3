#include <iostream>
using namespace std;

class B;

class A {
    int num1;

   public:
    void getdata() {
        cout << "Enter first number: ";
        cin >> num1;
    }
    friend void swap(A&, B&);
    void display() {
        cout << "First number after swapping: " << num1 << endl;
    }
};

class B {
    int num2;

   public:
    void getdata() {
        cout << "Enter second number: ";
        cin >> num2;
    }
    friend void swap(A&, B&);
    void display() {
        cout << "Second number after swapping: " << num2 << endl;
    }
};

void swap(A& a, B& b) {
    int temp = a.num1;
    a.num1 = b.num2;
    b.num2 = temp;
}

int main() {
    A a;
    B b;
    a.getdata();
    b.getdata();
    swap(a, b);
    a.display();
    b.display();
    return 0;
}
