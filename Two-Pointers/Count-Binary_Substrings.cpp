//696. Count Binary Substrings
//Given a string s, count the number of non-empty (contiguous) substrings that have the same number of 0's and 1's, and all the 0's and all the 1's in these substrings are grouped consecutively.
//https://leetcode.com/problems/count-binary-substrings/submissions/2048876377/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countBinarySubstrings(string s) {
        int prevGroupSize = 0;
        int CurrGroupSize = 1;
        int count =0;

        for(int i =1 ; i<s.size() ;i++){
            if(s[i]==s[i-1]){
                CurrGroupSize++;
            }
            else{
                prevGroupSize = CurrGroupSize;
                CurrGroupSize = 1;
            }

            if(prevGroupSize >= CurrGroupSize) count++;
        }
        return count;

        
    }
};