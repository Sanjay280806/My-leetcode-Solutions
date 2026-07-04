//525. Contiguous Array
// Given a binary array, find the maximum length of a contiguous subarray with equal number of 0 and 1.
//https://leetcode.com/problems/contiguous-array/submissions/2055872284/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>map;
        map[0] = -1;
        int Maxlen = 0;
        int prefixSum = 0;

        for(int i =0 ; i <nums.size() ; i++){
            prefixSum += (nums[i] == 1) ? 1 : -1;

            if(map.count(prefixSum)){
                Maxlen = max(Maxlen , i -map[prefixSum]);
            }else{
                map[prefixSum] = i;
            }
        }
        return Maxlen;
         
    }
};