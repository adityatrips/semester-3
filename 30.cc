#include <cstring>
#include <iostream>
using namespace std;

class Person {
    char name[64];
    int age;
    char address[64];
    double totalSalary;

   public:
    Person() {
        name[0] = '\0';
        age = 0;
        address[0] = '\0';
        totalSalary = 0.0;
    }

    void setName(const char* n) {
        strncpy(name, n, 63);
        name[63] = '\0';
    }

    void setAge(int a) {
        age = a;
    }

    void setAddress(const char* a) {
        strncpy(address, a, 63);
        address[63] = '\0';
    }

    void setTotalSalary(double s) {
        totalSalary = s;
    }

    const char* getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    const char* getAddress() const {
        return address;
    }

    double getTotalSalary() const {
        return totalSalary;
    }
};

int main() {
    int n;
    cout << "Enter number of people: ";
    cin >> n;

    Person people[n];
    char name[64] = "\0";
    int age;
    char address[64] = "\0";
    double salary;

    for (int i = 0; i < n; i++) {
        cout << "Enter name    : ";
        cin >> name;
        people[i].setName(name);
        cout << "Enter age     : ";
        cin >> age;
        people[i].setAge(age);
        cout << "Enter address : ";
        cin >> address;
        people[i].setAddress(address);
        cout << "Enter salary  : ";
        cin >> salary;
        people[i].setTotalSalary(salary);
    }

    cout << "------" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Name    : " << people[i].getName() << endl;
        cout << "Age     : " << people[i].getAge() << endl;
        cout << "Address : " << people[i].getAddress() << endl;
        cout << "Salary  : " << people[i].getTotalSalary() << endl;
        cout << "------" << endl;
    }

    return 0;
}
