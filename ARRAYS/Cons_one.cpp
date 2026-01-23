// LeetCode 485 — Max Consecutive Ones: Scan the array once, count current streak of 1s, reset on 0, and track the maximum streak encountered.

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int current = 0, maximum = 0;

        for (int x : nums) {
            if (x == 1) {
                current++;
            } else {
                maximum = max(maximum, current);
                current = 0;
            }
        }

        return max(maximum, current);
    }
};