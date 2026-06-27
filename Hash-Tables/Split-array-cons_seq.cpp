//659.Split Array into Consecutive Subsequences
//Given an integer array nums that is sorted in non-decreasing order, return true if it
//is possible to split nums into one or more subsequences such that each subsequence consists of consecutive integers and has a length of at least 3.
//https://leetcode.com/problems/split-array-into-consecutive-subsequences/submissions/2047615689/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPossible(vector<int>& nums) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>>heap;

        for(int num : nums){
            while(!heap.empty() && heap.top().first< num-1){
                if(heap.top().second<3) return false;
                heap.pop();
            }
            if(!heap.empty() && heap.top().first == num-1){
                auto[endVal , length] = heap.top();
                heap.pop();

                heap.push({num,length +1});
            }else{
                heap.push({num , 1});
            }
        }
        while(!heap.empty()){
            if(heap.top().second < 3) return false;
            heap.pop();
        }
        return true;
        
    }
};