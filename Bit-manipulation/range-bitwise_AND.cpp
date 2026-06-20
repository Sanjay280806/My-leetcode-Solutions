//201. Bitwise AND of Numbers Range
//Given two integers left and right that represent the range [left, right], return the bitwise AND of all numbers in this range, inclusive.
//https://leetcode.com/problems/bitwise-and-of-numbers-range/submissions/2040144398/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        while(right>left){
            right = right & (right -1);
        }

        return right & left;
        
    }
};