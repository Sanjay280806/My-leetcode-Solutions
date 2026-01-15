/*
    Problem: Merge Sorted Array
    LeetCode: https://leetcode.com/problems/merge-sorted-array/
    Difficulty: Easy
    
    Time Complexity: O(m + n)
    Space Complexity: O(1)
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;        
        int j = n - 1;        
        int k = m + n - 1;    

        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            } else {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }

        while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};

int main() {
    Solution sol;
    
    vector<int> nums1 = {1,2,3,0,0,0};
    int m = 3;

    vector<int> nums2 = {2,5,6};
    int n = 3;

    sol.merge(nums1, m, nums2, n);

    cout << "Merged array: ";
    for (int x : nums1) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
