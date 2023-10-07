#include <iostream>
using namespace std;

class Person {
   public:
    int age;
};

inline void getYoungestAndEldestAge(Person people[], int size, int& youngest, int& eldest) {
    youngest = people[0].age;
    eldest = people[0].age;
    for (int i = 1; i < size; i++) {
        if (people[i].age < youngest) {
            youngest = people[i].age;
        }
        if (people[i].age > eldest) {
            eldest = people[i].age;
        }
    }
}

int main() {
    Person people[5] = {{20}, {25}, {18}, {30}, {22}};
    int youngest, eldest;
    getYoungestAndEldestAge(people, 5, youngest, eldest);
    cout << "Youngest age: " << youngest << endl;
    cout << "Eldest age: " << eldest << endl;
    return 0;
}
