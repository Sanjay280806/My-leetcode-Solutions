//227.Basic Calculator II
//Given a string s which represents an expression, evaluate this expression and return its value. 
//You may assume that the given expression is always valid. 
//All intermediate results will be in the range of [-231, 231 - 1].
//https://leetcode.com/problems/basic-calculator-ii/submissions/2115301774/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int calculate(string s) {
        int result = 0;
        int lastNum = 0;
        int currentNum = 0;
        char prevOp = '+';

        for (int i = 0; i < s.size(); i++) {
            char c = s[i];

            if (isdigit(c)) {
                currentNum = currentNum * 10 + (c - '0');
            }

            if ((!isdigit(c) && c != ' ') || i == s.size() - 1) {
                if (prevOp == '+') {
                    result += lastNum;
                    lastNum = currentNum;
                } else if (prevOp == '-') {
                    result += lastNum;
                    lastNum = -currentNum;
                } else if (prevOp == '*') {
                    lastNum = lastNum * currentNum;
                } else if (prevOp == '/') {
                    lastNum = lastNum / currentNum;
                }
                prevOp = c;
                currentNum = 0;
            }
        }

        return result + lastNum;
    }
};