//53.Maximum Subarray
//Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
//https://leetcode.com/problems/maximum-subarray/submissions/2070044374/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int Currentsum = nums[0];
        int Maxsum = nums[0];

        for(int i=1 ; i<nums.size() ;i++){
            Currentsum = max(nums[i] , Currentsum + nums[i]);
            Maxsum = max(Maxsum , Currentsum);
        }
        return Maxsum;
        
    }
};