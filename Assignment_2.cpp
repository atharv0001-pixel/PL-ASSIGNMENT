//College Canteen Bill
//Input the quantity and price of Tea, Coffee, Sandwich, and Vadapav. Display the total bill
#include <iostream>
using namespace std;

int main() {

    int teaQty, coffeeQty, sandwichQty, vadapavQty;
    float teaPrice, coffeePrice, sandwichPrice, vadapavPrice;
    float totalBill;

    cout << "Enter Tea quantity: ";
    cin >> teaQty;
    cout << "Enter Tea price: ";
    cin >> teaPrice;

    cout << "Enter Coffee quantity: ";
    cin >> coffeeQty;
    cout << "Enter Coffee price: ";
    cin >> coffeePrice;

    cout << "Enter Sandwich quantity: ";
    cin >> sandwichQty;
    cout << "Enter Sandwich price: ";
    cin >> sandwichPrice;

    cout << "Enter Vadapav quantity: ";
    cin >> vadapavQty;
    cout << "Enter Vadapav price: ";
    cin >> vadapavPrice;

    totalBill = (teaQty * teaPrice)
              + (coffeeQty * coffeePrice)
              + (sandwichQty * sandwichPrice)
              + (vadapavQty * vadapavPrice);

    cout << "Total Canteen Bill = Rs. " << totalBill << endl;

    return 0;
}