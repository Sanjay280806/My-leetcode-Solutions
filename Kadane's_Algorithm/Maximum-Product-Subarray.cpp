//152. Maximum Product Subarray
//Given an integer array nums, find a contiguous non-empty subarray within the array that has the largest product, and return the product.
//The testcases are generated so that the answer will fit in a 32-bit integer.
//https://leetcode.com/problems/maximum-product-subarray/submissions/2070066260/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxSoFar = nums[0];
        int minSoFar = nums[0];
        int result = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            int tempMax = max({nums[i], maxSoFar * nums[i], minSoFar * nums[i]});
            int tempMin = min({nums[i], maxSoFar * nums[i], minSoFar * nums[i]});

            maxSoFar = tempMax;
            minSoFar = tempMin;
            result = max(result, maxSoFar);
        }

        return result;
    }
};
