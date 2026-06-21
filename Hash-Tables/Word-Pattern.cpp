//290. Word Pattern
//Given a pattern and a string s, find if s follows the same pattern. Here follow means a full match, such that there is a bijection between a letter in pattern and
//https://leetcode.com/problems/word-pattern/submissions/2040840177/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words ;
        string word;

        stringstream ss(s);

        while(ss>>word){
            words.push_back(word);
        }
        if(pattern.size() != words.size()) return false;

        unordered_map<char,string>mp1;
        unordered_map<string,char>mp2;

        for(int i=0; i<pattern.size(); i++){
            char ch = pattern[i];
            string w = words[i];

            if(mp1.count(ch)==0 && mp2.count(w)==0){
                mp1[ch] = w;
                mp2[w]= ch;
            }else{
                if(mp1[ch]!=w || mp2[w] != ch) return false;
            }
        }
        return true;
    }
};