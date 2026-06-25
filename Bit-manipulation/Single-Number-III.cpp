//260. Single Number III
// Given an integer array nums, in which exactly two elements appear only once and all the other elements appear exactly twice. Find the two elements that appear only once. You can return the answer in any order.
//https://leetcode.com/problems/single-number-iii/submissions/2045951015/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long Xorall = 0;
        for(int num :nums){
            Xorall^=num;
        }
        long long Diffbit = Xorall & (-Xorall);
        int x =0;
        for(int num : nums){
            if(num & Diffbit){
                x^=num;
            }
        }
        return{x,(int)(Xorall^x)};

        
    }
};