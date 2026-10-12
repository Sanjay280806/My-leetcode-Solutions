//402. Remove K Digits
//Given string num representing a non-negative integer num, and an integer k, 
//return the smallest possible integer after removing k digits from num.
//https://leetcode.com/problems/remove-k-digits/submissions/2170463659/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeKdigits(string num, int k) {
        string stack = "";
        for(char digit : num){
            while(!stack.empty() && k>0 && stack.back() > digit){
                stack.pop_back();
                k--;
            }
            stack.push_back(digit);
        }
        while(k > 0){
            stack.pop_back();
            k--;
        }
        int i = 0;
        while (i < stack.size() && stack[i] == '0') i++;

        string ans = stack.substr(i);
        return ans.empty() ? "0" : ans;
        
        
    }
};