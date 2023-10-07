#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class Stack {
   private:
    vector<T> stack;

   public:
    void push(T val) {
        stack.push_back(val);
    }

    T pop() {
        if (stack.empty()) {
            throw out_of_range("Stack is empty");
        }
        T val = stack.back();
        stack.pop_back();
        return val;
    }

    T top() {
        if (stack.empty()) {
            throw out_of_range("Stack is empty");
        }
        return stack.back();
    }

    bool empty() {
        return stack.empty();
    }
};

int main() {
    Stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    while (!s.empty()) {
        cout << s.pop() << endl;
    }

    return 0;
}
