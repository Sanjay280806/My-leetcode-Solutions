//1647.Minimum Deletions to Make Character Frequencies Unique
//Given a string s, you can delete characters from s to make the frequency of each character unique. Return the minimum number of deletions needed to make the frequencies of each character unique.
//https://leetcode.com/problems/minimum-deletions-to-make-character-frequencies-unique/submissions/2048011738/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minDeletions(string s) {
        
        int freq[26]={};
        for(char ch : s){
            freq[ch -'a']++;
        }
        unordered_set<int>used;
        int deletions = 0;

        for(int f : freq){
            while(f>0 && used.count(f)){
                f--;
                deletions++;
            }
            if(f>0) used.insert(f);
        }
        return deletions;
    }
};