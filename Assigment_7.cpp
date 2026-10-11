
#include <iostream>
using namespace std;

class Student {
private:
    int marks;

public:
    static int count;

    Student(int m) {
        marks = m;
        count++;
    }

    static void showCount() {
        cout << "Total Students: " << count << endl;
    }

    friend void compare(Student a, Student b);
    friend class Teacher;
};

int Student::count = 0;

void compare(Student a, Student b) {
    if (a.marks > b.marks)
        cout << "Student 1 has more marks" << endl;
    else if (b.marks > a.marks)
        cout << "Student 2 has more marks" << endl;
    else
        cout << "Both have equal marks" << endl;
}

class Teacher {
public:
    void show(Student s) {
        cout << "Marks: " << s.marks << endl;
    }
};

int main() {
    Student s1(80), s2(90);
    Teacher t;

    Student::showCount();

    compare(s1, s2);

    t.show(s1);
    t.show(s2);

    return 0;
}
