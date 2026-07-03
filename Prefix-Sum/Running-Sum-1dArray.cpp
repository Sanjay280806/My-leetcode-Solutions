//1480. Running Sum of 1d Array
//Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
//Return the running sum of nums.
//https://leetcode.com/problems/running-sum-of-1d-array/submissions/2054216210/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int>Prefix(n);
        Prefix[0] = nums[0];
        for(int i = 1 ; i<n ;i++){
            Prefix[i] = Prefix[i-1] + nums[i];
        }
        return Prefix;
        
    }
};