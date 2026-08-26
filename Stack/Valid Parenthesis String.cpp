//678. Valid Parenthesis String
//Given a string s containing only three types of characters: '(', ')' and '*', return true if s is valid.
//The following rules define a valid string:
//Any left parenthesis '(' must have a corresponding right parenthesis ')'.
//Any right parenthesis ')' must have a corresponding left parenthesis '('.
//Left parenthesis '(' must go before the corresponding right parenthesis ')'.
//'*' could be treated as a single right parenthesis ')' or a single left parenthesis '(' or an empty string ""
//https://leetcode.com/problems/valid-parenthesis-string/submissions/2121125546/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkValidString(string s) {
        int minOpen = 0;
        int maxOpen = 0;

        for(char c : s){
            if(c == '('){
                minOpen++;
                maxOpen++;
            }else if(c == ')'){
                minOpen--;
                maxOpen--;
            }else{
                minOpen--;
                maxOpen++;
            }
            if(maxOpen < 0){
                return false;
            }
            minOpen = max(0,minOpen);
        }
        return minOpen == 0;
        
    }
};