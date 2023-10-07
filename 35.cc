#include <iostream>
#include <string>
using namespace std;

class Student {
   protected:
    int roll_no;
    string name;

   public:
    void get_student_details() {
        cout << "Enter roll number: ";
        cin >> roll_no;
        cout << "Enter name: ";
        cin >> name;
    }
};

class Exam : public Student {
   protected:
    int marks[6];

   public:
    void get_exam_marks() {
        cout << "Enter marks for 6 subjects: ";
        for (int i = 0; i < 6; i++) {
            cin >> marks[i];
        }
    }
};

class Result : public Exam {
   private:
    int total_marks;

   public:
    void calculate_total_marks() {
        total_marks = 0;
        for (int i = 0; i < 6; i++) {
            total_marks += marks[i];
        }
    }
    void display_result() {
        cout << "Roll number: " << roll_no << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: ";
        for (int i = 0; i < 6; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
        cout << "Total marks: " << total_marks << endl;
    }
};

int main() {
    Result r;
    r.get_student_details();
    r.get_exam_marks();
    r.calculate_total_marks();
    r.display_result();
    return 0;
}
