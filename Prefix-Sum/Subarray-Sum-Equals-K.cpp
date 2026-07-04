//560. Subarray Sum Equals K
// Given an array of integers and an integer k, you need to find the total number of continuous subarrays whose sum equals to k.
//https://leetcode.com/problems/subarray-sum-equals-k/submissions/2055786137/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        int prefixsum = 0;
        unordered_map<int,int>prefixCount;
        prefixCount[0] = 1;

        for(int num : nums){
            prefixsum +=num;
            if(prefixCount.count(prefixsum - k)){
                count += prefixCount[prefixsum - k];
            }
            prefixCount[prefixsum]++;
        }
        return count;
        
    }
};