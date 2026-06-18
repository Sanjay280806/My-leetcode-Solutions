//645. Set Mismatch
//Given an array nums representing the data status of this set after the error. Your task is to firstly find the number occurs twice and then find the number that is missing. Return them in the form of an array.
//https://leetcode.com/problems/set-mismatch/submissions/2037787115/


#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int duplicate = -1 , missing = -1;

        for(int i=0;i<n;i++){
            int targetIdx = abs(nums[i]) - 1;
            if(nums[targetIdx]<0){
                duplicate = abs(nums[i]);

            }else{
                nums[targetIdx] = -nums[targetIdx];
            }
        }

        for(int i =0 ; i<n ;i++){
            if(nums[i]>0){
                missing = i+1;
            }
        }

        return {duplicate, missing};
        
    }
};