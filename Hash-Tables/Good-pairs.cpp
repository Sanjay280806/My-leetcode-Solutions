//1512. Number of Good Pairs
//Given an array of integers nums, a pair (i, j) is called good if nums[i] == nums[j] and i < j.
//https://leetcode.com/problems/number-of-good-pairs/submissions/2041937386/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int freq[101] = {0};
        int count =0;

        for(int num:nums){
            count+=freq[num];
            freq[num]++;
        }
        return count;
    }
};