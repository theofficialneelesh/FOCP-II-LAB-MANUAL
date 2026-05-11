#include <iostream>
using namespace std;

int main() {
    int items;
    float price, total, finalAmount;

    cout << "Enter number of items: ";
    cin >> items;

    cout << "Enter price per item: ";
    cin >> price;

    total = items * price;

    if (items > 1000) {
        finalAmount = total - (total * 0.10);
        cout << "10% Discount Applied" << endl;
    }
    else {
        finalAmount = total;
        cout << "No Discount Applied" << endl;
    }

    cout << "Total Expense = " << finalAmount;

    return 0;
}