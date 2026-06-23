//383. Ransom Note
// Given an arbitrary ransom note string and another string containing letters from all the magazines, write a function that will return true if the ransom note can be constructed from the magazines ; otherwise, it will return false.
// Each letter in the magazine string can only be used once in your ransom note.
//https://leetcode.com/problems/ransom-note/submissions/2043016303/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        int freq[26]={0};
        for(char ch : magazine){
            freq[ch - 'a']++;
        }

        for(char ch : ransomNote){
            if(freq[ch - 'a'] ==0) return false;

            freq[ch - 'a']--;
        }
        return true;
        
    }
};