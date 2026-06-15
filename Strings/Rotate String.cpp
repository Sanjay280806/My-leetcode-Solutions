//796. Rotate String
//Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.
//https://leetcode.com/problems/rotate-string/submissions/2033803198/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length()) return false;

        string doubled = s+s;

        return doubled.find(goal) != string::npos;
    }
};