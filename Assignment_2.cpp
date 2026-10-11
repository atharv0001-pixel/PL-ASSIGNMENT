
#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    string name;
    int marks;

    void input() {
        cout << "Enter Roll Number: ";
        cin >> roll;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << "\nRoll Number: " << roll;
        cout << "\nName: " << name;
        cout << "\nMarks: " << marks;
        cout << "\nResult: ";

        if (marks >= 40)
            cout << "Pass";
        else
            cout << "Fail";
    }
};

int main() {
    Student s;
    s.input();
    s.display();
    return 0;
}
