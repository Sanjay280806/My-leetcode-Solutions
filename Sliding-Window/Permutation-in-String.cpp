//567. Permutation in String
//Given two strings s1 and s2, write a function to return true if s2 contains the permutation of s1. In other words, one of the first string's permutations is the substring of the second string.
//Strings consists of lowercase English letters only and the length of both strings s1 and s2 will not be larger than 10,000.
//https://leetcode.com/problems/permutation-in-string/submissions/2062034818/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size() , m=s2.size();
        if(n>m) return false;

        vector<int>s1Freq(26,0) , WindowFreq(26,0);
        for(int i=0 ;i<n ;i++){
            s1Freq[s1[i] -'a']++;
            WindowFreq[s2[i] -'a']++;
        }
        int matches = 0;
        for(int i=0 ;i<26 ;i++){
            if(s1Freq[i] == WindowFreq[i]) matches++;
        }

        for(int i=n ; i<m ;i++){
            if(matches == 26) return true;

            int addIdx = s2[i] -'a';
            WindowFreq[addIdx]++;
            if(WindowFreq[addIdx] == s1Freq[addIdx]) matches++;
            else if(WindowFreq[addIdx] == s1Freq[addIdx] + 1)matches--;

            int remIdx = s2[i - n] -'a';
            WindowFreq[remIdx]--;
            if(WindowFreq[remIdx] == s1Freq[remIdx]) matches++;
            else if(WindowFreq[remIdx] == s1Freq[remIdx] - 1)matches--;
        }
        return matches == 26;
        
    }
};