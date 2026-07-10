//209.Minimum Size Subarray Sum
//Given an array of positive integers nums and a positive integer target, return the minimal length of a contiguous subarray [numsl, numsl+1, ..., numsr-1, numsr] of which the sum is greater than or equal to target. If there is no such subarray, return 0 instead.
//https://leetcode.com/problems/minimum-size-subarray-sum/submissions/2063108299/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n+1 , 0);

        for(int i = 1 ;i<=n ;i++){
            prefix[i] = prefix[i-1] + nums[i-1];
        }
        int minlen = n+1;

        for(int i=0 ; i<=n ;i++){
            long long need = (long long) prefix[i] + target;
            int lo =i+1 , hi = n;
            while(lo<=hi){
                int mid = lo +(hi - lo)/2;
                if(prefix[mid] >= need){
                    hi = mid-1;
                }else{
                    lo = mid+1;
                }
            }
            if(lo<=n){
                minlen = min(minlen , lo-i);
            }
        }
        return minlen == n+1 ? 0 : minlen;
        
    }
};