#include <iostream>
using namespace std;

class Student {
   protected:
    string name;
    int rollNo;

   public:
    void getDetails() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNo;
    }
};

class Test : virtual public Student {
   protected:
    float marks1, marks2;

   public:
    void getMarks() {
        cout << "Enter marks for test 1: ";
        cin >> marks1;
        cout << "Enter marks for test 2: ";
        cin >> marks2;
    }
};

class Sports : virtual public Student {
   protected:
    float score;

   public:
    void getScore() {
        cout << "Enter sports score: ";
        cin >> score;
    }
};

class Result : public Test, public Sports {
    float total;

   public:
    void display() {
        total = marks1 + marks2 + score;
        cout << "Name: " << name << endl;
        cout << "Roll number: " << rollNo << endl;
        cout << "Total marks: " << total << endl;
    }
};

int main() {
    Result r;
    r.getDetails();
    r.getMarks();
    r.getScore();
    r.display();
    return 0;
}
