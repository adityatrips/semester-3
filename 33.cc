#include <iostream>
using namespace std;

class Complex {
   private:
    float real;
    float imag;

   public:
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }
    Complex operator++() {
        Complex temp;
        temp.real = ++real;
        temp.imag = ++imag;
        return temp;
    }
    Complex operator--() {
        Complex temp;
        temp.real = --real;
        temp.imag = --imag;
        return temp;
    }
    Complex operator+(Complex const &obj) {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    Complex operator-(Complex const &obj) {
        Complex res;
        res.real = real - obj.real;
        res.imag = imag - obj.imag;
        return res;
    }
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(5, 4), c2(2, 3);
    Complex c3 = c1 + c2;
    Complex c4 = c1 - c2;

    cout << "Complex num one                   : ";
    c1.display();
    cout << "Complex num two                   : ";
    c2.display();
    ++c1;
    --c2;
    cout << "Complex num one after increment   : ";
    c1.display();
    cout << "Complex num two after decrement   : ";
    c2.display();
    cout << "Complex num one + complex num two : ";
    c3.display();
    cout << "Complex num one - complex num two : ";
    c4.display();
    return 0;
}
