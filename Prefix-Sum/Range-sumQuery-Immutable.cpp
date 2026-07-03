//303. Range Sum Query - Immutable
//Given an integer array nums, handle multiple queries of the following type:
//Calculate the sum of the elements of nums between indices left and right inclusive where left <= right
//https://leetcode.com/problems/range-sum-query-immutable/submissions/2054234026/

#include <bits/stdc++.h>
using namespace std;
class NumArray {
    vector<int>prefix;
public:
    NumArray(vector<int>& nums) {
        prefix.resize(nums.size() + 1 , 0);
        for(int i =0; i<(int)nums.size(); i++){
            prefix[i + 1] = prefix[i] + nums[i];
        }
        
    }
    
    int sumRange(int left, int right) {
        return prefix[right + 1] - prefix[left];
        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */