//8. Zigzag Conversion
//https://leetcode.com/problems/zigzag-conversion/submissions/2036023173/


#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string convert(string s, int numRows) {

        if(numRows==1 || numRows >= s.length()) {
            return s;
        }

        vector<string> rows(numRows);

        int currentRow =0;
        bool isdown = false;

        for(char ch : s){

            rows[currentRow] +=ch;
            
            if(currentRow==0 || currentRow == numRows-1){
                isdown = !isdown;
            }

            if(isdown){
                currentRow++;
            }else{
                currentRow--;
            }

        }

        string result;
        for(string row : rows){
            result+=row;
        }

        return result;
        
    }
};