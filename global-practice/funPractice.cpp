#include <iostream>
using namespace std;

//Electricity bill cal function
double calculateBill(int units) {
    double bill = 0;

    if (units <= 100) {
        bill = units * 2;
    } else if (units <= 200) {
        bill = (100 * 2) + (units - 100) * 3;
    } else {
        bill = (100 * 2) + (100 * 3) + (units - 200) * 5; 
    }

    return bill;
}
int main() {
    int units;
    cout << "Enter units consumed : ";
    cin >> units;

    double totalBill = calculateBill(units);
    cout << "Total electric bill : Rs" << totalBill << endl;
    
    return 0;
}