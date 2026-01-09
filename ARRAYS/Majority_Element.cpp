/*
LeetCode No.169 - Majority Element
https://leetcode.com/problems/majority-element/
TECHNIQUE USED: Boyer–Moore Voting Algorithm
--------------------------------------------------------
TIME COMPLEXITY:
O(n)  → Single traversal of array
SPACE COMPLEXITY:
O(1)  → Constant extra space
--------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {

    int candidate = 0;   
    int count = 0;       

    for (int i = 0; i < nums.size(); i++) {

        if (count == 0) {
            candidate = nums[i];
            count = 1;
        }
        else if (nums[i] == candidate) {
            count++;
        }
        else {
            count--;
        }
    }

    return candidate;
}

int main() {

    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    int result = majorityElement(nums);

    cout << "Majority Element: " << result << endl;

    return 0;
}
