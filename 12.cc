#define STD_CNT 6

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class Student {
 protected:
  Student(int rollNo, char name[255]) {
    rollNo = rollNo;
    name = name;
  }

 public:
  int rollNo;
  char name[255];
};

class StudentUG : public Student {
 public:
  int sem;
  float fees;
  float stipend;
  static int ageUG;
  static int objCount;
  StudentUG() : Student(rollNo, name) {}

  StudentUG(int rollNo, char name[255], int age, int sem, float fees, float stipend) : Student(rollNo, name) {
    ageUG += age;
    objCount += 1;
    sem = sem;
    fees = fees;
    stipend = stipend;
  }

  static float avgAge() {
    return float(ageUG) / float(objCount);
  }
};

int StudentUG::ageUG = 0;
int StudentUG::objCount = 0;

class StudentPG : public Student {
 public:
  int sem;
  float fees;
  float stipend;
  static int agePG;
  static int objCount;
  StudentPG() : Student(rollNo, name) {}

  StudentPG(int rollNo, char name[255], int age, int sem, float fees, float stipend) : Student(rollNo, name) {
    agePG += age;
    objCount++;
    sem = sem;
    fees = fees;
    stipend = stipend;
  }

  static float avgAge() {
    return float(agePG) / float(objCount);
  }
};

int StudentPG::agePG = 0;
int StudentPG::objCount = 0;

int main() {
  StudentUG stdUG[STD_CNT] = {
      StudentUG(1, "Aditya", 19, 3, 231000, 0),
      StudentUG(2, "Anjali", 20, 3, 231000, 0),
  };
  StudentPG stdPG[STD_CNT];

  cout << "Enter the information for UG students: " << endl;

  for (int i = 0; i < 2; i++) {
    char name[255];
    int rollNo;
    int age;
    int sem;
    float fees;
    float stipend;

    cout << "Enter name: ";
    cin >> name;

    cout << "Enter roll number: ";
    cin >> rollNo;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter semester: ";
    cin >> sem;

    cout << "Enter fees: ";
    cin >> fees;

    cout << "Enter stipend: ";
    cin >> stipend;

    stdUG[i] = StudentUG(rollNo, name, age, sem, fees, stipend);
  }

  for (int i = 0; i < 2; i++) {
    char name[255];
    int rollNo;
    int age;
    int sem;
    float fees;
    float stipend;

    cout << "Enter name: ";
    cin >> name;

    cout << "Enter roll number: ";
    cin >> rollNo;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter semester: ";
    cin >> sem;

    cout << "Enter fees: ";
    cin >> fees;

    cout << "Enter stipend: ";
    cin >> stipend;

    stdPG[i] = StudentPG(rollNo, name, age, sem, fees, stipend);
  }

  cout << "The average age of UG students is: " << StudentUG::avgAge() << endl;
  cout << "The average age of PG students is: " << StudentPG::avgAge() << endl;

  return 0;
}