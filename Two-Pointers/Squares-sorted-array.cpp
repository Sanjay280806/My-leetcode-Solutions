//977.Squares of a Sorted Array
//Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.
//https://leetcode.com/problems/squares-of-a-sorted-array/submissions/2048863426/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        int left = 0;
        int right = n-1;

        for(int pos=n-1 ; pos>=0 ;pos--){
            int leftsq = nums[left] * nums[left];
            int rightsq = nums[right] * nums[right];

            if(leftsq > rightsq){
                result[pos] = leftsq;
                left++;
            }else{
                result[pos] = rightsq;
                right--;
            }

        }
        return result;
        
    }
};