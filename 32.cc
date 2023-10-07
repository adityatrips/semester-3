#include <iostream>
#include <string>
using namespace std;

class SalarySlip {
   public:
    SalarySlip(string name, int id, float basicSalary, float hra, float da) {
        this->name = name;
        this->id = id;
        this->basicSalary = basicSalary;
        this->hra = hra;
        this->da = da;
    }

    void display() {
        float grossSalary = basicSalary + hra + da;
        float pf = 0.1 * basicSalary;
        float netSalary = grossSalary - pf;

        cout << "Name         : " << name << endl;
        cout << "ID           : " << id << endl;
        cout << "Basic Salary : " << basicSalary << endl;
        cout << "HRA          : " << hra << endl;
        cout << "DA           : " << da << endl;
        cout << "Gross Salary : " << grossSalary << endl;
        cout << "PF           : " << pf << endl;
        cout << "Net Salary   : " << netSalary << endl;
    }

   private:
    string name;
    int id;
    float basicSalary;
    float hra;
    float da;
};

int main() {
    SalarySlip slip("John Doe", 12345, 50000, 15000, 10000);
    slip.display();
    return 0;
}
