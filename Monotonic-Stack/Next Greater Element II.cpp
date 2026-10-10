//503.Next Greater Element II
//Given a circular array (the next element of the last element is the first element of the array), 
//print the Next Greater Number for every element. The Next Greater Number of a number x is the first greater number to its traversing-order next in the array, 
//which means you could search circularly to find its next greater number. If it doesn't exist, output -1 for this number.
//https://leetcode.com/problems/next-greater-element-ii/submissions/2168505874/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n, -1);
    stack<int> stk;

    for (int i = 0; i < 2 * n; i++) {
        int current = nums[i % n];
        while (!stk.empty() && nums[stk.top()] < current) {
            result[stk.top()] = current;
            stk.pop();
        }

        if (i < n) stk.push(i);
    }
    return result;
    }

   
};