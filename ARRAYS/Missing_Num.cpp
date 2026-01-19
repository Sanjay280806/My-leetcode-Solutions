/*
  268. Missing Number
  https://leetcode.com/problems/missing-number/
  Difficulty: Easy

  Time Complexity: O(n)
  Space Complexity: O(1)
*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int expectedSum = n * (n + 1) / 2;
        int actualSum = 0;

        for (int x : nums) {
            actualSum += x;
        }

        return expectedSum - actualSum;
    }
};

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;
    cout << "Missing number: " << obj.missingNumber(nums);

    return 0;
}
