//792. Number of Matching Subsequences
//Given a string s and an array of strings words, return the number of words[i] that is a subsequence of s.'
//https://leetcode.com/problems/number-of-matching-subsequences/submissions/2046758177/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        vector<vector<int>>charpositions(26);
        for(int i =0; i<s.size() ;i++){
            charpositions[s[i] - 'a'].push_back(i);
        }
        int count =0;
        for(const string & word :words){
            if(isSubsequence(word,charpositions)){
                count++;
            }
        }
        return count;  
    }
    bool isSubsequence(const string & word , const vector<vector<int>> & charpositions){
        int prevpos = -1;
        for(char ch : word){
            const vector<int> & positions = charpositions[ch - 'a'];
            auto it  = upper_bound(positions.begin(),positions.end(),prevpos);
            if(it == positions.end()){
                return false;
            }
            prevpos = *it;
        }
        return true;
    }
};