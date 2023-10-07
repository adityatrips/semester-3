#include <string.h>

#include <iostream>
using namespace std;

class String {
 public:
  char str[20];

 public:
  void accept_string() {
    cout << "Enter String :   ";
    cin >> str;
  }
  void display_string() {
    cout << str << endl;
  }
  String operator+(String x) {
    String s;
    strcat(str, x.str);
    strcpy(s.str, str);
    return s;
  }
};
int main() {
  String str1, str2, str3;

  str1.accept_string();
  str2.accept_string();

  cout << endl
       << "First String is :  ";
  str1.display_string();

  cout << "Second String is :  ";
  str2.display_string();

  str3 = str1 + str2;
  cout << "Concatenated String is :  ";
  str3.display_string();

  return 0;
}
