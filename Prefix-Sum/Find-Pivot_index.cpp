//724. Find Pivot Index
//Given an array of integers nums, calculate the pivot index of this array.
//The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.
//If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array.
//Return the leftmost pivot index. If no such index exists, return -1.
//https://leetcode.com/problems/find-pivot-index/submissions/2054253827/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalsum = 0;
        for(int num : nums){
            totalsum += num;
        }

        int leftsum = 0;
        for(int i =0 ; i<nums.size() ; i++){
            int rightsum = totalsum - leftsum - nums[i];
            if(leftsum == rightsum){
                return i;
            }
            leftsum +=nums[i];
        }
        return -1;
        
    }
};