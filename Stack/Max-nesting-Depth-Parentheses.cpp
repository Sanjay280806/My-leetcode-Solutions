//1614. Maximum Nesting Depth of the Parentheses
//Given a valid parentheses string s, return the nesting depth of s. 
//The nesting depth is the maximum number of nested parentheses.
//https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/submissions/2110487055/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxDepth(string s) {
        int depth = 0;
        int maxdepth = 0;

        for(char c : s){
            if(c == '('){
                depth++;
                maxdepth = max(depth,maxdepth);
            }else if(c == ')'){
                depth--;
            }
        }
        return maxdepth;
        
    }
};