//1248. Count Number of Nice Subarrays
// Given an array of integers nums and an integer k, return the number of nice subarrays.
// A subarray is nice if there are k odd numbers on it.
//https://leetcode.com/problems/count-number-of-nice-subarrays/submissions/2066490595/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int atmost(vector<int>& nums , int k){
        int left =0;
        int odd =0;
        int count =0;

        for(int right = 0 ; right <nums.size() ;right++){
            if(nums[right] % 2 == 1) odd++;
            while(odd>k){
                if(nums[left] % 2 == 1) odd--;
                left++;
            }
            count+=(right - left + 1);
        }
        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atmost(nums, k) - atmost(nums , k-1);
        
    }
};