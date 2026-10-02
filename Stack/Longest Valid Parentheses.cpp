//32.Longest Valid Parentheses
//Given a string containing just the characters '(' and ')', 
//return the length of the longest valid (well-formed) parentheses substring.
//https://leetcode.com/problems/longest-valid-parentheses/submissions/2160393684/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestValidParentheses(string s) {
        int open = 0, close = 0, maxLen = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(')
                open++;
            else
                close++;

            if (open == close) {
                maxLen = max(maxLen, open + close);
            }
            else if (close > open) {
                open = 0;
                close = 0;
            }
        }
        open = 0;
        close = 0;

        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == '(')
                open++;
            else
                close++;

            if (open == close) {
                maxLen = max(maxLen, open + close);
            }
            else if (open > close) {
                open = 0;
                close = 0;
            }
        }

        return maxLen;
    }
};