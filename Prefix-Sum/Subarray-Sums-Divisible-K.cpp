//974. Subarray Sums Divisible by K
// Given an array A of integers, return the number of (contiguous, non-empty) subarrays that have a sum divisible by K.
//https://leetcode.com/problems/subarray-sums-divisible-by-k/submissions/2055834667/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int count = 0;
        int prefixsum = 0;
        unordered_map<int , int>RemainderCount;
        RemainderCount[0] = 1;

        for(int num : nums){
            prefixsum +=num;

            int remainder = ((prefixsum % k) + k) % k;
            count += RemainderCount[remainder];
            RemainderCount[remainder]++;
        }
        return count;
        
    }
};