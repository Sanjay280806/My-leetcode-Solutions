//448. Find All Numbers Disappeared in an Array
//Given an array of integers where 1 ≤ a[i] ≤ n (n = size of array), some elements appear twice and others appear once.
//Find all the elements of [1, n] inclusive that do not appear in this array.
//https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/submissions/2041207645/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        for(int i=0;i<nums.size();i++){
            while(nums[i]!=nums[nums[i]-1]){
                swap(nums[i],nums[nums[i]-1]);
            }
        }
        
        vector<int>result;
        for(int i =0; i<nums.size();i++){
            if(nums[i]!= i+1){
                result.push_back(i+1);
            }
        }
        return result;
    }
};