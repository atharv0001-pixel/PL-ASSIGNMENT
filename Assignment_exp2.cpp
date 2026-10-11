
#include <iostream>
using namespace std;

class Book {
public:
    string name;
    int price;

    Book(string n, int p) {
        name = n;
        price = p;
    }

    Book(const Book &b) {
        name = b.name;
        price = b.price;
    }

    void display() {
        cout << "Book: " << name << endl;
        cout << "Price: " << price << endl;
    }

    ~Book() {
        cout << "Destructor Called" << endl;
    }
};

int main() {
    Book b1("C++", 500);
    Book b2 = b1;

    cout << "Original Book:\n";
    b1.display();

    cout << "\nCopied Book:\n";
    b2.display();

    return 0;
}
