//713. Subarray Product Less Than K
// Given an array of integers nums and an integer k, return the number of contiguous subarrays where the product of all the elements in the subarray is strictly less than k.
//https://leetcode.com/problems/subarray-product-less-than-k/submissions/2064853199/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {

        if(k<=1) return 0;
        int count =0;
        int left =0;
        long long product = 1;

        for(int right = 0 ; right < nums.size() ;right++){
            product*=nums[right];

            while(product >= k){
                product /= nums[left];
                left++;
            }

            count+=(right -left +1);
        } 
        return count;
        
    }
};