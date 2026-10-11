
#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, breadth;

public:
    void input() {
        cout << "Enter Length: ";
        cin >> length;
        cout << "Enter Breadth: ";
        cin >> breadth;
    }

    void area();
    void perimeter() {
        cout << "Perimeter: " << 2 * (length + breadth) << endl;
    }
};

void Rectangle::area() {
    cout << "Area: " << length * breadth << endl;
}

int main() {
    Rectangle r;
    r.input();
    r.area();
    r.perimeter();
    return 0;
}
