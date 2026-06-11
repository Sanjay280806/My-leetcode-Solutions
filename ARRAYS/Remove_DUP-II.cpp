//80. Remove Duplicates from Sorted Array II
//Given an integer array nums sorted in non-decreasing order, remove some duplicates in-place such that each unique element appears at most twice. The relative order of the elements should be kept the same.
//https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/submissions/2029334609/

#include <vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() <= 2)
            return nums.size();
        int writepos = 1;
        int count = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                count++;
            } else {
                count = 1;
            }

            if (count <= 2) {
                nums[writepos] = nums[i];
                 writepos++;
            }
        }
        return writepos;
    }
};