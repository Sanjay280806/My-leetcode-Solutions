//20.Valid Parentheses
//Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
//An input string is valid if:
// =>Open brackets must be closed by the same type of brackets.
// =>Open brackets must be closed in the correct order.
// =>Every close bracket has a corresponding open bracket of the same type.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        unordered_map<char , char> matchmap = {{')', '('}, {']', '['}, {'}', '{'}};
        
        for(char c : s){
            if(matchmap.count(c)){
                if(st.empty() || st.top() != matchmap[c]){ 
                    return false;
                }
                st.pop();
            }else{
                st.push(c);
            }
        }
        return st.empty();
    }
};

 