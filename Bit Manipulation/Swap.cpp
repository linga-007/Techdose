#include <iostream>

using namespace std;

int main() {
    int a,b;
    cout << "Enter a number: ";
    cin >> a;
    
    cout << "Enter a number: ";
    cin >> b;

    
    a = a ^ b;
    b = b ^ a;
    a = a ^ b;

    
    cout << a<<" "<<b;

    return 0;
}
