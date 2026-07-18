//1749.Maximum Absolute Sum of Any Subarray
//You are given an integer array nums. The absolute sum of a subarray [numsl, numsl+1, ..., numsr-1, numsr] is abs(numsl + numsl+1 + ... + numsr-1 + numsr).
//Return the maximum absolute sum of any (possibly empty) subarray of nums.
//https://leetcode.com/problems/maximum-absolute-sum-of-any-subarray/submissions/2072622353/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxending = nums[0];
        int minending = nums[0];
        int Maxsum = nums[0];
        int Minsum = nums[0];

        for(int i=1 ;i<nums.size();i++){
            maxending = max(nums[i] , maxending + nums[i]);
            Maxsum = max(Maxsum , maxending);

            minending = min(nums[i] , minending + nums[i]);
            Minsum = min(Minsum , minending);
        }
        return max(Maxsum,abs(Minsum));
        
    }
};