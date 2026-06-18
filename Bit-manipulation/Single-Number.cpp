//136. Single Number
//Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
//https://leetcode.com/problems/single-number/submissions/2037177936/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int number = 0;
        for(int i :nums){
            number^=i;
        }
        return number;
        
    }
};