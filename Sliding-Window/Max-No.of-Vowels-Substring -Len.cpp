//1456. Maximum Number of Vowels in a Substring of Given Length
//Given a string s and an integer k, return the maximum number of vowel letters in any substring of s with length k.
//Vowel letters in English are 'a', 'e', 'i', 'o', and 'u'.
//https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/submissions/2064672543/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isvowel(char ch){
        return ch == 'a' || ch == 'e' || ch == 'i' ||
               ch == 'o' || ch == 'u';
    }
    int maxVowels(string s, int k) {
        int count =0;
        for(int i=0 ; i<k ;i++){
            if(isvowel(s[i])) count++;
        }
        int MaxCount = count;

        for(int i=k ;i<s.size() ;i++){
            if(isvowel(s[i-k])) count--;
            if(isvowel(s[i])) count++;

            MaxCount = max(MaxCount,count);
        }
        return MaxCount;
        
    }
};