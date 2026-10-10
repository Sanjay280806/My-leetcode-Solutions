//739.Daily Temperatures
//Given an array of integers temperatures represents the daily temperatures, 
//return an array answer such that answer[i] is the number of days you have to wait after the ith day to get a warmer temperature. 
//If there is no future day for which this is possible, keep answer[i] == 0 instead.
//https://leetcode.com/problems/daily-temperatures/submissions/2168518065/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>stk;
        vector<int> result(temperatures.size() , 0);

        for(int i=0 ; i< temperatures.size(); i++){
            while(!stk.empty() && temperatures[i] > temperatures[stk.top()]){
                int prevIndex = stk.top();
                stk.pop();
                result[prevIndex] = i - prevIndex;
            }
            stk.push(i);
        }
        return result;
        
    }
};
 

