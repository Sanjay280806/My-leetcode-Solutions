//242. Valid Anagram
// Given two strings s and t, return true if t is an anagram of s, and false otherwise.
//https://leetcode.com/problems/valid-anagram/submissions/2032886102/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        int count[26] = {0};
        for (char ch : s) {
            count[ch - 'a']++;
        }

        for (char ch : t) {
            count[ch - 'a']--;
            if (count[ch - 'a'] < 0) return false;
        }

        return true;
        
    }
};