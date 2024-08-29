#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    cout << "Enter the bit to be checked: ";
    int bit;
    cin >> bit;

    if ((n & (1 << (bit))) == 0) {
        cout << "It is an unset bit";
    } else {
        cout << "It is a set bit";
    }

    return 0;
}
