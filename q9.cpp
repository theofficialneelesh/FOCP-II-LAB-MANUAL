#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    // number check
    if (ch >= '0' && ch <= '9') {
        cout << "Number";
    }
    // alphabet check
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {

        // vowel check
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            cout << "Vowel";
        }
        else {
            cout << "Consonant";
        }
    }
    else {
        cout << "Invalid symbol";
    }

    return 0;
}   