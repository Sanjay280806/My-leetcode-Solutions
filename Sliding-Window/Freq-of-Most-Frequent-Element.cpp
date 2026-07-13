//1838. Frequency of the Most Frequent Element
// Given an integer array nums and an integer k, you can choose an index of nums and increment the element at that index by 1. You can perform this operation at most k times.
// Return the maximum possible frequency of an element after performing at most k operations.
//https://leetcode.com/problems/frequency-of-the-most-frequent-element/submissions/2066467531/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int left = 0 ;
        int ans =1;
        long long sum =0;

        for(int right =0 ;right<nums.size() ; right++){
            sum += nums[right];

            while((long long)nums[right]*(right-left+1)-sum > k){
                sum -= nums[left];
                left++;
            }

            ans=max(ans,(right - left + 1));
        }
        return ans;

        
    }
};