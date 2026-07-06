//643. Maximum Average Subarray I
// Given an integer array nums consisting of n elements, and an integer k, find a contiguous subarray whose length is equal to k that has the maximum average value and return this value. Any answer with a calculation error less than 10-5 will be accepted.
//https://leetcode.com/problems/maximum-average-subarray-i/submissions/2057863161/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int windowsum = 0;
        for(int i=0 ; i<k ;i++){
            windowsum+=nums[i];
        }

        int Maxsum = windowsum;
        for(int i=k ;i<(int)nums.size();i++){
            windowsum += nums[i] - nums[i-k];
            Maxsum = max(Maxsum , windowsum);
        }

        return (double)Maxsum/k;
        
    }
};