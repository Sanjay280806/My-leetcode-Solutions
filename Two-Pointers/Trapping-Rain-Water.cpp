//42. Trapping Rain Water
// Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.
//https://leetcode.com/problems/trapping-rain-water/submissions/2052036708/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int trap(vector<int>& height) {
        stack<int> st;
        int totalWater = 0;
        for(int i =0 ;i <(int)height.size() ; i++){
            while(!st.empty() && height[i]>height[st.top()]){
                int bottom = st.top();
                st.pop();
                if(st.empty()){
                    break;
                }
                int left = st.top();
                int boundedHeight = min(height[left] , height[i]) - height[bottom];
                int width = i -left -1;
                totalWater += boundedHeight*width;
            }
            st.push(i);
        }
        return totalWater;
        
    }
};