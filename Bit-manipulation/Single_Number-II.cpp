//137. Single Number II
//Given an integer array nums where every element appears three times except for one, which appears exactly once. Find the single element and return it.
//https://leetcode.com/problems/single-number-ii/submissions/2040166138/


# include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ones = 0;
        int tows = 0;

        for(int num : nums){
            ones = (ones ^ num) & ~tows;
            tows = (tows ^ num) & ~ones;
        }
        
        return ones;
    }
};