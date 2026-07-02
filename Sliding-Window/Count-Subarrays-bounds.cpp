//2444. Count Subarrays Within Given Bound
// Given an integer array nums and two integers minK and maxK, a fixed-bound subarray of nums is a subarray that satisfies the following conditions:
// The minimum value in the subarray is equal to minK.
// The maximum value in the subarray is equal to maxK.
// Return the number of fixed-bound subarrays.
//https://leetcode.com/problems/count-subarrays-with-fixed-bounds/submissions/2053129606/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans = 0;
        int lastmax = -1;
        int lastmin = -1;
        int bad = -1;

        for(int i =0 ; i<nums.size() ;i++){
            if(nums[i] < minK || nums[i] > maxK) bad = i;
            if(nums[i] == minK) lastmin = i;
            if(nums[i] == maxK) lastmax = i;

            int valid = min(lastmin , lastmax);
            if(valid > bad){
                ans+=valid - bad;
            }
        }
        return ans;
        
    }
};