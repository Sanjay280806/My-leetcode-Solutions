//523. Continuous Subarray Sum
// Given an integer array nums and an integer k, return true if nums has a continuous subarray of size at least two whose elements sum up to a multiple of k, or false otherwise.
//https://leetcode.com/problems/continuous-subarray-sum/submissions/2056823639/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        long long PrefixSum =0;
        unordered_map<int , int>RemainderIndex;
        RemainderIndex[0] = -1;

        for(int i =0 ; i<n ;i++){
            PrefixSum +=nums[i];
            int remainder = (int) (PrefixSum % k);

            if(RemainderIndex.count(remainder)){
                if( i - RemainderIndex[remainder] >=2){
                    return true;
                }
            }else{
                RemainderIndex[remainder] = i;
            }
        }
        return false;
        
    }
};