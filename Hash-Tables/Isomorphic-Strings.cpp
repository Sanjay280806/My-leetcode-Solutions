//205. Isomorphic Strings
//Given two strings s and t, determine if they are isomorphic. Two strings s and t are isomorphic if the characters in s can be replaced to get t.
//https://leetcode.com/problems/isomorphic-strings/submissions/2041952464/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t) {

        unordered_map<char,char>mp1;
        unordered_map<char,char>mp2;

        for(int i=0 ; i<s.size();i++){
            char ch1 = s[i];
            char ch2 = t[i];

            if(mp1.count(ch1)==0 && mp2.count(ch2)==0){
                mp1[ch1] = ch2;
                mp2[ch2] =ch1 ;
            }else{
                if(mp1[ch1] != ch2 || mp2[ch2] != ch1) return false;
            }
        }

        return true;

        
    }
};