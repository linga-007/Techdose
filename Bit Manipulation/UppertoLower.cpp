#include <iostream>
using namespace std;

string toLower(string s){
    string ans = "";
    for(int i = 0; i < s.size(); i++){
        ans += (s[i] | (1 << 5));  
    }
    return ans;
}

string toUpper(string s){
    string ans = "";
    for(int i = 0; i < s.size(); i++){
        ans += (s[i] & ~(1 << 5));  
    }
    return ans;
}

int main(){
    string s;
    cout << "Enter a string: ";
    cin >> s;

    string upp = toUpper(s);
    string low = toLower(s);

    cout << upp;
    cout << low;

    return 0;
}
