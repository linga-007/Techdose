#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter a number ";
    cin>>n;
    int count = 0;
    while(n){
        count +=1;
        n= n & n-1;
        
    }
    cout<<count;
    

    return 0;
}