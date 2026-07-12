//1004.Maximum Consecutive Ones III
//Given a binary array nums and an integer k, return the maximum number of consecutive 1's in the array if you can flip at most k 0's.
//https://leetcode.com/problems/max-consecutive-ones-iii/submissions/2064604252/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left =0;
        int ZeroCount = 0;

        for(int right = 0 ; right <nums.size() ;right++){
            if(nums[right] == 0){
                ZeroCount++;
            }

            if(ZeroCount > k){
                if(nums[left]  == 0){
                    ZeroCount--;
                }
                left++;
            }
        }
        return nums.size() - left;
        
    }
};