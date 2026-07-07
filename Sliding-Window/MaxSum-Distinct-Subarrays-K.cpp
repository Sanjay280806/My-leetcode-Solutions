//2461. Maximum Sum of Distinct Subarrays with Length K
// Given an integer array nums and an integer k, return the maximum possible sum of a distinct subarray of nums with length k. A subarray is a contiguous non-empty sequence of elements within an array. A distinct subarray is a subarray that contains only unique elements.
//https://leetcode.com/problems/maximum-sum-of-distinct-subarrays-with-length-k/submissions/2057931246/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        long long Windowsum =0;
        long long Maxsum =0;
        for(int i=0 ; i<k ;i++){
            freq[nums[i]]++;
            Windowsum+=nums[i];
        }
        if((int)freq.size()==k){
            Maxsum = Windowsum;
        }

        for(int i=k ; i<(int)nums.size() ;i++){
            freq[nums[i]]++;
            Windowsum+=nums[i];

            int Outval = nums[i-k];
            freq[Outval]--;
            if(freq[Outval]==0){
                freq.erase(Outval);
            }
            Windowsum-=Outval;

            if((int)freq.size()==k){
                Maxsum = max(Maxsum , Windowsum);
            }
        }
        return Maxsum;
    }

};