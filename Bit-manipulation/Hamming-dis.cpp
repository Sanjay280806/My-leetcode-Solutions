//461. Hamming Distance
//The Hamming distance between two integers is the number of positions at which the corresponding bits are different.
//https://leetcode.com/problems/hamming-distance/submissions/2039044584/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int hammingDistance(int x, int y) {
        int XorVal = x^y;
        int count = 0;

        while(XorVal !=0){
            XorVal = XorVal & (XorVal-1);
            count++;
        }

        return count;
        
    }
};