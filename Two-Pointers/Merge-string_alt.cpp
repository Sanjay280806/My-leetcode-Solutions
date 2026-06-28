//1768. Merge Strings Alternately
//https://leetcode.com/problems/merge-strings-alternately/submissions/2048853305/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result;
        int Maxlen = max(word1.size(),word2.size());

        for(int i =0 ; i<Maxlen ; i++){
            if(i < word1.size()){
                result += word1[i];
            }
            if(i < word2.size()){
                result += word2[i];
            }

        }
        return result;
    }
};