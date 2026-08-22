//150. Evaluate Reverse Polish Notation
//You are given an array of strings tokens that represents an arithmetic expression in a Reverse Polish Notation.
//The valid operators are '+', '-', '*', and '/'.
//Each operand may be an integer or another expression.
//The division between two integers always truncates toward zero.
//There will not be any division by zero.
//https://leetcode.com/problems/evaluate-reverse-polish-notation/submissions/2116376665/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>stk;
        for(const string& token : tokens){
            if(token == "+"){
                int b = stk.top() ; stk.pop();
                int a = stk.top() ; stk.pop();
                stk.push(a+b);
            }else if(token == "-"){
                int b = stk.top() ; stk.pop();
                int a = stk.top() ; stk.pop();
                stk.push(a-b);

            }else if(token == "*"){
                int b = stk.top() ; stk.pop();
                int a = stk.top() ; stk.pop();
                stk.push(a*b);

            }else if(token == "/"){
                int b = stk.top() ; stk.pop();
                int a = stk.top() ; stk.pop();
                stk.push(a/b);

            }else{
                stk.push(stoi(token));
            }
        }
        return stk.top();
        
    }
};