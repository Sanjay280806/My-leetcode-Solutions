//219.Contains Duplicate II
//Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.
//https://leetcode.com/problems/contains-duplicate-ii/submissions/2043042965/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> window;

        for(int i=0; i<nums.size(); i++){
            if(window.count(nums[i])) return true;
        
            window.insert(nums[i]);
        
            if(window.size()>static_cast<size_t>(k)){
                window.erase(nums[i-k]);
            }
        }
        return false;
        

    }
};