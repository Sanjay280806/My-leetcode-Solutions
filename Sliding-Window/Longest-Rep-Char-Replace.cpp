//424. Longest Repeating Character Replacement
//You are given a string s and an integer k. You can choose any character of the string and change it to any other uppercase English character. You can perform this operation at most k times.
//Return the length of the longest substring containing the same letter you can get after performing the above operations.
//https://leetcode.com/problems/longest-repeating-character-replacement/submissions/2063041411/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int characterReplacement(string s, int k) {
        int freq[26] = {};
        int left = 0 , Maxlen= 0 ,Maxfreq =0;
        for(int right = 0 ; right<s.size() ;right++){
            freq[s[right] - 'A']++;
            Maxfreq = max(Maxfreq , freq[s[right] - 'A']);

            if((right -left + 1) - Maxfreq > k){
                freq[s[left] - 'A']--;
                left++;
            }
            Maxlen = max(Maxlen , right -left +1);
        }
        return Maxlen;
        
    }
};