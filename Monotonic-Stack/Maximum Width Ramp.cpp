//962. Maximum Width Ramp
//A ramp in an integer array nums is a pair (i, j) for which i < j and nums[i] <= nums[j]. 
//The width of such a ramp is j - i.
//Given an integer array nums, return the maximum width of a ramp in nums. If there is no ramp in nums, return 0
//https://leetcode.com/problems/maximum-width-ramp/submissions/2183287843/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int n = nums.size();
        stack<int>stk;

        for(int i=0 ; i<n ;i++){
            if(stk.empty() || nums[i] < nums[stk.top()]){
                stk.push(i);
            }
        }
        int maxWidth=0;
        for(int j=n-1 ; j>=0 ;j--){
            while(!stk.empty() && nums[j] >= nums[stk.top()]){
                maxWidth = max(maxWidth,j - stk.top());
                stk.pop();
            }
        }
        return maxWidth;
    }
};