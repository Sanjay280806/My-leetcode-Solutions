//392. Is Subsequence
//Given two strings s and t, return true if s is a subsequence of t, or false otherwise.
//https://leetcode.com/problems/is-subsequence/submissions/2033423673/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j =0;

        while(i<s.size() && j<t.size()){
            if(s[i]==t[j]){
                i++;
            }
            j++;
        }
        return i == s.size();
    }
};