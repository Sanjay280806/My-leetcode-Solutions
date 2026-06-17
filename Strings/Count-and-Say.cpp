//38. Count and Say
// The count-and-say sequence is a sequence of digit strings defined by the recursive formula:
//https://leetcode.com/problems/count-and-say/submissions/2036559758/


#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string countAndSay(int n) {

        string result = "1";
        for(int i=2; i<=n ;i++){
            string temp ="";
            int count = 1;

            for(int j = 1 ; j<=result.length() ; j++){

                if(j<result.length() && result[j] == result[j-1]){
                    count++;
                }else{
                    temp+=to_string(count);
                    temp+=result[j-1];
                    count =1;
                }

            }
            result = temp;
        }
        return result;
        
    }
};

