//next greater element
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
   vector<int> arr = {10, 4, 2, 20, 40, 12, 30};
   stack<int> stk;
   
   int n = arr.size();
   vector<int> ans(n,0);
   ans[0] = -1;
   stk.push(arr[0]);
   
   int j=n-1;
   
   for(int i=1;i<n;i++){
       while(true){
           if(stk.empty()){
               ans[i] = -1;
               stk.push(arr[i]);
               break;
           }
           if(stk.top()<arr[i]){
               ans[i] = stk.top();
               stk.push(arr[i]);
               break;
           }
           else{
               stk.pop();
           }
       }
   }
   
   for(auto x : ans){
       cout<<x<<" ";
   }
   
   

    return 0;
}