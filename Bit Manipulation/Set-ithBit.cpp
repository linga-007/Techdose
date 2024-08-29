#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    cout << "Enter the bit to be set ";
    int bit;
    cin >> bit;

    n = (n | (1<<bit));
    
    cout<<n;

    return 0;
}
