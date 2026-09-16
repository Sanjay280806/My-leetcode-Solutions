//946. Validate Stack Sequences
//Given two integer arrays pushed and popped each with distinct values, 
//return true if this could have been the result of a sequence of push and pop operations on an initially empty stack, or false otherwise.
//https://leetcode.com/problems/validate-stack-sequences/submissions/2143680597/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        vector<int>st;
        int j =0;

        for(int x : pushed){
            st.push_back(x);

            while(!st.empty() && st.back() == popped[j]){
                st.pop_back();
                j++;
            }
        }
        return j == popped.size();
        
    }
};