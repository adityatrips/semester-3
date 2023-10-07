#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

class Palindrome {
   public:
    bool isPalindrome(int num) {
        int reversedNum = 0, orig = num;
        while (num > 0) {
            reversedNum = reversedNum * 10 + num % 10;
            num /= 10;
        }
        return orig == reversedNum;
    }

    bool isPalindrome(string str) {
        string reversedStr = str;
        reverse(reversedStr.begin(), reversedStr.end());
        return str == reversedStr;
    }
};

int main() {
    Palindrome palindrome;

    int ch;
    string str;

    while (true) {
        cout << "1. Check number palindrome" << endl;
        cout << "2. Check string palindrome" << endl;
        cout << "0. Exit" << endl;

        cout << "Enter your choice" << endl
             << ": ";
        cin >> ch;

        switch (ch) {
            case 1:
                int n;
                cout << "Enter number" << endl
                     << ": ";
                cin >> n;
                if (palindrome.isPalindrome(n)) {
                    cout << n << " is a palindrome number." << endl;
                } else {
                    cout << n << " is not a palindrome number." << endl;
                }
                break;
            case 2:
                cout << "Enter string" << endl
                     << ": ";
                cin >> str;
                if (palindrome.isPalindrome(str)) {
                    cout << str << " is a palindrome string." << endl;
                } else {
                    cout << str << " is not a palindrome string." << endl;
                }
                break;
            case 0:
                exit(0);
            default:
                cout << "Invalid choice" << endl;
                break;
        }
    }
}