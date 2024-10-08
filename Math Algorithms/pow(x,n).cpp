// find power

class Solution {
public:
    double myPow(double x, int n) {
        
        n=(long long)n;
        double ans = 1;
        if(n<0){
            x=1/x;
            n=-n;
            // cout<<x;
        }
        while(n>0){
            if(n%2==1){
                ans*=x;
            }
            x=x*x;
            n=n/2;
        }

        return ans;
        
    }
};