#include<iostream>
using namespace std;
class ID {
public:
    void getId() {
        int n;
        cout << "Enter the value of N: ";
        cin >> n;

        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 && i % 5 == 0) {
                cout << i << " both" << endl;
            }
            else if (i % 3 == 0) {
                cout << i << " buzz" << endl;
            }
            else if (i % 5 == 0) {
                cout << i << " fuzz" << endl;
            }
            else {
                cout << i << endl;
            }
        }
    }
};

int main() {
    ID obj;
    obj.getId();
    return 0;
}