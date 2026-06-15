//28. Find the Index of the First Occurrence in a String
// Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
//https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/submissions/2034175087/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        int pos = haystack.find(needle);

        if(pos == string :: npos){
            return -1;
        }
        return pos;
        
    }
};