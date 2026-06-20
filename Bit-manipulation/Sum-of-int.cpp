//371. Sum of Two Integers
// Given two integers a and b, return the sum of the two integers without using the operators + and -.
//https://leetcode.com/problems/sum-of-two-integers/submissions/2040178850/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int getSum(int a, int b) {

        while(b!=0){
            int carry = (a & b) << 1;
            a = a^b;
            b = carry;
        }
        return a;
        
    }
};