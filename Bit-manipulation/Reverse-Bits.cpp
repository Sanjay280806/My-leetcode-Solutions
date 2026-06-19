//190. Reverse Bits
//Reverse bits of a given 32 bits unsigned integer.
//https://leetcode.com/problems/reverse-bits/submissions/2039073576/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int reverseBits(int n) {
        unsigned int result = 0;

        for (int i = 0; i < 32; i++) {

            result <<= 1;        
            result |= (n & 1);  
            n >>= 1; 
        }
        return result;
        
    }
};