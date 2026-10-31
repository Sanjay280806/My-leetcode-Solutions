//2104. Sum of Subarray Ranges
//You are given an integer array nums. The range of a subarray of nums is the difference between the largest and smallest element in the subarray.
//Return the sum of all subarray ranges of nums.
//A subarray is a contiguous non-empty sequence of elements within an array.
//https://leetcode.com/problems/sum-of-subarray-ranges/submissions/2186366381/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
        long long sumOfMaximums = sumOfSubarrayMaximums(nums,n);
        long long sumOfMinimums = sumOfSubarrayMinimums(nums,n);
        return sumOfMaximums - sumOfMinimums;   
    }
    long long sumOfSubarrayMinimums(vector<int>& nums,int n){
        long long sum = 0;
        vector<int>stk;

        for(int i=0 ;i<=n;i++){
            int currentVal = (i==n) ? INT_MIN : nums[i];
            while(!stk.empty() && nums[stk.back()] >= currentVal){
                int mid = stk.back();
                stk.pop_back();
                int leftBound = stk.empty() ? -1 : stk.back();
                int rightBound = i;

                long long leftCount  = mid - leftBound;
                long long rightCount = rightBound - mid;
                sum+=(long long) nums[mid] * leftCount * rightCount;
            }
            if(i<n)stk.push(i);
        }
        return sum;
    }
    long long sumOfSubarrayMaximums(vector<int>& nums, int n) {
    long long sum = 0;
    vector<int> stk;

    for (int i = 0; i <= n; i++) {
        int currentVal = (i == n) ? INT_MAX : nums[i];

        while (!stk.empty() && nums[stk.back()] <= currentVal) {
            int mid = stk.back();
            stk.pop_back();
            int leftBoundary = stk.empty() ? -1 : stk.back();
            int rightBoundary = i;

            long long leftCount = mid - leftBoundary;
            long long rightCount = rightBoundary - mid;
            sum += (long long) nums[mid] * leftCount * rightCount;
        }
        if (i < n) stk.push_back(i);
    }

    return sum;
    }
};