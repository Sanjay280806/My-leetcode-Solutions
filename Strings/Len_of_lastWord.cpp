//58. Length of Last Word
// Given a string s consisting of words and spaces, return the length of the last word in the string.
//https://leetcode.com/problems/length-of-last-word/submissions/2031890680/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length() -1;

        while(i>=0 && s[i] ==' '){
            i--;
        }

        int length = 0;
        while(i>=0 && s[i] !=' '){
            length++;
            i--;
        }

        return length;
    }
};