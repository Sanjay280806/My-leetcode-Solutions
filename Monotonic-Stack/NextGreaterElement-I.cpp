//496.Next Greater Element I
//The next greater element of some element x in an array is the first greater element that is to the right of x in the same array.
//You are given two distinct 0-indexed integer arrays nums1 and nums2, where nums1 is a subset of nums2.
//For each 0 <= i < nums1.length, find the index j such that nums1[i] == nums2[j] 
//determine the next greater element of nums2[j] in nums2. If there is no next greater element, then the answer for this query is -1.
//https://leetcode.com/problems/next-greater-element-i/submissions/2162356227/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int , int>map;
        stack<int> stk;

        for(int num : nums2) {
            while(!stk.empty() && stk.top() < num){
                map[stk.top()] = num;
                stk.pop();
            }
            stk.push(num);
        }
        
        vector<int> result;
        for(int num : nums1) {
            result.push_back(map.count(num) ? map[num] : -1);
        }
        return result;
        
    }
};