//1047.Remove All Adjacent Duplicates In String
//You are given a string s consisting of lowercase English letters. 
//A duplicate removal consists of choosing two adjacent and equal letters and removing them.
//We repeatedly make duplicate removals on s until we no longer can.
//https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/submissions/2110474962/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeDuplicates(string s) {
        string stack;

        for(char c : s){
            if(!stack.empty() && stack.back() == c){
                stack.pop_back();
            }else{
                stack.push_back(c);
            }
        }
        return stack;
        
    }
};