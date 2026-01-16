/*
    Problem: 27.Remove Element
    LeetCode: https://leetcode.com/problems/remove-element/
    Difficulty: Easy
    
    Time Complexity: O(n)
    Space Complexity: O(1)
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {3, 2, 2, 3};
    int val = 2;

    int k = sol.removeElement(nums, val);

    cout << "k = " << k << "\nnums = ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
