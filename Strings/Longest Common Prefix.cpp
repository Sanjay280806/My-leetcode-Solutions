//18. Longest Common Prefix
//Write a function to find the longest common prefix string amongst an array of strings.
//https://leetcode.com/problems/longest-common-prefix/submissions/2033820372/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string prefix = strs[0];

        for(int i=1; i<strs.size(); i++){
            while(strs[i].find(prefix)!=0){
                prefix.pop_back();

                if(prefix.empty()){
                    return "";
                }
            }
        }
        return prefix;
        
    }
};