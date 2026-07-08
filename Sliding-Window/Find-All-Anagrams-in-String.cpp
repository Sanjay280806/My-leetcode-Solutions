//438.Find All Anagrams in a String
//Given a string s and a non-empty string p, find all the start indices of p's anagrams in s.
//Strings consists of lowercase English letters only and the length of both strings s and p will not be larger than 20,100.
//The order of output does not matter.
//https://leetcode.com/problems/find-all-anagrams-in-a-string/submissions/2060858728/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>result;
        int plen = p.length();
        int slen = s.length();

        if(slen<plen) return result;
        vector<int>Pcount(26,0) , Windowcount(26,0);
        for(int i=0 ; i<plen ;i++){
            Pcount[p[i] - 'a']++;
            Windowcount[s[i] - 'a']++;
        }
        int matches = 0;
        for(int i=0 ; i<26 ;i++){
            if(Pcount[i] == Windowcount[i]) matches++;
        }
        if(matches == 26) result.push_back(0);

        for(int i=plen ;i<slen ;i++){
            int inchar = s[i] -'a';
            int outchar =s[i-plen] -'a';

            Windowcount[inchar]++;
            if(Windowcount[inchar] == Pcount[inchar]) matches++;
            else if(Windowcount[inchar] == Pcount[inchar] + 1) matches--;

            Windowcount[outchar]--;
            if(Windowcount[outchar] == Pcount[outchar]) matches++;
            else if(Windowcount[outchar] == Pcount[outchar] - 1) matches--;
            if (matches == 26) result.push_back(i - plen + 1);
        
        

        }
        return result;
    }
};