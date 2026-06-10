//2348. Number of Zero-Filled Subarrays
//Given an integer array nums, return the number of subarrays filled with 0.
//https://leetcode.com/problems/number-of-zero-filled-subarrays/submissions/2028748929/

#include <vector>
using namespace std;
class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans = 0;
        long long count = 0;

        for (int x : nums) {
            if (x == 0) {
                count++;
                ans += count;
            } else {
                count = 0;
            }
        }

        return ans;
    }
};