#include <iostream>
using namespace std;

class LeapYear {
public:
    int year;

    void input() {
        cout << "Enter year: ";
        cin >> year;
    }

    void checkLeap() {
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
            cout << "Leap Year (February has 29 days)";
        else
            cout << "Not a Leap Year (February has 28 days)";
    }
};

int main() {
    LeapYear obj;
    obj.input();
    obj.checkLeap();
    return 0;
}