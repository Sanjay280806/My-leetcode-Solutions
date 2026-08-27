// 1249 .Minimum Remove to Make Valid Parentheses
//Given a string s of '(' , ')' and lowercase English characters.
//Your task is to remove the minimum number of parentheses ( '(' or ')', in any positions ) 
//so that the resulting parentheses string is valid and return any valid string.
//https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/submissions/2122208705/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> stk;

        for(int i = 0 ; i < s.size(); i++){
            if(s[i] == '('){
                stk.push(i);
            }else if(s[i] == ')'){
                if(!stk.empty()){
                    stk.pop();
                }else{
                    s[i] = '#';
                }
            }
        }

        while(!stk.empty()){
            s[stk.top()] = '#';
            stk.pop();
        }

        string result ="";
        for(char c : s){
            if(c != '#'){
                result += c;
            }
        }
        return result;
        
    }
};