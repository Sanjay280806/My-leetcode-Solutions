//1525.Number of Good Ways to Split a String
//Given a string s, return the number of good ways to split s.
//A split of a string is good if you can split s into two non-empty strings p
//https://leetcode.com/problems/number-of-good-ways-to-split-a-string/submissions/2047987100/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numSplits(string s) {
        int n = s.size();
        int rightfreq[26] = {0};
        int rightDistinct = 0;
        for(char ch : s){
            if(rightfreq[ch - 'a']==0) rightDistinct ++;
            rightfreq[ch - 'a']++;
        }
        bool leftSeen[26]={};
        int leftDistinct = 0;
        int count=0;

        for(int i=0 ; i<n-1; i++){
            int idx = s[i] - 'a';
            if(!leftSeen[idx]){
                leftSeen[idx]=true;
                leftDistinct++;
            }
            rightfreq[idx]--;
            if(rightfreq[idx]==0) rightDistinct--;

            if(leftDistinct == rightDistinct) count++;

    
        }
        return count; 
    }
};