//918. Maximum Sum Circular Subarray
//Given a circular integer array nums of length n, return the maximum possible sum of a non-empty subarray of nums.
// A circular array means the end of the array connects to the beginning of the array. Formally, the next element of nums[i] is nums[(i + 1) % n] and the previous element of nums[i] is nums[(i - 1 + n) % n].
//https://leetcode.com/problems/maximum-sum-circular-subarray/submissions/2070034127/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int currentmax = 0 , Maxsum = nums[0];
        int currentmin = 0 , Minsum = nums[0];
        int totalsum = 0;

        for(int num : nums){
            currentmax = max(num,currentmax + num);
            Maxsum = max(Maxsum , currentmax);

            currentmin = min(num,currentmin + num);
            Minsum = min(Minsum , currentmin);

            totalsum +=num;
        }
        if(Maxsum < 0) return Maxsum;

        return max(Maxsum , totalsum - Minsum);
        
    }
};