//125. Valid Palindrome
// Given a string s, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.
//https://leetcode.com/problems/valid-palindrome/submissions/2032824846/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;

        while (left < right) {

            while (left < right && !isalnum(s[left])) {
                left++;
            }

            while (left < right && !isalnum(s[right])) {
                right--;
            }

            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }
};