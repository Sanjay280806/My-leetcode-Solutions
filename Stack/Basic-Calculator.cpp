//224.Basic Calculator
//Given a string s representing a valid expression, 
//implement a basic calculator to evaluate it, and return the result of the evaluation.
//https://leetcode.com/problems/basic-calculator/submissions/2123138186/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int calculate(string s) {

        stack<long long> stk;

        long long result = 0;
        long long num = 0;
        long long sign = 1;

        for (int i = 0; i < s.size(); i++) {

            char c = s[i];

            if (isdigit(c)) {
                num = num * 10 + (c - '0');
            }

            else if (c == '+') {
                result += sign * num;
                num = 0;
                sign = 1;
            }

            else if (c == '-') {
                result += sign * num;
                num = 0;
                sign = -1;
            }

            else if (c == '(') {
                stk.push(result);
                stk.push(sign);

                result = 0;
                sign = 1;
            }

            else if (c == ')') {

                result += sign * num;
                num = 0;

                long long previousSign = stk.top();
                stk.pop();

                long long previousResult = stk.top();
                stk.pop();

                result = previousResult + previousSign * result;
            }
        }

        result += sign * num;

        return (int)result;
    }
};