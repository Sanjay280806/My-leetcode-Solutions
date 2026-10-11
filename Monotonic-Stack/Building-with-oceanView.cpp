//There are n buildings in a line. You are given an integer array heights of size n that represents the heights of the buildings in the line.
//The ocean is to the right of the buildings. 
//A building has an ocean view if the building is strictly taller than all the buildings to its right.
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findBuildings(vector<int>& heights) {
        stack<int> stk;
        for(int i =0 ; i<heights.size() ;i++){
            while(!stk.empty() && heights[stk.top()] <= heights[i]){
                stk.pop();
            }
            stk.push(i);
        }

        vector<int> result;
        while(!stk.empty()){
            result.push_back(stk.top());
            stk.pop();
        }
        reverse(result.begin() , result.end());
        return result;
        
    }
};