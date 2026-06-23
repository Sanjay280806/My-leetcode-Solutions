//128. Longest Consecutive Sequence
//Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.
//https://leetcode.com/problems/longest-consecutive-sequence/submissions/2043310189/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>numSet(nums.begin(),nums.end());
        int longest = 0;

        for(int num : numSet){
            if(numSet.find(num - 1) == numSet.end()){
                int currentnum = num;
                int length = 1;
            

                while(numSet.find(currentnum +1)!=numSet.end()){
                    currentnum++;
                    length++;
                }
                longest = max(longest,length);
            }

        }
        return longest;

        
    }
};