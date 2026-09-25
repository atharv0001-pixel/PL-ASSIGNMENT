// Car Fuel Cost Calculator
// Input distance, mileage and fuel price.
// Calculate fuel required and total fuel cost.

#include <iostream>
using namespace std;

int main() {

    float distance, mileage, fuelPrice;
    float fuelRequired, totalCost;

    cout << "Enter distance travelled (km): ";
    cin >> distance;

    cout << "Enter car mileage (km/l): ";
    cin >> mileage;

    cout << "Enter fuel price per litre: ";
    cin >> fuelPrice;

    fuelRequired = distance / mileage;
    totalCost = fuelRequired * fuelPrice;

    cout << "Fuel required = " << fuelRequired << " litres" << endl;
    cout << "Total fuel cost = Rs. " << totalCost << endl;

    return 0;
}