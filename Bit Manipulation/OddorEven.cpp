#include <iostream>

using namespace std;

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;

    if((a & 1) !=0){
        cout<<"odd";
    }
    else{
        cout<<"even";
    }

    return 0;
}
