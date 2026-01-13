/*
    Problem: Product of Array Except Self
    LeetCode: https://leetcode.com/problems/product-of-array-except-self/
    Difficulty: Medium
    Topic: Array, Prefix Product, Suffix Product

    Approach:
    - First pass computes prefix products (product of elements to the left).
    - Second pass computes suffix products (product of elements to the right).
    - The result at each index is prefix * suffix.

    Time Complexity: O(n)
    Space Complexity: O(1) extra space (excluding output array)
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n, 1);

        int prefix = 1;
        for (int i = 0; i < n; i++) {
            answer[i] = prefix;
            prefix *= nums[i];
        }

        int suffix = 1;
        for (int i = n - 1; i >= 0; i--) {
            answer[i] *= suffix;
            suffix *= nums[i];
        }

        return answer;
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
    vector<int> result = sol.productExceptSelf(nums);

    cout << "Output: ";
    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}
