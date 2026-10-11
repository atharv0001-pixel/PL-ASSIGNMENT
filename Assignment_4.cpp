
#include <iostream>
using namespace std;

class Car {
public:
    string name;
    int price;
    int speed;

    void input() {
        cout << "Enter Car Name: ";
        cin >> name;

        cout << "Enter Car Price: ";
        cin >> price;

        cout << "Enter Car Speed: ";
        cin >> speed;
    }

    void display() {
        cout << "\nCar Details" << endl;
        cout << "Car Name: " << name << endl;
        cout << "Car Price: " << price << endl;
        cout << "Car Speed: " << speed << " km/h" << endl;
    }
};

int main() {
    Car c1;

    c1.input();
    c1.display();

    return 0;
}
