#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c;
    float d, root1, root2;

    cout << "Enter values of a, b and c: ";
    cin >> a >> b >> c;

    d = (b * b) - (4 * a * c);

    if (d > 0) {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);

        cout << "Roots are Real and Different" << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2;
    }
    else if (d == 0) {
        root1 = -b / (2 * a);

        cout << "Roots are Real and Same" << endl;
        cout << "Root = " << root1;
    }
    else {
        cout << "Roots are Imaginary";
    }

    return 0;
}