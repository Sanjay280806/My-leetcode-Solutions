//334. Increasing Triplet Subsequence
//Given an integer array nums, return true if there exists a triple of indices (i, j, k) such that i < j < k and nums[i] < nums[j] < nums[k]. If no such indices exists, return false.
//https://leetcode.com/problems/increasing-triplet-subsequence/submissions/2028819769/

#include <vector>
#include <climits>
using namespace std;
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first = INT_MAX;
        int second = INT_MAX;

        for (int x : nums) {
            if (x <= first) {
                first = x;
            }
            else if (x <= second) {
                second = x;
            }
            else {
                return true;
            }
        }

        return false;
    }
};