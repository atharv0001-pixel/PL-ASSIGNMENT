
#include <iostream>
using namespace std;

class Employee {
public:
    int salary, bonus;

    Employee() {
        salary = 10000;
        bonus = 2000;
    }

    Employee(int s, int b) {
        salary = s;
        bonus = b;
    }

    void display() {
        cout << "Total Salary: " << salary + bonus << endl;
    }
};

int main() {
    Employee e1;
    Employee e2(20000, 5000);

    cout << "Default Constructor: ";
    e1.display();

    cout << "Parameterized Constructor: ";
    e2.display();

    return 0;
}
