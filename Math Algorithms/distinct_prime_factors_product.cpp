// Given array of positive integers nums, return the number of distinct prime factors in the product of the elements of nums.

#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:

    void findPrime(int n, set<int>& s) {
        
        while (n % 2 == 0) {
            s.insert(2);
            n /= 2;
        }
        for (int i = 3; i <= sqrt(n); i += 2) {
            while (n % i == 0) {
                s.insert(i);
                n /= i;
            }
        }
        if (n > 2) {
            s.insert(n);
        }
    }

    int distinctPrimeFactors(vector<int>& nums) {
        set<int> s;
        int size = nums.size();
        for (int i = 0; i < size; i++) {
            findPrime(nums[i], s);
        }
        return s.size();   
    }
};