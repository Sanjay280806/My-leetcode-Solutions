//344. Reverse String
//Write a function that reverses a string. The input string is given as an array of characters s.
//https://leetcode.com/problems/reverse-string/submissions/2031879379/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
        int left =0;
        int right= s.size() - 1;

        while(left<right){
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            left++;
            right--;
        } 
    }
};