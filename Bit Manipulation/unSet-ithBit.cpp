#include <iostream> 
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    cout << "Toggle bit ";
    int bit;
    cin >> bit;

    
    n = (n ^ (1 << (bit-1)));

    
    cout << n;

    return 0;
}
