//1189. Maximum Number of Balloons
//Given a string text, you want to use the characters of text to form as many instances of the word "balloon" as possible.
//https://leetcode.com/problems/maximum-number-of-balloons/submissions/2041224234/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int>freq(26,0);

        for(char ch : text){
            freq[ch -'a']++;
        }
        
        return min({
            freq['b' - 'a'],
            freq['a' - 'a'],
            freq['l' - 'a'] / 2,
            freq['o' - 'a'] / 2,
            freq['n' - 'a'],
            
        });
    }
};