//316.Remove Duplicate Letters
//Given a string s, remove duplicate letters so that every letter appears once and only once.
// You must make sure your result is the smallest in lexicographical order among all possible results.
//https://leetcode.com/problems/remove-duplicate-letters/submissions/2118788663/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeDuplicateLetters(string s) {
        
        int lastIndex[26] = {};
        for(int i = 0 ; i<s.size() ; i++){
            lastIndex[s[i] - 'a'] = i;
        }
        bool inStack[26] = {};
        string stack = "";

        for(int i=0 ; i<s.size();i++){
            char ch = s[i];
            if(inStack[ch - 'a']) continue;
            while(!stack.empty() && stack.back() > ch && lastIndex[stack.back() - 'a'] > i){
                inStack[stack.back() - 'a'] = false;
                stack.pop_back();
            }
            stack.push_back(ch);
            inStack[ch - 'a'] = true;
        }
        return stack;
    }
};