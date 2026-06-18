//231. Power of Two
// Given an integer n, return true if it is a power of two. Otherwise, return false.
//https://leetcode.com/problems/power-of-two/submissions/2037885453/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPowerOfTwo(int n) {

        return n>0 && (n & (-n)) == n;
        
    }
};