//992. Subarrays with K Different Integers
// Given an integer array nums and an integer k, return the number of good subarrays of nums.
// A good array is an array where the number of different integers in that array is exactly k.
//https://leetcode.com/problems/subarrays-with-k-different-integers/submissions/2068986525/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:

    int atMost(vector<int>& nums, int k) {

        unordered_map<int,int> freq;

        int left = 0;
        int distinct = 0;
        int count = 0;

        for(int right = 0; right < nums.size(); right++) {

            if(freq[nums[right]] == 0) distinct++;
            freq[nums[right]]++;

            while(distinct > k) {

                freq[nums[left]]--;

                if(freq[nums[left]] == 0) distinct--;
                left++;
            }
            count += (right-left+1);
        }
        return count;
    }

    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMost(nums,k)-atMost(nums,k-1);
    }
};