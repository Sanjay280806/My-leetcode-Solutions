//409. Longest Palindrome
//Given a string s which consists of lowercase or uppercase letters, return the length of the longest palindrome that can be built with those letters.
//https://leetcode.com/problems/longest-palindrome/submissions/2035464471/


#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> freq;

        for(char ch : s){
            freq[ch]++;
        }

        int length =0;
        bool hasOdd = false;

        for(auto it : freq){
            int count = it.second;

            if(count%2 ==0){
                length+=count;
            }
            else{
                length+=count-1;
                hasOdd = true;
            }
        }
        
        if (hasOdd){
            length++;
        }
        return length;
    }
};