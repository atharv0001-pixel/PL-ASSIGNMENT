//Pizza Bill Calculator
//Input the pizza price and quantity. Calculate and display the total bill.
#include <iostream>
using namespace std;

int main() {
    float pizzaPrice, totalBill;
    int quantity;

    cout << "Enter pizza price: ";
    cin >> pizzaPrice;

    cout << "Enter quantity: ";
    cin >> quantity;

    totalBill = pizzaPrice * quantity;

    cout << "Total bill = Rs. " << totalBill << endl;

    return 0;
};