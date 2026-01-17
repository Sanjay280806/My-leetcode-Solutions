/*
    Problem: 152.Maximum Product Subarray
    LeetCode: https://leetcode.com/problems/maximum-product-subarray
    Difficulty: Medium
    
    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProd = nums[0];
        int minProd = nums[0];
        int result = nums[0];

        for (int i = 1; i < nums.size(); i++) {

            if (nums[i] < 0) {
                swap(maxProd, minProd);
            }

            maxProd = max(nums[i], maxProd * nums[i]);
            minProd = min(nums[i], minProd * nums[i]);

            result = max(result, maxProd);
        }

        return result;
    }
};

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution sol;
    int ans = sol.maxProduct(nums);

    cout << "Maximum product subarray = " << ans << endl;

    return 0;
}
