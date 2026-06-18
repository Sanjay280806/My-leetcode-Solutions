//268. Missing Number
//Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.
//https://leetcode.com/problems/missing-number/submissions/2037463557/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int XorValue = 0;
        int n =nums.size();

        for(int i =0; i<n ;i++){
            XorValue^=(i+1)^nums[i];
        }

        return XorValue;
        
    }
};