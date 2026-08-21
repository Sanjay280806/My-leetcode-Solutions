//2390 .Removing Stars From a String
//Choose a star in s. , Return the string after all stars have been removed.
//Remove the closest non-star character to its left, as well as remove the star itself.
//https://leetcode.com/problems/removing-stars-from-a-string/submissions/2114245883/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeStars(string s) {
        int write = 0;
        for(char c : s){
            if(c == '*'){
                write--;
            }else{
                s[write] = c;
                write++;
            }
        }
        return s.substr(0,write);
        
    }
};