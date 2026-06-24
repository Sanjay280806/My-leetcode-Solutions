//767. Reorganize String
// Given a string s, rearrange the characters of s so that any two adjacent characters are not the same. Return any possible rearrangement of s or return "" if not possible.
//https://leetcode.com/problems/reorganize-string/submissions/2044949797/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reorganizeString(string s) {
        int freq[26]={};
        for(char ch : s){
            freq[ch - 'a']++;
        }
        int maxfreq =0;
        int maxchar =0;
        for (int i=0;i<26;i++){
            if(freq[i]>maxfreq){
                maxfreq=freq[i];
                maxchar=i;
            }
        }
        int n = s.size();
        if(maxfreq > (n+1)/2) return "";

        string result(n,' ');
        int idx =0;

        while(freq[maxchar]>0){
            result[idx] = (char)(maxchar + 'a');
            freq[maxchar]--;
            idx+=2;
        }

        for(int i =0;i<26;i++){
            while(freq[i]>0){
                if(idx>=n) idx=1;
                result[idx] = (char)(i + 'a');
                freq[i]--;
                idx+=2;
            }
        }
        return result;
        
    }
};