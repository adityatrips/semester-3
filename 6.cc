#include <iostream>
#include <string>
using namespace std;

class Student {
 public:
  int rollNo;
  string name;
  int perc;
};

int main() {
  int n;

  cout << "How many students to add? ";
  cin >> n;

  Student std[n];

  for (int i = 0; i < n; i++) {
    string name;
    int rollNo;
    int perc;

    cout << "Enter student name        : ";
    cin >> name;
    cout << "Enter student roll number : ";
    cin >> rollNo;
    cout << "Enter student percentage  : ";
    cin >> perc;
    cout << endl;

    std[i].name = name;
    std[i].rollNo = rollNo;
    std[i].perc = perc;
  }

  cout << "Student details:" << endl;
  cout << "--------------------" << endl;

  for (int i = 0; i < n; i++) {
    cout << "Name       : " << std[i].name << endl;
    cout << "Roll No.   : " << std[i].rollNo << endl;
    cout << "Percentage : " << std[i].perc << "%" << endl;
    cout << "--------------------" << endl;
  }

  return 0;
}