/*
LeetCode No.75 - Sort Colors
https://leetcode.com/problems/sort-colors/
TECHNIQUE USED: Dutch National Flag Algorithm
--------------------------------------------------------
TIME COMPLEXITY: O(n) 
SPACE COMPLEXITY: O(1)
--------------------------------------------------------
*/
#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums) {
    int low = 0, mid = 0, high = nums.size() - 1;

    while (mid <= high) {
        if (nums[mid] == 0) {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if (nums[mid] == 1) {
            mid++;
        }
        else { // nums[mid] == 2
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int main() {
    vector<int> nums = {2, 0, 2, 1, 1, 0};

    sortColors(nums);

    for (int x : nums) {
        cout << x << " ";
    }

    return 0;
}
